/*
 * XREFs of RmgrSrv_RmReleaseResources @ 0x180001CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x1800027F8 (-RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmReleaseResources(ExecutionModel::ResourceManager *a1)
{
  struct ExecutionModel::ResourceHandle__ *v2; // rax
  unsigned int v3; // r9d
  unsigned int v5; // [rsp+30h] [rbp-50h] BYREF
  struct ExecutionModel::ResourceHandle__ *v6; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]

  v5 = 0;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v2 = *(struct ExecutionModel::ResourceHandle__ **)a1;
    v10 = 0;
    v6 = v2;
    v8 = (unsigned int *)&v6;
    v9 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BB4B, 0LL, 0LL, 3u, &pData);
  }
  if ( a1 )
    v3 = ExecutionModel::ResourceManager::RmReleaseResources(a1, *(struct ExecutionModel::ResourceHandle__ **)a1);
  else
    v3 = -2147024882;
  v5 = v3;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v10 = 0;
    v8 = &v5;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007B7FB, 0LL, 0LL, 3u, &pData);
    v3 = v5;
  }
  if ( a1 )
    *(_QWORD *)a1 = 0LL;
  return v3;
}
