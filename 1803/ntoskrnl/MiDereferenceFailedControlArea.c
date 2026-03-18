/*
 * XREFs of MiDereferenceFailedControlArea @ 0x140584664
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 *     MiFinishCreateSection @ 0x1404C37A0 (MiFinishCreateSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x1400E50D0 (MiDereferenceControlAreaBySection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 */

void __fastcall MiDereferenceFailedControlArea(int *a1)
{
  int v1; // edx
  __int64 v3; // rdi

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 8);
  if ( (*a1 & 0x400000) != 0 )
  {
    MiReturnCrossPartitionControlAreaCharges(*((_QWORD *)a1 + 8));
    v1 = *a1;
  }
  if ( (v1 & 4) != 0 )
    MiDereferenceControlAreaBySection(v3, (v1 & 1) == 0);
}
