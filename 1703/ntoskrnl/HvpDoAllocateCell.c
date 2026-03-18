/*
 * XREFs of HvpDoAllocateCell @ 0x14048CDDC
 * Callers:
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     HvReallocateCell @ 0x1404D339C (HvReallocateCell.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvpDelistFreeCell @ 0x14048CB3C (HvpDelistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14048CBE0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14048D43C (HvpFindFreeCell.c)
 *     HvpEnlistFreeCell @ 0x14048DE38 (HvpEnlistFreeCell.c)
 */

__int64 __fastcall HvpDoAllocateCell(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, _QWORD *a4, __int64 *a5)
{
  __int64 v5; // rsi
  char v8; // r12
  unsigned int FreeCell; // r14d
  unsigned int *v10; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v5 = a2;
  v21 = 0xFFFFFFFFLL;
  v8 = 0;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)v20, (__int64)&v21);
  if ( FreeCell == -1 )
  {
    v18 = HvpAddBin(BugCheckParameter2, v5, a3);
    if ( v18 == -1
      || (FreeCell = v18 + 32,
          (v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   (unsigned int)(v18 + 32),
                   &v21)) == 0)
      || (v10 = (unsigned int *)(v19 - 4), v19 == 4) )
    {
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
      return 0xFFFFFFFFLL;
    }
    v8 = 1;
  }
  else
  {
    v10 = (unsigned int *)v20[0];
  }
  v11 = *v10;
  if ( (int)v5 + 8 > *v10 )
  {
    HvpDelistFreeCell(BugCheckParameter2, FreeCell);
    *v10 = -*v10;
  }
  else
  {
    v12 = v11 - v5;
    *(unsigned int *)((char *)v10 + v5) = v11 - v5;
    *v10 = -(int)v5;
    if ( !v8 )
    {
      v13 = (v11 >> 3) - 1;
      if ( v13 >= 0x10 )
      {
        v14 = v13 >> 4;
        if ( v14 > 0xFF )
        {
          v13 = 23;
        }
        else
        {
          _BitScanReverse(&v14, v14);
          v13 = v14 + 16;
        }
      }
      v15 = (v12 >> 3) - 1;
      if ( v15 >= 0x10 )
      {
        v16 = v15 >> 4;
        if ( v16 > 0xFF )
        {
          v15 = 23;
        }
        else
        {
          _BitScanReverse(&v16, v16);
          v15 = v16 + 16;
        }
      }
      if ( v13 == v15 )
        goto LABEL_12;
      HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, v13, a3);
    }
    HvpEnlistFreeCell(BugCheckParameter2, FreeCell + (unsigned int)v5, 1);
  }
LABEL_12:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  if ( v22 )
  {
    *v22 = v10 + 1;
    *a5 = v21;
  }
  else
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
  }
  return FreeCell;
}
