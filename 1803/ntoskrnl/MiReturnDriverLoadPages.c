/*
 * XREFs of MiReturnDriverLoadPages @ 0x1408E0BF0
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MiReturnDriverLoadPages(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rsi
  char *v5; // rbp
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  KIRQL v16; // [rsp+20h] [rbp-108h]
  __int64 v17; // [rsp+28h] [rbp-100h] BYREF
  char *AnyMultiplexedVm; // [rsp+30h] [rbp-F8h]
  int v19; // [rsp+40h] [rbp-E8h] BYREF
  __int16 v20; // [rsp+44h] [rbp-E4h]
  int v21; // [rsp+48h] [rbp-E0h]
  int v22; // [rsp+4Ch] [rbp-DCh]
  __int64 v23; // [rsp+50h] [rbp-D8h]
  __int64 v24; // [rsp+58h] [rbp-D0h]

  v22 = 0;
  v19 = 0;
  v20 = 0;
  v3 = a1;
  v23 = 0LL;
  v24 = 0LL;
  v21 = 20;
  v4 = (__int64)((_QWORD)a1 << 25) >> 16;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v5 = AnyMultiplexedVm;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = v7;
  v16 = v7;
  if ( (unsigned __int64)v3 <= a2 )
  {
    do
    {
      v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v3);
      if ( (v17 & 1) != 0 )
      {
        MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
        *v3 = ZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v3) )
          MiWritePteShadow(v10, v9, v11);
        v13 = 48 * (*(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockAndDecrementShareCount(v12, 1);
        MiLockAndDecrementShareCount(v13, 0);
        MiInsertTbFlushEntry((__int64)&v19, v4, 1LL, 0);
      }
      ++v3;
      v4 += 4096LL;
    }
    while ( (unsigned __int64)v3 <= a2 );
    v5 = AnyMultiplexedVm;
    v8 = v16;
  }
  MiUnlockWorkingSetExclusive((__int64)v5, v8);
  MiFlushTbList((__int64)&v19, v14, v15);
}
