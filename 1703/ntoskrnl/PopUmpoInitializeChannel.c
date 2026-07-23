/*
 * XREFs of PopUmpoInitializeChannel @ 0x140822E64
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PopUmpoProcessMessages @ 0x14006F080 (PopUmpoProcessMessages.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x140148580 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x14017EE40 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14017F080 (ZwAlpcSetInformation.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1404A57B0 (RtlAddAccessAllowedAce.c)
 *     ExCreateCallback @ 0x1404CC7B0 (ExCreateCallback.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 */

__int64 PopUmpoInitializeChannel()
{
  int v0; // ecx
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  NTSTATUS Acl; // ebx
  PCALLBACK_OBJECT v5; // rsi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-81h] BYREF
  _QWORD PortInformation[2]; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp-31h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  PopAlpcServerPort = 0LL;
  PopAlpcClientPort = 0LL;
  PopUmpoPushLock = 0LL;
  v0 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  CallbackObject = 0LL;
  PopUmpoAlpcClientConnected = 0;
  v1 = 4 * v0 + 28;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x6F706D55u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\PowerPort");
            memset(&PortAttributes, 0, sizeof(PortAttributes));
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.ObjectName = &DestinationString;
            PortAttributes.MaxMessageLength = 512LL;
            ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
            PortAttributes.Flags = 0x100000;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 512;
            Acl = ZwAlpcCreatePort(&PopAlpcServerPort, &ObjectAttributes, &PortAttributes);
            if ( Acl >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = 0LL;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 512;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Acl = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 0);
              if ( Acl >= 0 )
              {
                v5 = CallbackObject;
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  PortInformation[1] = 0LL;
                  PortInformation[0] = v5;
                  Acl = ZwAlpcSetInformation(PopAlpcServerPort, AlpcRegisterCallbackInformation, PortInformation, 0x10u);
                  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
                  if ( Acl >= 0 )
                  {
                    PopUmpoProcessMessages();
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
