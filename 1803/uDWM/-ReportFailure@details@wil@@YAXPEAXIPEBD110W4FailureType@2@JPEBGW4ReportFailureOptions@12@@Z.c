/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18006E52C
 * Callers:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x18006E630 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x18006E6B8 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18006E740 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x18006FFB4 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180085D14 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x18004B3B0 (_alloca_probe.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x18006DB54 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
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
  WCHAR v13[2048]; // [rsp+510h] [rbp-1028h] BYREF

  v8 = !a7 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, v8, v13, v9, v12, v10, (unsigned __int64)v11);
  if ( a7 == 3 )
LABEL_11:
    __fastfail(7u);
  if ( !a7 )
  {
    if ( v8 )
      ((void (__fastcall *)(_BYTE *, WCHAR *))g_pfnThrowPlatformException)(v11, v13);
    if ( wil::details::g_pfnThrowResultException )
      wil::details::g_pfnThrowResultException((const struct wil::FailureInfo *)v11);
    goto LABEL_11;
  }
}
