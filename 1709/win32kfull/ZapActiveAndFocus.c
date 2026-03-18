/*
 * XREFs of ZapActiveAndFocus @ 0x1C0213BE0
 * Callers:
 *     <none>
 * Callees:
 *     zzzInputFocusLostWindowEvent @ 0x1C0085FF4 (zzzInputFocusLostWindowEvent.c)
 */

__int64 ZapActiveAndFocus()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = *(_QWORD *)(gptiCurrent + 408LL);
  HMAssignmentUnlock(v0 + 120);
  v1 = HMAssignmentUnlock(v0 + 112);
  if ( v1 && v0 == gpqForeground )
    zzzInputFocusLostWindowEvent(v1, 0xBu);
  return 1LL;
}
