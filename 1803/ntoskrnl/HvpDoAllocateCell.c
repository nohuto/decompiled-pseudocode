/*
 * XREFs of HvpDoAllocateCell @ 0x140515D74
 * Callers:
 *     HvReallocateCell @ 0x140514F84 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvpEnlistFreeCell @ 0x1404E41E0 (HvpEnlistFreeCell.c)
 *     HvpDelistFreeCell @ 0x140515AE0 (HvpDelistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x140515BD0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x140515FC0 (HvpFindFreeCell.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 */

__int64 __fastcall HvpDoAllocateCell(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, _QWORD *a4, __int64 *a5)
{
  __int64 v5; // r14
  _QWORD *v6; // r15
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int FreeCell; // r12d
  unsigned int *v13; // rdi
  char v14; // cl
  unsigned int v15; // r8d
  unsigned int v16; // r15d
  __int64 v17; // r8
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h] BYREF

  v27 = 0xFFFFFFFFLL;
  v5 = a2;
  v6 = a4;
  v9 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)&v28, (__int64)&v27);
  if ( FreeCell != -1 )
  {
    v13 = (unsigned int *)v28;
    v14 = 0;
    goto LABEL_3;
  }
  v24 = HvpAddBin(BugCheckParameter2);
  if ( v24 != -1 )
  {
    FreeCell = v24 + 32;
    v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)(v24 + 32),
            &v27);
    if ( v26 )
    {
      v13 = (unsigned int *)(v26 - 4);
      v28 = v26 - 4;
      if ( v26 != 4 )
      {
        v14 = 1;
LABEL_3:
        v15 = *v13;
        if ( (int)v5 + 8 > *v13 )
        {
          HvpDelistFreeCell(BugCheckParameter2, FreeCell);
          *v13 = -*v13;
          goto LABEL_13;
        }
        v16 = v15 - v5;
        *(unsigned int *)((char *)v13 + v5) = v15 - v5;
        *v13 = -(int)v5;
        if ( v14 )
        {
          v23 = FreeCell + (unsigned int)v5;
        }
        else
        {
          v17 = (v15 >> 3) - 1;
          if ( (unsigned int)v17 >= 0x10 )
          {
            v18 = (unsigned int)v17 >> 4;
            if ( v18 > 0xFF )
            {
              v17 = 23LL;
            }
            else
            {
              _BitScanReverse(&v19, v18);
              v17 = v19 + 16;
            }
          }
          v20 = (v16 >> 3) - 1;
          if ( v20 >= 0x10 )
          {
            v21 = v20 >> 4;
            if ( v21 > 0xFF )
            {
              v20 = 23;
            }
            else
            {
              _BitScanReverse(&v21, v21);
              v20 = v21 + 16;
            }
          }
          if ( (_DWORD)v17 == v20 )
            goto LABEL_12;
          HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, v17, a3, 0);
          v23 = FreeCell + (unsigned int)v5;
        }
        HvpEnlistFreeCell(BugCheckParameter2, v23, v16, a3);
LABEL_12:
        v6 = a4;
LABEL_13:
        if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v9, v10, v17, v11);
        KeAbPostRelease((ULONG_PTR)v9);
        if ( v6 )
        {
          *v6 = v28 + 4;
          *a5 = v27;
        }
        else
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
        }
        return FreeCell;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9, v10, v25, v11);
  KeAbPostRelease((ULONG_PTR)v9);
  return 0xFFFFFFFFLL;
}
