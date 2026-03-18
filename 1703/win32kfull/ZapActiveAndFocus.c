/*
 * XREFs of ZapActiveAndFocus @ 0x1C02126B0
 * Callers:
 *     <none>
 * Callees:
 *     zzzInputFocusLostWindowEvent @ 0x1C00B5DB8 (zzzInputFocusLostWindowEvent.c)
 */

__int64 ZapActiveAndFocus()
{
  __int64 v0; // rbx
  __int64 *v1; // rax

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  HMAssignmentUnlock(v0 + 88);
  v1 = (__int64 *)HMAssignmentUnlock(v0 + 80);
  if ( v1 && v0 == gpqForeground )
    zzzInputFocusLostWindowEvent(v1, 11);
  return 1LL;
}
