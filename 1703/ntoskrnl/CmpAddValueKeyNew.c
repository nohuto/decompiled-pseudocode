/*
 * XREFs of CmpAddValueKeyNew @ 0x1404918D4
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x140491818 (CmpSetValueKeyNew.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     CmpSetValueDataNew @ 0x140444C1C (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpCopyName @ 0x140491A0C (CmpCopyName.c)
 *     CmpNameSize @ 0x140491A5C (CmpNameSize.c)
 */

__int64 __fastcall CmpAddValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  unsigned __int16 v10; // ax
  unsigned int Cell; // ebp
  _WORD *v12; // rbx
  _WORD *v13; // rcx
  unsigned __int16 v14; // ax
  _DWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v17; // [rsp+38h] [rbp-20h] BYREF

  v16[0] = -1;
  v16[1] = 0;
  v10 = CmpNameSize(a2);
  Cell = HvAllocateCell(BugCheckParameter2, (unsigned int)v10 + 20, a6, (__int64)&v17, (__int64)v16);
  if ( Cell != -1 )
  {
    v12 = v17;
    v13 = v17 + 10;
    *v17 = 27510;
    v14 = CmpCopyName(v13, a2);
    v12[1] = v14;
    v12[8] = v14 < *a2;
    if ( (unsigned int)Size <= 4 )
    {
      *((_DWORD *)v12 + 1) = Size + 0x80000000;
      *((_DWORD *)v12 + 2) = 0;
      memmove(v12 + 4, a4, (unsigned int)Size);
    }
    else
    {
      if ( (int)CmpSetValueDataNew(BugCheckParameter2, (char *)a4, (unsigned int)Size, a6, (_DWORD *)v12 + 2) < 0 )
      {
        HvFreeCell(BugCheckParameter2, Cell);
        Cell = -1;
        goto LABEL_8;
      }
      *((_DWORD *)v12 + 1) = Size;
    }
    *((_DWORD *)v12 + 3) = a3;
LABEL_8:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
    return Cell;
  }
  return 0xFFFFFFFFLL;
}
