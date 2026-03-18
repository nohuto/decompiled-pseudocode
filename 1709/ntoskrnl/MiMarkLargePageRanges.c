/*
 * XREFs of MiMarkLargePageRanges @ 0x14082D2D8
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 MiMarkLargePageRanges()
{
  unsigned __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  unsigned int v10; // ebp
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  struct _KTHREAD *v24; // [rsp+80h] [rbp+18h]

  v0 = 0xFFFFF6C000000000uLL;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  while ( v0 <= 0xFFFFF6FFFFFFFFF8uLL )
  {
    NextPageTable = MiGetNextPageTable(v0, 0xFFFFF6FFFFFFFFF8uLL, 0LL, 0x11u, 3u, &v22);
    if ( !NextPageTable )
      break;
    v3 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v22 )
    {
      v4 = 512LL;
      if ( v22 > 1 )
      {
        v5 = v22 - 1;
        do
        {
          v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v4 <<= 9;
          --v5;
        }
        while ( v5 );
      }
      PteShadow = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v23 = PteShadow;
      v7 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v23);
      if ( MiIsPfnInline(v7) )
        MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v8, v9, 1, 0);
    }
    v0 = (__int64)((v3 << 25) + 0x10000000) >> 16;
  }
  v10 = *(_DWORD *)MmPhysicalMemoryBlock;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v11 = 16LL * v10;
    do
    {
      v11 -= 16LL;
      --v10;
      v12 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v11 + 16);
      v13 = (v12 + *(_QWORD *)((char *)MmPhysicalMemoryBlock + v11 + 24)) & 0xFFFFFFFFFFFFFE00uLL;
      v14 = (v12 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v14 )
      {
        if ( v14 < v13 )
        {
          v15 = -1LL;
          v16 = 0LL;
          v17 = 48 * v14 - 0x58000000000LL;
          v18 = v17 + 48 * (v13 - v14);
          if ( v17 < v18 )
          {
            do
            {
              if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
                && (*(_BYTE *)(v17 + 34) & 7) == 6
                && (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
              {
                if ( !v16 )
                  v15 = (__int64)(v17 + 0x58000000000LL) / 48;
                ++v16;
              }
              else
              {
                if ( v16 >= 0x200 )
                {
                  v16 &= 0xFFFFFFFFFFFFFE00uLL;
                  MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v15, v16, 1, 1);
                }
                if ( !v16 )
                  v15 = (__int64)(v17 + 0x58000000000LL) / 48;
                v19 = v16 + 512;
                v16 = 0LL;
                v20 = (v15 + v19) & 0xFFFFFFFFFFFFFE00uLL;
                if ( !v20 )
                  goto LABEL_34;
                v17 = 48 * v20 - 0x58000000030LL;
              }
              v17 += 48LL;
            }
            while ( v17 < v18 );
            if ( v16 >= 0x200 )
              MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v15, v16 & 0xFFFFFFFFFFFFFE00uLL, 1, 1);
          }
        }
      }
LABEL_34:
      ;
    }
    while ( v10 );
    CurrentThread = v24;
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
