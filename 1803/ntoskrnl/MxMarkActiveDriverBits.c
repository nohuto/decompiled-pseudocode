/*
 * XREFs of MxMarkActiveDriverBits @ 0x1408AE4F0
 * Callers:
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x1408AE4F0 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSplitBitmapPages @ 0x1400465B8 (MiSplitBitmapPages.c)
 *     KeZeroSinglePage @ 0x1401AE970 (KeZeroSinglePage.c)
 *     MxMarkActiveDriverBits @ 0x1408AE4F0 (MxMarkActiveDriverBits.c)
 */

unsigned __int64 __fastcall MxMarkActiveDriverBits(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  int v8; // r9d
  __int64 v9; // r10
  int v10; // r11d
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  unsigned __int64 i; // [rsp+60h] [rbp+18h]

  v5 = a2;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v5 = *(_QWORD *)(a4 + 16LL * a5);
  result = *(_QWORD *)(a4 + 16LL * a5 + 8);
  if ( a3 > result )
    a3 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  for ( i = a3; v5 <= i; v5 += 8LL )
  {
    result = MI_READ_PTE_LOCK_FREE(v5);
    if ( (result & 1) != 0 )
    {
      v11 = (__int64)((v5 << 25) - (v9 << 25)) >> 16;
      if ( v8 == 1 )
      {
        v12 = ((((v11 << 25) - (v9 << 25)) >> 16) - a1[4]) >> 21;
        v13 = a1[1] + (v12 >> 3);
        if ( (*(_DWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) + v9) & 0x800LL) == 0 )
        {
          MiSplitBitmapPages(0xCu, a1[1] + (v12 >> 3), (v12 & 7) + 1);
          KeZeroSinglePage((_OWORD *)(v13 & 0xFFFFFFFFFFFFF000uLL));
        }
        if ( *a1 <= v12 )
          *a1 = v12 + 1;
        result = a1[1];
        _bittestandset64((signed __int64 *)result, v12);
      }
      else
      {
        result = MxMarkActiveDriverBits(
                   (_DWORD)a1,
                   (__int64)((v5 << 25) - (v9 << 25)) >> 16,
                   (int)v11 + 4088,
                   v10,
                   v8 - 1);
      }
    }
  }
  return result;
}
