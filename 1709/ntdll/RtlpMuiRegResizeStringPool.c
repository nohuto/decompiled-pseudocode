/*
 * XREFs of RtlpMuiRegResizeStringPool @ 0x1800FD75C
 * Callers:
 *     RtlpMuiRegGrowStringPool @ 0x1800FCE10 (RtlpMuiRegGrowStringPool.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x18000442C (RtlpMuiRegFreeStringPool.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800FC204 (RtlpMuiRegCreateStringPool.c)
 */

__int64 __fastcall RtlpMuiRegResizeStringPool(__int64 a1, __int16 a2, __int16 a3, char a4)
{
  __int64 v4; // rdi
  __int16 v7; // ax
  __int16 v8; // cx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int64 StringPool; // rax

  v4 = 0LL;
  v7 = 4;
  if ( a2 >= 1 )
    v7 = a2;
  v8 = 40;
  if ( a3 >= 1 )
    v8 = a3;
  if ( a1 )
  {
    if ( v7 >= (int)*(unsigned __int16 *)(a1 + 6)
      && v8 >= (int)*(unsigned __int16 *)(a1 + 10)
      && 2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 4) <= 0xFFFFFFFF )
    {
      v9 = 2 * *(unsigned __int16 *)(a1 + 4);
      if ( 2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 8) <= 0xFFFFFFFF )
      {
        v10 = 2 * *(unsigned __int16 *)(a1 + 8);
        StringPool = RtlpMuiRegCreateStringPool(v7, v8);
        v4 = StringPool;
        if ( StringPool )
        {
          memmove(*(void **)(StringPool + 16), *(const void **)(a1 + 16), v9);
          memmove(*(void **)(v4 + 24), *(const void **)(a1 + 24), v10);
          *(_WORD *)(v4 + 6) = *(_WORD *)(a1 + 6);
          *(_WORD *)(v4 + 10) = *(_WORD *)(a1 + 10);
          if ( !a4 )
            RtlpMuiRegFreeStringPool(a1);
        }
      }
    }
  }
  return v4;
}
