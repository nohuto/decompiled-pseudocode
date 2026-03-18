/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1400059E0
 * Callers:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x140005AE4 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x140005B6C (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x140005BF4 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140003040 (__security_check_cookie.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140005424 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x140006400 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x140006470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  char v8; // bl
  __int64 v9; // [rsp+58h] [rbp-14E0h]
  __int64 v10; // [rsp+68h] [rbp-14D0h]
  _BYTE v11[144]; // [rsp+80h] [rbp-14B8h] BYREF
  char v12[1024]; // [rsp+110h] [rbp-1428h] BYREF
  _BYTE v13[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v8 = !a7 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, v8, (wil *)v13, v9, v12, v10, (unsigned __int64)v11);
  if ( a7 == 3 )
LABEL_11:
    __fastfail(7u);
  if ( !a7 )
  {
    if ( v8 )
      ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v11, v13);
    if ( wil::details::g_pfnThrowResultException )
      wil::details::g_pfnThrowResultException((const struct wil::FailureInfo *)v11);
    goto LABEL_11;
  }
}
