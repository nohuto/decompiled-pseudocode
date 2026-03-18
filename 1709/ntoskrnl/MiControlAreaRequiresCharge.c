/*
 * XREFs of MiControlAreaRequiresCharge @ 0x1400A27AC
 * Callers:
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiUpControlAreaRefs @ 0x140120C6C (MiUpControlAreaRefs.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x1400A1520 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  __int64 v3; // r9
  ULONG_PTR *v4; // rdx

  if ( MiControlAreaExemptFromCrossPartitionCharges(a1) )
    return 1LL;
  if ( v1 > 1 )
    v4 = v2 == 2
       ? *(ULONG_PTR **)(qword_140388AF0
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                             + 3180))
       : &MiSystemPartition;
  else
    v4 = *(ULONG_PTR **)(qword_140388AF0
                       + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 2));
  if ( v4 == *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v3 + 62) & 1) == 0 || v2 == 1 || v2 == 4 )
    return 2LL;
  ++dword_140388B00;
  return 0LL;
}
