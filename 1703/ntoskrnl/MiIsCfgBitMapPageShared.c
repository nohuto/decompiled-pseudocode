/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x1400637A0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140063450 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v15; // r10
  char v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 != MiGetNextPageTable(
               (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
               (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
               0,
               a3,
               0,
               (__int64)&v16) )
    return 3LL;
  MiGetProtoPteAddress(a2, a1 >> 12, 1LL, &v17);
  v7 = MI_READ_PTE_LOCK_FREE(v5);
  v17 = v7;
  if ( !v7 )
    return 2LL;
  if ( (v7 & 1) != 0 )
  {
    v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v17) - 0x58000000000LL;
    if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 )
      return 0LL;
    return (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) == v9;
  }
  else
  {
    if ( (v7 & 0x400) == 0 )
      return 0LL;
    if ( (unsigned int)MiIsPrototypePteVadLookup(v7) )
      return 1LL;
    PrototypePteDirect = MiGetPrototypePteDirect(v13, v11, v12, v13);
    return v15 == PrototypePteDirect;
  }
}
