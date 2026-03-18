/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x140081210
 * Callers:
 *     HvpGetCellPaged @ 0x1404AC040 (HvpGetCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x1406A2F00 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpIncrementCellReferenceCount @ 0x140080FF0 (HvpIncrementCellReferenceCount.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
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
    v6 = ExAcquireRundownProtection_0(a2 + 3);
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
