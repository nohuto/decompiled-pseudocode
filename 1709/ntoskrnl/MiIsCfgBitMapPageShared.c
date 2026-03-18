/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x1400A6230
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1400A5EA0 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 *v5; // rbx
  __int64 PteShadow; // rdx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v11; // rdx
  __int64 PrototypePteDirect; // rax
  __int64 v13; // r9
  int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v5 != (__int64 *)MiGetNextPageTable((unsigned __int64)v5, (unsigned __int64)v5, 0LL, a3, 0, &v14) )
    return 3LL;
  MiGetProtoPteAddress(a2, a1 >> 12, 1u, &v15);
  PteShadow = *v5;
  if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v5, PteShadow);
  v15 = PteShadow;
  if ( !PteShadow )
    return 2LL;
  if ( (PteShadow & 1) != 0 )
  {
    v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v15) - 0x58000000000LL;
    if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 )
      return 0LL;
    return (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) == v9;
  }
  else
  {
    if ( (PteShadow & 0x400) == 0 )
      return 0LL;
    if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
      return 1LL;
    PrototypePteDirect = MiGetPrototypePteDirect(v11);
    return v13 == PrototypePteDirect;
  }
}
