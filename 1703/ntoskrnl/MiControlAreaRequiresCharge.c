/*
 * XREFs of MiControlAreaRequiresCharge @ 0x1400996E8
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x140034330 (MiUpdateLastSubsectionSize.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14009A250 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 MiControlAreaRequiresCharge()
{
  unsigned int v0; // edx
  __int64 v1; // r10
  __int64 v2; // r8
  ULONG_PTR *v3; // r9

  if ( (unsigned int)MiControlAreaExemptFromCrossPartitionCharges() == 1 )
    return 1LL;
  if ( v0 > 1 )
  {
    v2 = qword_14036C8F8;
    v3 = v0 == 2
       ? *(ULONG_PTR **)(qword_14036C8F8
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                             + 3180))
       : &MiSystemPartition;
  }
  else
  {
    v2 = qword_14036C8F8;
    v3 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
  }
  if ( v3 == *(ULONG_PTR **)(v2 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v1 + 62) & 1) == 0 || v0 == 1 || v0 == 4 )
    return 2LL;
  ++dword_14036C908;
  return 0LL;
}
