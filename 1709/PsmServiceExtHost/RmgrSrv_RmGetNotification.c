/*
 * XREFs of RmgrSrv_RmGetNotification @ 0x1800300E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x1800325A8 (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 */

__int64 __fastcall RmgrSrv_RmGetNotification(
        struct ExecutionModel::ResourceHandle__ *a1,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  const GUID *v6; // r9
  const GUID *v7; // r8
  int v9; // [rsp+30h] [rbp-9h] BYREF
  struct ExecutionModel::ResourceHandle__ *v10; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  struct ExecutionModel::ResourceHandle__ **v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  struct ExecutionModel::ResourceHandle__ **v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  v9 = 0;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v14 = 0;
    v12 = &v10;
    v10 = a1;
    v13 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005540A, v4, v5, 3u, &pData);
  }
  LODWORD(v6) = ExecutionModel::ResourceManager::RmGetNotification(a1, a1, a2);
  v9 = (int)v6;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = (struct ExecutionModel::ResourceHandle__ **)&v9;
    LODWORD(v10) = *(_DWORD *)a2;
    v15 = &v10;
    v13 = 4;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800550C0, v7, v6, 4u, &pData);
    LODWORD(v6) = v9;
  }
  return (unsigned int)v6;
}
