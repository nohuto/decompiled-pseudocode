/*
 * XREFs of MiFreeBootDriverPage @ 0x140816020
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiFreeBootDriverPage(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 result; // rax
  unsigned __int64 v8; // rcx

  MiInsertTbFlushEntry(a2, (__int64)(a1 << 25) >> 16, 1LL, 0);
  v4 = 48 * (*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(a1) - 0x58000000000LL + 40) & 0xFFFFFFFFFLL);
  *(_QWORD *)a1 = 0LL;
  v5 = v4 - 0x58000000000LL;
  if ( MiPteInShadowRange(a1) )
    MiWritePteShadow();
  MiLockAndDecrementShareCount(v6, 1);
  MiLockAndDecrementShareCount(v5, 0);
  result = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( result == 1 )
  {
    v8 = (__int64)(*(_QWORD *)(v5 + 8) << 25) >> 16 << 25 >> 16;
    return MiReturnSystemVa(v8, v8 + 0x200000, 3, a2);
  }
  return result;
}
