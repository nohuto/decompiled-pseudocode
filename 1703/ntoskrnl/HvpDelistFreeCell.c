/*
 * XREFs of HvpDelistFreeCell @ 0x14048CB3C
 * Callers:
 *     HvpIsFreeNeighbor @ 0x14048CA88 (HvpIsFreeNeighbor.c)
 *     HvpDoAllocateCell @ 0x14048CDDC (HvpDoAllocateCell.c)
 *     HvpEnlistFreeCell @ 0x14048DE38 (HvpEnlistFreeCell.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14008D080 (HvpReleaseHCell.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvpRemoveFreeCellHint @ 0x14048CBE0 (HvpRemoveFreeCellHint.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  v5 = -1;
  v6 = 0;
  v2 = BugCheckParameter3;
  result = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             BugCheckParameter3,
             &v5);
  if ( result )
  {
    result -= 4LL;
    if ( result )
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, v2);
      return HvpReleaseHCell(BugCheckParameter2);
    }
  }
  return result;
}
