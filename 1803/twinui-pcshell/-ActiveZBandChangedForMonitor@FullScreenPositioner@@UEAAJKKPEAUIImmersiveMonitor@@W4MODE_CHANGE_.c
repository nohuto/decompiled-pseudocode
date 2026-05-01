/*
 * XREFs of ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1800204D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800204AC (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::ActiveZBandChangedForMonitor(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5)
{
  bool v7; // bl
  int v8; // eax
  unsigned int v9; // ebx
  HWND ForegroundWindow; // rsi
  __int64 v12; // rbx
  struct IUnknown *v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v13[1] = (struct IUnknown *)-2LL;
  if ( !*(_DWORD *)(a1 + 96)
    || !a4
    || (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(a1 + 64) + 96LL))(*(_QWORD *)(a1 + 64), a4, &v15) < 0
    || a3 != 1
    || !v15 )
  {
    return 0LL;
  }
  v7 = a5 != 2;
  if ( a5 == 2 )
  {
    v13[0] = 0LL;
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow )
    {
      v12 = *(_QWORD *)(a1 + 48);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v13);
      (*(void (__fastcall **)(__int64, HWND, struct IUnknown **))(*(_QWORD *)v12 + 48LL))(v12, ForegroundWindow, v13);
    }
    v7 = (unsigned int)SHIsSameObject(v13[0], *(struct IUnknown **)(a1 + 72)) == 0;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v13);
  }
  if ( !v7 )
    return 0LL;
  v8 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 112));
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x206,
    (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v8,
    (int)v13[0]);
  return v9;
}
