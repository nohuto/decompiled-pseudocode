/*
 * XREFs of ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x180144704
 * Callers:
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180140CB0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180140DD0 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>(
        int *a1,
        __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  int v8; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  __int64 v14; // [rsp+88h] [rbp+37h]
  __int64 v15; // [rsp+90h] [rbp+3Fh]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = *a1;
    v10 = &v8;
    v11 = 4LL;
    v12 = a2;
    v13 = 1LL;
    v14 = a3;
    v15 = 1LL;
    LODWORD(v6) = TlgWrite(v6, &unk_180263DF0, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
