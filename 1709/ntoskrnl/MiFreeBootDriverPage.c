/*
 * XREFs of MiFreeBootDriverPage @ 0x140837C4C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiFreeBootDriverPage(unsigned __int64 a1, int *a2)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx

  MiInsertTbFlushEntry(a2, (__int64)(a1 << 25) >> 16, 1LL, 0);
  v4 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)a1) - 0x58000000000LL;
  v5 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  *(_QWORD *)a1 = 0LL;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  MiLockAndDecrementShareCount(v4, 1);
  MiLockAndDecrementShareCount(v5, 0);
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    v6 = (__int64)(*(_QWORD *)(v5 + 8) << 25) >> 16 << 25 >> 16;
    MiReturnSystemVa(v6, v6 + 0x200000, 3, (__int64)a2);
  }
}
