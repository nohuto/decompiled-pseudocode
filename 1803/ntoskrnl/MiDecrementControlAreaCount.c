/*
 * XREFs of MiDecrementControlAreaCount @ 0x14004B160
 * Callers:
 *     MiDeleteControlArea @ 0x14004B068 (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140084944 (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x14026EF90 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

int __fastcall MiDecrementControlAreaCount(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v2; // rax

  _InterlockedDecrement64(a2);
  v2 = *(_QWORD *)(a1 + 1288);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 1296);
    if ( !v2 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 2048), 0, 0);
  }
  return v2;
}
