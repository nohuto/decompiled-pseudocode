/*
 * XREFs of ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x180085DA4
 * Callers:
 *     ??$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180087354 (--$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::RuntimeClassInitialize(DesktopBlueLightReductionManager *this)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax
  const char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v12[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v12[1] = (const WCHAR *)-2LL;
  try
  {
    v12[0] = L"Windows.Internal.Shell.BlueLightReduction.BlueLightReductionManager";
    v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v13, v12);
    v10 = 0LL;
    v3 = RoActivateInstance(*(_QWORD *)(v2 + 24), &v10);
    if ( v3 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x667,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v3);
    v13[3] = 0LL;
    v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
           v10,
           &GUID_a4b478cf_3ccf_4df0_a436_4b3b1474998b,
           &v11);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v4);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v6 = v11;
    v7 = 0LL;
    v11 = 0LL;
    v8 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v6;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = v11;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v5);
  }
  return result;
}
