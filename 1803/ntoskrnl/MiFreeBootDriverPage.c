/*
 * XREFs of MiFreeBootDriverPage @ 0x1408ADE54
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 *     MiRelocateBootImage @ 0x1408ADD30 (MiRelocateBootImage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 */

__int64 __fastcall MiFreeBootDriverPage(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 result; // rax
  unsigned __int64 v10; // rcx

  MiInsertTbFlushEntry(a2, (__int64)(a1 << 25) >> 16, 1LL, 0);
  v3 = 48
     * (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0xFFFFFFFFFLL);
  *(_QWORD *)a1 = ZeroPte;
  v4 = v3 - 0x58000000000LL;
  if ( MiPteInShadowRange(a1) )
    MiWritePteShadow(v6, v5, v7);
  MiLockAndDecrementShareCount(v8, 1);
  MiLockAndDecrementShareCount(v4, 0);
  result = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( result == 1 )
  {
    v10 = (__int64)(*(_QWORD *)(v4 + 8) << 25) >> 16 << 25 >> 16;
    return MiReturnSystemVa(v10, v10 + 0x200000, 3);
  }
  return result;
}
