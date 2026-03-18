/*
 * XREFs of MiMarkLargePagePte @ 0x1408BA5D0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 */

__int64 __fastcall MiMarkLargePagePte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  int v6; // r10d
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = v2;
  if ( (v2 & 1) != 0 && (v2 & 0x80u) != 0LL )
  {
    v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9);
    if ( MiIsPfnInline((v4 >> 12) & 0xFFFFFFFFFLL) )
    {
      v7 = 512LL;
      if ( v6 > 1 )
      {
        v8 = (unsigned int)(v6 - 1);
        do
        {
          v7 <<= 9;
          --v8;
        }
        while ( v8 );
      }
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v5, v7, 1, 0);
    }
  }
  return 0LL;
}
