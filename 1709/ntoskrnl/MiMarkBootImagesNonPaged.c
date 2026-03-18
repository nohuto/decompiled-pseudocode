/*
 * XREFs of MiMarkBootImagesNonPaged @ 0x14084994C
 * Callers:
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiMarkBootImagesNonPaged(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rdi
  unsigned __int64 v3; // rbx
  __int64 *v4; // rbx
  __int64 *v5; // r9
  __int64 PteShadow; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v3 = i[6];
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    {
      v4 = (__int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v5 = &v4[(unsigned int)(((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12)];
      while ( v4 < v5 )
      {
        PteShadow = *v4;
        if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v8 = PteShadow;
        v7 = 6 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v8);
        *(_BYTE *)(8 * v7 - 0x58000000000LL + 35) |= 8u;
        ++v4;
      }
    }
  }
}
