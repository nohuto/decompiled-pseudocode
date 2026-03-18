/*
 * XREFs of HvpDoAllocateCell @ 0x140479EE0
 * Callers:
 *     HvReallocateCell @ 0x140476BE4 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpDelistFreeCell @ 0x140477DE4 (HvpDelistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14047A0F0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14047A364 (HvpFindFreeCell.c)
 *     HvpEnlistFreeCell @ 0x14047CC5C (HvpEnlistFreeCell.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 */

__int64 __fastcall HvpDoAllocateCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 v5; // rsi
  char v7; // r12
  unsigned int FreeCell; // r14d
  unsigned int *v9; // rdi
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v5 = a2;
  v20 = 0xFFFFFFFFLL;
  v7 = 0;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)v19, (__int64)&v20);
  if ( FreeCell == -1 )
  {
    v17 = HvpAddBin(BugCheckParameter2);
    if ( v17 == -1
      || (FreeCell = v17 + 32,
          (v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   (unsigned int)(v17 + 32),
                   &v20)) == 0)
      || (v9 = (unsigned int *)(v18 - 4), v18 == 4) )
    {
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
      return 0xFFFFFFFFLL;
    }
    v7 = 1;
  }
  else
  {
    v9 = (unsigned int *)v19[0];
  }
  v10 = *v9;
  if ( (int)v5 + 8 > *v9 )
  {
    HvpDelistFreeCell(BugCheckParameter2, FreeCell);
    *v9 = -*v9;
  }
  else
  {
    v11 = v10 - v5;
    *(unsigned int *)((char *)v9 + v5) = v10 - v5;
    *v9 = -(int)v5;
    if ( !v7 )
    {
      v12 = (v10 >> 3) - 1;
      if ( v12 >= 0x10 )
      {
        v13 = v12 >> 4;
        if ( v13 > 0xFF )
        {
          v12 = 23;
        }
        else
        {
          _BitScanReverse(&v13, v13);
          v12 = v13 + 16;
        }
      }
      v14 = (v11 >> 3) - 1;
      if ( v14 >= 0x10 )
      {
        v15 = v14 >> 4;
        if ( v15 > 0xFF )
        {
          v14 = 23;
        }
        else
        {
          _BitScanReverse(&v15, v15);
          v14 = v15 + 16;
        }
      }
      if ( v12 == v14 )
        goto LABEL_12;
      HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell);
    }
    HvpEnlistFreeCell(BugCheckParameter2, FreeCell + (unsigned int)v5, 1);
  }
LABEL_12:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  if ( v21 )
  {
    *v21 = v9 + 1;
    *a5 = v20;
  }
  else
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
  }
  return FreeCell;
}
