/*
 * XREFs of ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x1802B9968
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x1802B9864 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1802BA400 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___ @ 0x1802B7D48 (ShellPositionerManager--DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___.c)
 */

__int64 __fastcall ShellPositionerManager::PerformPositionerHandoff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]
  int v14; // [rsp+58h] [rbp+10h] BYREF

  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 24LL))(a2, &v14) >= 0 && v14 )
  {
    v12 = a5;
    v13 = a6;
    v11 = a1;
    ShellPositionerManager::DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___(
      a1,
      a2,
      a3,
      a4,
      (__int64)&v11);
  }
  return 0LL;
}
