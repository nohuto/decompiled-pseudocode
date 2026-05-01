/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180082EF4
 * Callers:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180082EA8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x1800FEACC (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x1800FEB6C (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x18010A4F4 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18012A7E8 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18013C468 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1801427D4 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180082FD0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A2720 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?RethrowCaughtException@wil@@YAXXZ @ 0x1800FEE00 (-RethrowCaughtException@wil@@YAXXZ.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800FF9C0 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  bool v10; // di
  __int64 result; // rax
  const struct wil::FailureInfo *v12; // rdx
  wil *v13; // rcx
  _BYTE v14[144]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v15[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v10 = !a7 && (a10 & 4) == 0 && g_pfnThrowPlatformException;
  result = wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7);
  if ( (a10 & 2) == 0 )
  {
    if ( a7 != 3 )
    {
      if ( a7 )
        return result;
      if ( v10 )
        ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v14, v15);
      if ( (a10 & 4) != 0 )
        wil::RethrowCaughtException(v13);
      wil::ThrowResultException((wil *)v14, v12);
    }
    __fastfail(7u);
  }
  return result;
}
