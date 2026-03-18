/*
 * XREFs of MiDereferenceFailedControlArea @ 0x14045ED34
 * Callers:
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 *     MiShareExistingControlArea @ 0x1405104F8 (MiShareExistingControlArea.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x140099790 (MiDereferenceControlAreaBySection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 */

void __fastcall MiDereferenceFailedControlArea(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    MiReturnCrossPartitionControlAreaCharges(*(_QWORD *)(a1 + 64));
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiDereferenceControlAreaBySection(v2, (*(_DWORD *)a1 & 1) == 0);
}
