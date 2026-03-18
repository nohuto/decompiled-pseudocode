/*
 * XREFs of MiReturnDriverLoadPages @ 0x14086BF50
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

void __fastcall MiReturnDriverLoadPages(__int64 *a1, unsigned __int64 a2)
{
  __int64 *v3; // rsi
  unsigned __int64 v4; // rbp
  char *AnyMultiplexedVm; // r14
  LONG *SharedVm; // rdi
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r12
  unsigned __int64 v10; // r9
  __int64 PteShadow; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // r9
  __int64 v14; // rdi
  _KPROCESS *v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-108h] BYREF
  int v17; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+34h] [rbp-F4h]
  int v19; // [rsp+38h] [rbp-F0h]
  int v20; // [rsp+3Ch] [rbp-ECh]
  __int64 v21; // [rsp+40h] [rbp-E8h]
  __int64 v22; // [rsp+48h] [rbp-E0h]

  v20 = 0;
  v17 = 0;
  v18 = 0;
  v3 = a1;
  v21 = 0LL;
  v22 = 0LL;
  v19 = 20;
  v4 = (__int64)((_QWORD)a1 << 25) >> 16;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v7;
  if ( (unsigned __int64)v3 <= a2 )
  {
    v10 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      PteShadow = *v3;
      if ( (unsigned __int64)v3 >= v10 && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v16 = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        v12 = MI_GET_PFN_FROM_PTE((unsigned __int64 *)&v16);
        *v3 = 0LL;
        if ( (unsigned __int64)v3 >= v13 && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        v14 = 48 * (*(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockAndDecrementShareCount(v12, 1);
        MiLockAndDecrementShareCount(v14, 0);
        MiInsertTbFlushEntry(&v17, v4, 1LL, 0);
        v10 = 0xFFFFF6FB7DBED000uLL;
      }
      ++v3;
      v4 += 4096LL;
    }
    while ( (unsigned __int64)v3 <= a2 );
  }
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v8);
  MiFlushTbList((__int64)&v17, v15);
}
