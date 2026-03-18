/*
 * XREFs of ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01AF110
 * Callers:
 *     <none>
 * Callees:
 *     FindHoldingFrameForDevice @ 0x1C019AB7C (FindHoldingFrameForDevice.c)
 *     zzzPostInertiaMessage @ 0x1C020AA48 (zzzPostInertiaMessage.c)
 */

void __fastcall xxxInertiaTimerProc(struct tagWND *a1)
{
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v2; // rbx

  HoldingFrameForDevice = FindHoldingFrameForDevice((__int64)ghdevTouchpad);
  if ( HoldingFrameForDevice )
  {
    v2 = *((_QWORD *)HoldingFrameForDevice + 11);
    if ( v2 )
    {
      EtwTraceTouchpadStopInertiaQueued();
      if ( (*(_DWORD *)(v2 + 1920) & 0x200000) != 0 )
        zzzPostInertiaMessage(0x23Bu);
    }
  }
  ghdevTouchpad = 0LL;
  gtmridTouchpadInertiaTimer = 0LL;
}
