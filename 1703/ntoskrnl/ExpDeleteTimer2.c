/*
 * XREFs of ExpDeleteTimer2 @ 0x14055E090
 * Callers:
 *     <none>
 * Callees:
 *     PsRemoveVirtualizedTimer @ 0x14012B698 (PsRemoveVirtualizedTimer.c)
 */

char __fastcall ExpDeleteTimer2(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
    PsRemoveVirtualizedTimer(v2, (_QWORD *)(a1 + 160));
  return KeDisableTimer2(a1, 1, 1, 0LL);
}
