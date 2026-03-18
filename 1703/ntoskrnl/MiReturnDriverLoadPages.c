/*
 * XREFs of MiReturnDriverLoadPages @ 0x140834DD4
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiReturnDriverLoadPages(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  char *v5; // r14
  LONG *SharedVm; // rdi
  KIRQL v7; // al
  unsigned __int8 v8; // r12
  __int64 v9; // r10
  __int64 v10; // rdi
  _KPROCESS *v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-F8h] BYREF
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-F0h]
  int v14; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v15; // [rsp+34h] [rbp-E4h]
  int v16; // [rsp+38h] [rbp-E0h]
  int v17; // [rsp+3Ch] [rbp-DCh]
  __int64 v18; // [rsp+40h] [rbp-D8h]
  __int64 v19; // [rsp+48h] [rbp-D0h]

  v17 = 0;
  v14 = 0;
  v15 = 0;
  v3 = a1;
  v18 = 0LL;
  v19 = 0LL;
  v16 = 20;
  v4 = (__int64)((_QWORD)a1 << 25) >> 16;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v5 = AnyMultiplexedVm;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = v7;
  if ( (unsigned __int64)v3 <= a2 )
  {
    do
    {
      v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v3);
      if ( (v12 & 1) != 0 )
      {
        MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v12);
        *v3 = 0LL;
        if ( MiPteInShadowRange((unsigned __int64)v3) )
          MiWritePteShadow();
        v10 = 48 * (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockAndDecrementShareCount(v9, 1);
        MiLockAndDecrementShareCount(v10, 0);
        MiInsertTbFlushEntry((__int64)&v14, v4, 1LL, 0);
      }
      ++v3;
      v4 += 4096LL;
    }
    while ( (unsigned __int64)v3 <= a2 );
    v5 = AnyMultiplexedVm;
  }
  MiUnlockWorkingSetExclusive((__int64)v5, v8);
  MiFlushTbList((__int64)&v14, v11);
}
