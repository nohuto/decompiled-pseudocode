/*
 * XREFs of ?_PalmRejectTimerProc@PalmRejection@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E0610
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C00FDA3C (WakeDIT.c)
 */

void __fastcall PalmRejection::_PalmRejectTimerProc(PalmRejection *this, struct tagWND *a2)
{
  WakeDIT(0x200u);
  *(&gPalmRejectData + 1) = 0LL;
}
