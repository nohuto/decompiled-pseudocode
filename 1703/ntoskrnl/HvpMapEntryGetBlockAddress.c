/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x14008D0E0
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1404B7A5C (HvpFindNextDirtyBlock.c)
 *     HvpGetCellPaged @ 0x140506A10 (HvpGetCellPaged.c)
 *     HvpCopyModifiedData @ 0x140678988 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpIncrementCellReferenceCount @ 0x14008D070 (HvpIncrementCellReferenceCount.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, _WORD *a3)
{
  unsigned __int64 Count; // rbx
  BOOLEAN v6; // al
  PVOID *v7; // rcx

  if ( (a2[3].Count & 1) != 0 )
  {
    Count = a2[1].Count;
    v6 = 0;
  }
  else
  {
    v6 = ExAcquireRundownProtection(a2 + 3);
    if ( v6 )
      Count = a2[2].Count;
    else
      Count = a2[1].Count;
  }
  v7 = (PVOID *)(*a3 & 0xFFFD | (unsigned __int16)(2 * (v6 & 1)) | 1u);
  *a3 = (_WORD)v7;
  HvpIncrementCellReferenceCount(v7);
  return a2->Count + (Count & 0xFFFFFFFFFFFFFFF0uLL);
}
