/*
 * XREFs of ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x180119C8C
 * Callers:
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180116770 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1801168A0 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>(
        int *a1,
        __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  int v8; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v10; // [rsp+68h] [rbp+7h]
  __int64 v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+2Fh]

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
    LODWORD(v6) = TlgWrite(v6, &unk_18020091D, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
