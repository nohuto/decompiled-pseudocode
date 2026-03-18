/*
 * XREFs of MiDereferenceFailedControlArea @ 0x14059ECFC
 * Callers:
 *     MiFinishCreateSection @ 0x14049B8E0 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x1400A2854 (MiDereferenceControlAreaBySection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 */

void __fastcall MiDereferenceFailedControlArea(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)a1 & 0x400000) != 0 )
    MiReturnCrossPartitionControlAreaCharges(*(_QWORD *)(a1 + 64));
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiDereferenceControlAreaBySection(v2, (*(_DWORD *)a1 & 1) == 0);
}
