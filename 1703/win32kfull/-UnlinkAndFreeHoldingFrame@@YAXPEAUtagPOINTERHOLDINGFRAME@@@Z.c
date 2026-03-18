/*
 * XREFs of ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C019A540
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     HoldRimCompleteFrame @ 0x1C019AC00 (HoldRimCompleteFrame.c)
 * Callees:
 *     HandlePTPTelemetry @ 0x1C013B880 (HandlePTPTelemetry.c)
 *     AbandonHoldingFrame @ 0x1C019A6A4 (AbandonHoldingFrame.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01AA710 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall UnlinkAndFreeHoldingFrame(struct tagPOINTERHOLDINGFRAME *a1, int a2)
{
  __int64 v3; // rcx
  struct tagPOINTERHOLDINGFRAME **v4; // rax
  struct tagTPSTATE *v5; // rcx

  if ( *((_DWORD *)a1 + 8) )
    AbandonHoldingFrame();
  v3 = *(_QWORD *)a1;
  v4 = (struct tagPOINTERHOLDINGFRAME **)*((_QWORD *)a1 + 1);
  if ( *(struct tagPOINTERHOLDINGFRAME **)(*(_QWORD *)a1 + 8LL) != a1 || *v4 != a1 )
    __fastfail(3u);
  *v4 = (struct tagPOINTERHOLDINGFRAME *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (struct tagTPSTATE *)*((_QWORD *)a1 + 11);
  if ( v5 )
  {
    CleanupGestureCache(v5, a2);
    HandlePTPTelemetry();
    Win32FreePool(*((_QWORD *)a1 + 11));
  }
  Win32FreePool(a1);
}
