/*
 * XREFs of CmpSetValueKeyExisting @ 0x1404A0DA0
 * Callers:
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmpMarkValueDataDirty @ 0x1404A1098 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvReallocateCell @ 0x140514F84 (HvReallocateCell.c)
 *     CmpSetValueDataNew @ 0x1405152B4 (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpFreeValueData @ 0x140516980 (CmpFreeValueData.c)
 *     CmpSetValueDataExisting @ 0x140582280 (CmpSetValueDataExisting.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size,
        int a7)
{
  int v8; // r15d
  int v9; // ebx
  unsigned int v11; // eax
  unsigned int v12; // r13d
  __int16 v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // rax
  void *v16; // rcx
  unsigned int Cell; // ebx
  unsigned int v19; // eax
  void *v20; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-8h] BYREF

  v21[0] = -1;
  v8 = 0;
  v21[1] = 0;
  v9 = 0;
  if ( !(unsigned __int8)HvpMarkCellDirty(a1, a2) )
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
    if ( *(_DWORD *)(a1 + 212) >= 4u && v11 - 16345 <= 0x7FFFC026 )
      v13 = 2;
    else
      v13 = 1;
  }
  if ( (unsigned int)Size <= 4 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 212) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    v8 = 1;
LABEL_10:
    LODWORD(v20) = v8;
    goto LABEL_11;
  }
  LOWORD(v8) = 2;
  LODWORD(v20) = 2;
LABEL_11:
  if ( !(unsigned __int8)CmpMarkValueDataDirty(a1) )
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
        v9 = CmpSetValueDataExisting(a1, *(_DWORD *)(a3 + 8));
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        v9 = CmpSetValueDataNew(a1, Src, (unsigned int)Size, (__int64)&v20);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( v13 && v12 )
          HvFreeCell(a1, *(unsigned int *)(a3 + 8));
        v14 = (unsigned int)v20;
      }
      *(_DWORD *)(a3 + 12) = a4;
      *(_WORD *)(a3 + 16) &= ~2u;
      *(_DWORD *)(a3 + 4) = Size;
      *(_DWORD *)(a3 + 8) = v14;
      return 0;
    }
    if ( v13 == 1 && v12 )
    {
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v14, v21);
      v16 = (void *)v15;
      if ( v15 )
      {
        if ( (unsigned int)Size <= -4 - *(_DWORD *)(v15 - 4) )
        {
          Cell = v14;
          goto LABEL_19;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v21);
        v20 = 0LL;
        v19 = HvReallocateCell(a1, v14, (__int64)&v20, (__int64)v21);
        Cell = v19;
        if ( v19 != -1 )
        {
          *(_DWORD *)(a3 + 8) = v19;
LABEL_29:
          v16 = v20;
LABEL_19:
          memmove(v16, Src, (unsigned int)Size);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v21);
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 8) = Cell;
          *(_DWORD *)(a3 + 4) = Size;
          if ( v13 == 2 )
            CmpFreeValueData(a1, v14);
          return 0;
        }
      }
    }
    else
    {
      Cell = HvAllocateCell(a1, Size, a7, (unsigned int)&v20, (__int64)v21);
      if ( Cell != -1 )
        goto LABEL_29;
    }
    return (unsigned int)-1073741670;
  }
  if ( v13 == 1 && v12 || v13 == 2 )
    CmpFreeValueData(a1, *(unsigned int *)(a3 + 8));
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = Size + 0x80000000;
  memmove((void *)(a3 + 8), Src, (unsigned int)Size);
  *(_DWORD *)(a3 + 12) = a4;
  *(_WORD *)(a3 + 16) &= ~2u;
  return 0LL;
}
