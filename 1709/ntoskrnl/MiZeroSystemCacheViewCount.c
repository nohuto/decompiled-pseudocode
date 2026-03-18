/*
 * XREFs of MiZeroSystemCacheViewCount @ 0x14021A164
 * Callers:
 *     MiExpandSystemCache @ 0x1400F52C8 (MiExpandSystemCache.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiZeroSystemCacheViewCount(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v4;
  v6 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    v6 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
  }
  v8 = PteShadow;
  result = MI_GET_PFN_FROM_PTE(&v8, v6, a3, a4);
  *(_BYTE *)(result + 39) = 0;
  return result;
}
