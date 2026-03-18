/*
 * XREFs of ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01A616C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     HoldRimCompleteFrame @ 0x1C01A68DC (HoldRimCompleteFrame.c)
 * Callees:
 *     HandlePTPTelemetry @ 0x1C0142630 (HandlePTPTelemetry.c)
 *     AbandonHoldingFrame @ 0x1C01A62D0 (AbandonHoldingFrame.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01ADA40 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall UnlinkAndFreeHoldingFrame(struct tagPOINTERHOLDINGFRAME *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  struct tagPOINTERHOLDINGFRAME **v5; // rcx
  struct tagTPSTATE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8

  if ( *((_DWORD *)a1 + 8) )
    AbandonHoldingFrame();
  v4 = *(_QWORD *)a1;
  if ( *(struct tagPOINTERHOLDINGFRAME **)(*(_QWORD *)a1 + 8LL) != a1
    || (v5 = (struct tagPOINTERHOLDINGFRAME **)*((_QWORD *)a1 + 1), *v5 != a1) )
  {
    __fastfail(3u);
  }
  *v5 = (struct tagPOINTERHOLDINGFRAME *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = (struct tagTPSTATE *)*((_QWORD *)a1 + 11);
  if ( v6 )
  {
    CleanupGestureCache(v6, a2);
    HandlePTPTelemetry();
    Win32FreePool(*((_QWORD *)a1 + 11), v7, v8);
  }
  Win32FreePool(a1, a2, a3);
}
