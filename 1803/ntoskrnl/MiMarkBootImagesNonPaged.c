/*
 * XREFs of MiMarkBootImagesNonPaged @ 0x1408AD644
 * Callers:
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 */

void __fastcall MiMarkBootImagesNonPaged(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v6 = i[6];
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
    {
      v5 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 = v5 + 8LL * (unsigned int)(((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12);
      while ( v5 < v4 )
      {
        v7 = MI_READ_PTE_LOCK_FREE(v5);
        v3 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFLL);
        *(_BYTE *)(8 * v3 - 0x58000000000LL + 35) |= 8u;
        v5 += 8LL;
      }
    }
  }
}
