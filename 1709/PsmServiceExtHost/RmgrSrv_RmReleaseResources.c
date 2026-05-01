/*
 * XREFs of RmgrSrv_RmReleaseResources @ 0x180002740
 * Callers:
 *     <none>
 * Callees:
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18000285C (-RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmReleaseResources(ExecutionModel::ResourceManager *a1)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  struct ExecutionModel::ResourceHandle__ *v4; // rax
  const GUID *v5; // r9
  const GUID *v6; // r8
  int v8; // [rsp+30h] [rbp-50h] BYREF
  struct ExecutionModel::ResourceHandle__ *v9; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v8 = 0;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v4 = *(struct ExecutionModel::ResourceHandle__ **)a1;
    v13 = 0;
    v9 = v4;
    v11 = (int *)&v9;
    v12 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055557, v2, v3, 3u, &pData);
  }
  if ( a1 )
  {
    LODWORD(v5) = ExecutionModel::ResourceManager::RmReleaseResources(
                    a1,
                    *(struct ExecutionModel::ResourceHandle__ **)a1);
    v8 = (int)v5;
  }
  else
  {
    LODWORD(v5) = -2147024882;
    v8 = -2147024882;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v13 = 0;
    v11 = &v8;
    v12 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055207, v6, v5, 3u, &pData);
    LODWORD(v5) = v8;
  }
  if ( a1 )
    *(_QWORD *)a1 = 0LL;
  return (unsigned int)v5;
}
