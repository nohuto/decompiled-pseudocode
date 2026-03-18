/*
 * XREFs of MiControlAreaRequiresCharge @ 0x1400E481C
 * Callers:
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x1400E5F10 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // r8d
  __int64 v4; // r9
  ULONG_PTR *v5; // rdx

  if ( (unsigned int)MiControlAreaExemptFromCrossPartitionCharges(a1, a2, (unsigned int)a2, a1) == 1 )
    return 1LL;
  if ( v2 > 1 )
    v5 = v3 == 2
       ? *(ULONG_PTR **)(qword_1403CBD88
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                             + 3182))
       : &MiSystemPartition;
  else
    v5 = *(ULONG_PTR **)(qword_1403CBD88
                       + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
  if ( v5 == *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v4 + 62) & 1) == 0 || v3 == 1 || v3 == 4 )
    return 2LL;
  ++dword_1403CBD98;
  return 0LL;
}
