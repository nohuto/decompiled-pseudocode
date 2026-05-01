/*
 * XREFs of ??$DesiredNavigationLevelChange@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@AEAW412345@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@1@Z @ 0x180119EC4
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18011749C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::DesiredNavigationLevelChange<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
        int *a1,
        int *a2,
        int *a3)
{
  const struct _TlgProvider_t *v6; // rax
  int v7; // ecx
  int v8; // ecx
  int v10; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  int v12; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  int *v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  int *v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+90h] [rbp+2Fh]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a1;
    v14 = &v10;
    v16 = &v11;
    v12 = *a3;
    v10 = v7;
    v8 = *a2;
    v18 = &v12;
    v15 = 4LL;
    v11 = v8;
    v17 = 4LL;
    v19 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_1802007FE, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
