/*
 * XREFs of MiSimpleAgeWorkingSetTail @ 0x140215740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MiSimpleAgeWorkingSetTail(__int64 a1, _KPROCESS *a2)
{
  MiFlushTbList(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL), a2);
}
