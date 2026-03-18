/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x1400B0398
 * Callers:
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  _KPROCESS *v8; // rdx
  unsigned __int8 v9; // r12
  __int64 NextPageTable; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r14
  __int64 PteShadow; // rbx
  __int64 v15; // rdi
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v23; // [rsp+54h] [rbp-ACh]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]

  v24 = 20LL;
  v22 = 1;
  v23 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = *(_QWORD *)(a3 + 184) + 1280LL;
  v5 = v21;
  SharedVm = MiGetSharedVm(v21);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v7;
  if ( (unsigned __int64)v3 <= v4 )
  {
    do
    {
      NextPageTable = MiGetNextPageTable((unsigned __int64)v3, v4, (__int64)&v22, v9, 4u, &v19);
      v3 = (unsigned __int64 *)NextPageTable;
      if ( !NextPageTable )
        break;
      v13 = NextPageTable << 25 >> 16;
      do
      {
        PteShadow = *v3;
        if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v3, *v3);
        v20 = PteShadow;
        if ( (PteShadow & 1) != 0 && (PteShadow & 0x42) != 0 )
        {
          v15 = MI_GET_PFN_FROM_PTE(&v20, v8, v11, v12);
          v16 = MiLockPageInline(v15);
          *(_BYTE *)(v15 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v16);
          MiWriteValidPteNewPage(v3, PteShadow & 0xFFFFFFFFFFFFFFBDuLL);
          MiInsertTbFlushEntry(&v22, v13, 1LL, 0);
        }
        v13 += 4096LL;
        ++v3;
      }
      while ( (v13 & 0x1FFFFF) != 0 && (unsigned __int64)v3 <= v4 );
    }
    while ( (unsigned __int64)v3 <= v4 );
    v5 = v21;
  }
  MiFlushTbList((__int64)&v22, v8);
  LOBYTE(v17) = v9;
  return MiUnlockWorkingSetExclusive(v5, v17);
}
