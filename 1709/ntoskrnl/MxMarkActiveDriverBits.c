/*
 * XREFs of MxMarkActiveDriverBits @ 0x14084A6C4
 * Callers:
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x14084A6C4 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400F7414 (MiSplitBitmapPages.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeZeroSinglePage @ 0x140184D20 (KeZeroSinglePage.c)
 *     MxMarkActiveDriverBits @ 0x14084A6C4 (MxMarkActiveDriverBits.c)
 */

unsigned __int64 __fastcall MxMarkActiveDriverBits(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // [rsp+60h] [rbp+18h]
  int v13; // [rsp+68h] [rbp+20h]

  v13 = a4;
  v6 = a2;
  v7 = a5;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v6 = *(_QWORD *)(a4 + 16LL * a5);
  result = *(_QWORD *)(a4 + 16LL * a5 + 8);
  if ( a3 > result )
    a3 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  v12 = a3;
  if ( v6 <= a3 )
  {
    v9 = 0xFFFFF68000000000uLL;
    do
    {
      result = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        result = MiReadPteShadow();
        a3 = v12;
        v7 = a5;
      }
      if ( (result & 1) != 0 )
      {
        if ( v7 == 1 )
        {
          v10 = (((__int64)(((__int64)((v6 << 25) - (v9 << 25)) >> 16 << 25) - (v9 << 25)) >> 16) - a1[4]) >> 21;
          v11 = a1[1]
              + ((((__int64)(((__int64)((v6 << 25) - (v9 << 25)) >> 16 << 25) - (v9 << 25)) >> 16) - a1[4]) >> 24);
          if ( (*(_DWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) + v9) & 0x800LL) == 0 )
          {
            MiSplitBitmapPages(
              0xCu,
              a1[1] + ((((__int64)(((__int64)((v6 << 25) - (v9 << 25)) >> 16 << 25) - (v9 << 25)) >> 16) - a1[4]) >> 24),
              (((((__int64)(((__int64)((v6 << 25) - (v9 << 25)) >> 16 << 25) - (v9 << 25)) >> 16) - a1[4]) >> 21) & 7)
            + 1);
            KeZeroSinglePage((_QWORD *)(v11 & 0xFFFFFFFFFFFFF000uLL));
          }
          if ( *a1 <= v10 )
            *a1 = v10 + 1;
          result = a1[1];
          _bittestandset64((signed __int64 *)result, v10);
        }
        else
        {
          result = MxMarkActiveDriverBits(
                     (_DWORD)a1,
                     (__int64)((v6 << 25) - (v9 << 25)) >> 16,
                     (unsigned int)((__int64)((v6 << 25) - (v9 << 25)) >> 16) + 4088,
                     a4,
                     v7 - 1);
        }
        a3 = v12;
      }
      v7 = a5;
      v6 += 8LL;
      LODWORD(a4) = v13;
      v9 = 0xFFFFF68000000000uLL;
    }
    while ( v6 <= a3 );
  }
  return result;
}
