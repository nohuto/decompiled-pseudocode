/*
 * XREFs of RtlpMuiRegResizeStringPool @ 0x1407F7830
 * Callers:
 *     RtlpMuiRegGrowStringPool @ 0x1407F74BC (RtlpMuiRegGrowStringPool.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlpMuiRegCreateStringPool @ 0x140635758 (RtlpMuiRegCreateStringPool.c)
 */

_QWORD *__fastcall RtlpMuiRegResizeStringPool(const void **P, __int16 a2, __int16 a3, char a4)
{
  _QWORD *v4; // rdi
  __int16 v7; // ax
  __int16 v8; // cx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  _QWORD *StringPool; // rax

  v4 = 0LL;
  v7 = 4;
  if ( a2 >= 1 )
    v7 = a2;
  v8 = 40;
  if ( a3 >= 1 )
    v8 = a3;
  if ( P )
  {
    if ( v7 >= (int)*((unsigned __int16 *)P + 3)
      && v8 >= (int)*((unsigned __int16 *)P + 5)
      && 2 * (unsigned __int64)*((unsigned __int16 *)P + 2) <= 0xFFFFFFFF )
    {
      v9 = 2 * *((unsigned __int16 *)P + 2);
      if ( 2 * (unsigned __int64)*((unsigned __int16 *)P + 4) <= 0xFFFFFFFF )
      {
        v10 = 2 * *((unsigned __int16 *)P + 4);
        StringPool = RtlpMuiRegCreateStringPool(v7, v8);
        v4 = StringPool;
        if ( StringPool )
        {
          memmove((void *)StringPool[2], P[2], v9);
          memmove((void *)v4[3], P[3], v10);
          *((_WORD *)v4 + 3) = *((_WORD *)P + 3);
          *((_WORD *)v4 + 5) = *((_WORD *)P + 5);
          if ( !a4 )
            ExFreePoolWithTag(P, 0);
        }
      }
    }
  }
  return v4;
}
