/*
 * XREFs of RmgrSrv_RmGetNotification @ 0x18004D0C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x18004F31C (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 */

__int64 __fastcall RmgrSrv_RmGetNotification(
        struct ExecutionModel::ResourceHandle__ *a1,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  unsigned int Notification; // r9d
  unsigned int v6; // [rsp+30h] [rbp-9h] BYREF
  struct ExecutionModel::ResourceHandle__ *v7; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  struct ExecutionModel::ResourceHandle__ **v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  struct ExecutionModel::ResourceHandle__ **v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v6 = 0;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = a1;
    v10 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007B9FE, 0LL, 0LL, 3u, &pData);
  }
  Notification = ExecutionModel::ResourceManager::RmGetNotification(a1, a1, a2);
  v6 = Notification;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v11 = 0;
    v14 = 0;
    v9 = (struct ExecutionModel::ResourceHandle__ **)&v6;
    LODWORD(v7) = *(_DWORD *)a2;
    v12 = &v7;
    v10 = 4;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007B768, 0LL, 0LL, 4u, &pData);
    return v6;
  }
  return Notification;
}
