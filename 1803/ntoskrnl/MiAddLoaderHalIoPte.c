/*
 * XREFs of MiAddLoaderHalIoPte @ 0x1408BA520
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 */

__int64 __fastcall MiAddLoaderHalIoPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // r11
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v12 & 1) != 0 )
  {
    v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
    if ( !MiIsPfnInline((v2 >> 12) & 0xFFFFFFFFFLL) )
    {
      if ( (v4 & 0x80u) == 0LL )
      {
        v8 = v6;
      }
      else
      {
        v8 = 512LL;
        if ( v5 > (int)v6 )
        {
          v9 = (unsigned int)(v5 - 1);
          do
          {
            v8 <<= 9;
            v9 -= v6;
          }
          while ( v9 );
        }
      }
      v10 = v6 & (v4 >> 4);
      if ( v10 || (v4 & 8) == 0 )
      {
        v11 = v6;
        if ( v10 )
          v11 = 0;
      }
      else
      {
        v11 = 2;
      }
      MiReferenceIoPages(v6, v3, v8, v11, 0LL, 0LL);
    }
  }
  return 0LL;
}
