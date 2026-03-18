/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0203034
 * Callers:
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 2) & 0x1800) == 0x800 )
  {
    if ( InternalSetTimer((unsigned __int64)a2, 65529LL, 16 * gdtMNDropDown, 0LL, 0, 16) )
      *((_DWORD *)a1 + 2) |= 0x1000u;
  }
}
