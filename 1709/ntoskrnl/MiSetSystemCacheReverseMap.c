/*
 * XREFs of MiSetSystemCacheReverseMap @ 0x14021A0FC
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x1400F52C8 (MiExpandSystemCache.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiSetSystemCacheReverseMap(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 *v4; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v4 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v4;
  v6 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    v6 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
  }
  v9 = PteShadow;
  result = MI_GET_PFN_FROM_PTE(&v9, v6, a3, v3);
  *(_QWORD *)(result + 16) = v8;
  return result;
}
