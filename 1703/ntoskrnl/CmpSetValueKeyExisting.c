/*
 * XREFs of CmpSetValueKeyExisting @ 0x1404D19D0
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     CmpSetValueDataNew @ 0x140444C1C (CmpSetValueDataNew.c)
 *     CmpSetValueDataExisting @ 0x140458748 (CmpSetValueDataExisting.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpFreeValueData @ 0x1404D15C4 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x1404D1D08 (CmpMarkValueDataDirty.c)
 *     HvReallocateCell @ 0x1404D339C (HvReallocateCell.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size,
        unsigned int a7)
{
  int v8; // r15d
  int v9; // ebx
  unsigned int v11; // eax
  unsigned int v12; // r13d
  __int16 v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // rax
  void *v16; // rcx
  int Cell; // ebx
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF

  v21 = 0xFFFFFFFFLL;
  v8 = 0;
  v9 = 0;
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, a2) )
    return 3221225853LL;
  v11 = *(_DWORD *)(a3 + 4);
  v12 = v11 + 0x80000000;
  if ( v11 >= 0x80000000 )
  {
    v13 = 0;
  }
  else
  {
    v12 = *(_DWORD *)(a3 + 4);
    if ( *(_DWORD *)(BugCheckParameter2 + 196) >= 4u && v11 - 16345 <= 0x7FFFC026 )
      v13 = 2;
    else
      v13 = 1;
  }
  if ( (unsigned int)Size <= 4 )
    goto LABEL_10;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    v8 = 1;
LABEL_10:
    LODWORD(v20) = v8;
    goto LABEL_11;
  }
  LOWORD(v8) = 2;
  LODWORD(v20) = 2;
LABEL_11:
  if ( !(unsigned __int8)CmpMarkValueDataDirty(BugCheckParameter2) )
    return 3221225853LL;
  if ( (_WORD)v8 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( (_WORD)v20 != 1 )
    {
      if ( (_WORD)v20 != 2 )
        return (unsigned int)v9;
      if ( v13 == 2 )
      {
        v9 = CmpSetValueDataExisting(BugCheckParameter2, Src, Size, a7, *(_DWORD *)(a3 + 8));
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        v9 = CmpSetValueDataNew(BugCheckParameter2, (char *)Src, (unsigned int)Size, a7, &v20);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( v13 && v12 )
          HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 8));
        v14 = v20;
      }
      *(_DWORD *)(a3 + 12) = a4;
      *(_WORD *)(a3 + 16) &= ~2u;
      *(_DWORD *)(a3 + 4) = Size;
      *(_DWORD *)(a3 + 8) = v14;
      return 0;
    }
    if ( v13 == 1 && v12 )
    {
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v14,
              &v21);
      v16 = (void *)v15;
      if ( v15 )
      {
        if ( (unsigned int)Size <= -4 - *(_DWORD *)(v15 - 4) )
        {
          Cell = v14;
          goto LABEL_19;
        }
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
        v20 = 0LL;
        v19 = HvReallocateCell(BugCheckParameter2, v14, (__int64)&v20, (__int64)&v21);
        Cell = v19;
        if ( v19 != -1 )
        {
          *(_DWORD *)(a3 + 8) = v19;
LABEL_29:
          v16 = (void *)v20;
LABEL_19:
          memmove(v16, Src, (unsigned int)Size);
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 8) = Cell;
          *(_DWORD *)(a3 + 4) = Size;
          if ( v13 == 2 )
            CmpFreeValueData(BugCheckParameter2, v14, v12);
          return 0;
        }
      }
    }
    else
    {
      Cell = HvAllocateCell(BugCheckParameter2, Size, a7, (__int64)&v20, (__int64)&v21);
      if ( Cell != -1 )
        goto LABEL_29;
    }
    return (unsigned int)-1073741670;
  }
  if ( v13 == 1 && v12 || v13 == 2 )
    CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(a3 + 8), v12);
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = Size + 0x80000000;
  memmove((void *)(a3 + 8), Src, (unsigned int)Size);
  *(_DWORD *)(a3 + 12) = a4;
  *(_WORD *)(a3 + 16) &= ~2u;
  return 0LL;
}
