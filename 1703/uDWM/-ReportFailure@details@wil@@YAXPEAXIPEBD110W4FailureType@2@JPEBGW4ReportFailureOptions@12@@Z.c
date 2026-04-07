/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180071D5C
 * Callers:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180071E64 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180071F0C (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180071FB0 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180074038 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180074124 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1800741A4 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x18004DF90 (_alloca_probe.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180071858 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9)
{
  char v9; // bl
  __int64 v10; // [rsp+58h] [rbp-14E0h]
  __int64 v11; // [rsp+68h] [rbp-14D0h]
  _BYTE v12[144]; // [rsp+80h] [rbp-14B8h] BYREF
  char v13[1024]; // [rsp+110h] [rbp-1428h] BYREF
  _BYTE v14[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v9 = !a7 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, a9, v9, (wil *)v14, v10, v13, v11, (unsigned __int64)v12);
  if ( a7 == 3 )
LABEL_11:
    __fastfail(7u);
  if ( !a7 )
  {
    if ( v9 )
      ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v12, v14);
    if ( wil::details::g_pfnThrowResultException )
      wil::details::g_pfnThrowResultException((const struct wil::FailureInfo *)v12);
    goto LABEL_11;
  }
}
