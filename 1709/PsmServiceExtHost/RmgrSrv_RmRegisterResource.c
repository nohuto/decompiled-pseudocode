/*
 * XREFs of RmgrSrv_RmRegisterResource @ 0x18001FF20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmgrSrv_RmRegisterResource(__int64 a1, unsigned int a2, unsigned int a3, const GUID *a4)
{
  const GUID *v6; // r8
  const GUID *v7; // r9
  const GUID *v8; // r8
  int v10; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-25h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  int *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  unsigned int *v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]
  unsigned int v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v20 = (unsigned int)a4;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v11 = a2;
    v14 = (int *)&v11;
    v16 = (int *)&v12;
    v18 = &v20;
    v15 = 4LL;
    v12 = a3;
    v17 = 4LL;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800554C7, v6, a4, 5u, &pData);
    a4 = (const GUID *)v20;
  }
  LOBYTE(a4) = (_DWORD)a4 != 0;
  LODWORD(v7) = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _QWORD, const GUID *))(*(_QWORD *)g_pResourceManager + 24LL))(
                  g_pResourceManager,
                  a2,
                  a3,
                  a4);
  if ( (int)v7 >= 0 )
    LODWORD(v7) = 0;
  v10 = (int)v7;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v15 = 4LL;
    v14 = &v10;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800552D7, v8, v7, 3u, &pData);
    LODWORD(v7) = v10;
  }
  return (unsigned int)v7;
}
