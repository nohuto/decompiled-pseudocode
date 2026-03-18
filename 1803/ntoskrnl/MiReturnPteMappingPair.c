/*
 * XREFs of MiReturnPteMappingPair @ 0x1401407C4
 * Callers:
 *     MiSlowRotateCopy @ 0x140258394 (MiSlowRotateCopy.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 * Callees:
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 */

char __fastcall MiReturnPteMappingPair(__int64 a1)
{
  unsigned __int8 v1; // dl
  char result; // al
  _QWORD *MmInternal; // r8

  v1 = *(_BYTE *)(a1 + 8);
  if ( v1 == 17 )
    return MiReleasePtes((__int64)&qword_1403CC5E0, *(_QWORD *)(a1 + 16), 2uLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
    v1 = *(_BYTE *)(a1 + 8);
  }
  result = v1;
  __writecr8(v1);
  return result;
}
