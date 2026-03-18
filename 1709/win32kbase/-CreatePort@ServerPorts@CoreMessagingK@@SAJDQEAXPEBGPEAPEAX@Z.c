/*
 * XREFs of ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00866D8
 * Callers:
 *     CoreMsgCreatePort @ 0x1C0086608 (CoreMsgCreatePort.c)
 * Callees:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C008684C (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0086940 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C0086A1C (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C0086D7C (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C0086E0C (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0088010 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00A7628 (wcsncmp.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::CreatePort(
        __int64 a1,
        void *const a2,
        const unsigned __int16 *a3,
        void **a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS AlpcPortName; // ebx
  struct _GUID *v8; // rdi
  const unsigned __int16 *v9; // rcx
  void *v10; // rcx
  void *v12; // [rsp+28h] [rbp-79h] BYREF
  struct _UNICODE_STRING v13; // [rsp+30h] [rbp-71h] BYREF
  struct CoreMessagingK::CoreMsgObject *v14; // [rsp+40h] [rbp-61h] BYREF
  char v15; // [rsp+48h] [rbp-59h] BYREF

  gMitPortHandle = 0LL;
  v12 = 0LL;
  if ( !wcsncmp(L"Kernel\\MIT\\InputPort", L"Kernel\\", 7uLL) )
  {
    AlpcPortName = CoreMessagingK::CoreMsgObject::Create(
                     0,
                     (const struct CoreMessagingK::ObjectImplVtbl *)&CoreMessagingK::ServerPortInfo::s_Vtbl,
                     &v14,
                     &v12);
    if ( AlpcPortName >= 0 )
    {
      v8 = (struct _GUID *)((char *)v14 + 8);
      AlpcPortName = CoreMessagingK::Runtime::CopyString(v6, v5, (char *)v14 + 40);
      if ( AlpcPortName >= 0 )
      {
        *(_DWORD *)&v13.Length = 8912896;
        v13.Buffer = (PWSTR)&v15;
        AlpcPortName = ExUuidCreate(v8 + 1);
        if ( AlpcPortName >= 0 )
        {
          AlpcPortName = CoreMessagingK::ServerPorts::GetAlpcPortName(v8 + 1, &v13);
          if ( AlpcPortName >= 0 )
          {
            AlpcPortName = CoreMessagingK::ServerPorts::CreateAlpcPort(
                             a2,
                             &v13,
                             (struct CoreMessagingK::ServerPortInfo *)v8);
            if ( AlpcPortName >= 0 )
            {
              AlpcPortName = CoreMessagingK::RegistrarClient::RegisterAlpcPort(v8 + 1, &v13);
              if ( AlpcPortName >= 0 )
              {
                AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(v9, v8 + 1);
                if ( AlpcPortName >= 0 )
                {
                  v10 = 0LL;
                  *(_QWORD *)&v8[3].Data1 = CoreMessagingK::ServerPorts::s_PortInfos;
                  AlpcPortName = 0;
                  gMitPortHandle = v12;
                  CoreMessagingK::ServerPorts::s_PortInfos = (struct CoreMessagingK::ServerPortInfo *)v8;
                  v12 = 0LL;
                  goto LABEL_10;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    AlpcPortName = -1073741585;
  }
  v10 = v12;
LABEL_10:
  if ( v10 )
    ZwClose(v10);
  return (unsigned int)AlpcPortName;
}
