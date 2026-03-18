/*
 * XREFs of ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C01665E0
 * Callers:
 *     CoreMsgCreatePort @ 0x1C01652B4 (CoreMsgCreatePort.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00741E4 (wcsncmp.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0165CD0 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C0165D94 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C01663D0 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C01664E4 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C0166994 (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0166FD4 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::CreatePort(
        __int64 a1,
        void *const a2,
        const unsigned __int16 *a3,
        void **a4)
{
  int AlpcPortName; // ebx
  HANDLE v7; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  struct _GUID *v11; // rdi
  const unsigned __int16 *v12; // rcx
  HANDLE Handle; // [rsp+20h] [rbp-89h] BYREF
  struct _UNICODE_STRING v14; // [rsp+28h] [rbp-81h] BYREF
  struct CoreMessagingK::CoreMsgObject *v15; // [rsp+38h] [rbp-71h] BYREF
  char v16; // [rsp+40h] [rbp-69h] BYREF

  *a4 = 0LL;
  Handle = 0LL;
  if ( wcsncmp(L"Kernel\\MIT\\InputPort", L"Kernel\\", 7uLL) )
  {
    AlpcPortName = -1073741585;
LABEL_3:
    v7 = Handle;
    goto LABEL_4;
  }
  AlpcPortName = CoreMessagingK::CoreMsgObject::Create(
                   0,
                   (const struct CoreMessagingK::ObjectImplVtbl *)&CoreMessagingK::ServerPortInfo::s_Vtbl,
                   &v15,
                   &Handle);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  v11 = (struct _GUID *)((char *)v15 + 8);
  AlpcPortName = CoreMessagingK::Runtime::CopyString(v10, v9, (void **)v15 + 5);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  *(_DWORD *)&v14.Length = 8912896;
  v14.Buffer = (PWSTR)&v16;
  AlpcPortName = ExUuidCreate(v11 + 1);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  AlpcPortName = CoreMessagingK::ServerPorts::GetAlpcPortName(v11 + 1, &v14);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  AlpcPortName = CoreMessagingK::ServerPorts::CreateAlpcPort(a2, &v14, (struct CoreMessagingK::ServerPortInfo *)v11);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  AlpcPortName = CoreMessagingK::RegistrarClient::RegisterAlpcPort(v11 + 1, &v14);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(v12, v11 + 1);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  v7 = 0LL;
  *(_QWORD *)&v11[3].Data1 = CoreMessagingK::ServerPorts::s_PortInfos;
  AlpcPortName = 0;
  *a4 = Handle;
  CoreMessagingK::ServerPorts::s_PortInfos = (struct CoreMessagingK::ServerPortInfo *)v11;
  Handle = 0LL;
LABEL_4:
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)AlpcPortName;
}
