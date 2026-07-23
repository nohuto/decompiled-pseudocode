/*
 * XREFs of DbgkpCreateNotificationEvent @ 0x14082109C
 * Callers:
 *     DbgkpInitializePhase1 @ 0x14082103C (DbgkpInitializePhase1.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140067040 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateEvent @ 0x14017E840 (ZwCreateEvent.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1404A57B0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall DbgkpCreateNotificationEvent(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  ULONG v3; // edi
  ACL *PoolWithTag; // rax
  ACL *v5; // rbx
  NTSTATUS Acl; // edi
  ACL *v7; // rcx
  HANDLE EventHandle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+D0h] [rbp-30h] BYREF

  *(_DWORD *)&UnicodeString.Length = 2621478;
  UnicodeString.Buffer = L"lpacInstrumentation";
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v3 = 4
         * (CapabilitySid[1]
          + *((unsigned __int8 *)SeAllAppPackagesSid + 1)
          + *((unsigned __int8 *)SeLocalSid + 1)
          + *((unsigned __int8 *)SeLocalSystemSid + 1)
          + *((unsigned __int8 *)SeWorldSid + 1))
         + 108;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v3, 0x6C636144u);
      v5 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
      Acl = RtlCreateAcl(PoolWithTag, v3, 2u);
      v7 = v5;
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v5, 2u, 0x120001u, SeLocalSid);
        v7 = v5;
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v5, 2u, 0x120001u, SeAllAppPackagesSid);
          v7 = v5;
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v5, 2u, 0x120001u, CapabilitySid);
            v7 = v5;
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v5, 2u, 0x1F0003u, SeLocalSystemSid);
              v7 = v5;
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v5, 2u, 0x120001u, SeWorldSid);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
                  if ( Acl >= 0 )
                  {
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.SecurityQualityOfService = 0LL;
                    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.Attributes = 528;
                    ObjectAttributes.ObjectName = a1;
                    Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                    ExFreePoolWithTag(v5, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = ObReferenceObjectByHandle(
                              EventHandle,
                              2u,
                              (POBJECT_TYPE)ExEventObjectType,
                              0,
                              (PVOID *)&UnicodeString,
                              0LL);
                      DbgkErrorPortRegisteredEvent = *(PRKEVENT *)&UnicodeString.Length;
                      ZwClose(EventHandle);
                    }
                    return Acl;
                  }
                }
                v7 = v5;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v7, 0);
      return Acl;
    }
  }
  return result;
}
