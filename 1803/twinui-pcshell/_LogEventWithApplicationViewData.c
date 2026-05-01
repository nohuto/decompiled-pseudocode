/*
 * XREFs of _LogEventWithApplicationViewData @ 0x1801B2A78
 * Callers:
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1801B1868 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x1801B2CA0 (-_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Window.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LogEventWithApplicationViewData(__int64 a1, void (__fastcall *a2)(__int64 *))
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
  v8 = -1LL;
  v9 = -1LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 136LL))(a1, &v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = v7;
    a2(&v11);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v4);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
  return v5;
}
