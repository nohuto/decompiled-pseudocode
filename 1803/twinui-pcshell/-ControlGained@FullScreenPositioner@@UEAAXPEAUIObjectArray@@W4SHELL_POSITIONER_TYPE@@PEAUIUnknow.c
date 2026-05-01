/*
 * XREFs of ?ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18014D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18014D34C (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::ControlGained(__int64 a1, __int64 a2)
{
  CWinRTApplicationView *v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v5);
  (*(void (__fastcall **)(__int64, _QWORD, GUID *, CWinRTApplicationView **))(*(_QWORD *)a2 + 32LL))(
    a2,
    0LL,
    &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
    &v5);
  FullScreenPositioner::ControlGainedHelper(a1 - 96, v5);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v5);
}
