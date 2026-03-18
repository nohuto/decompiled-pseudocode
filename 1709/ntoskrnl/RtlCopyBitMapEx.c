/*
 * XREFs of RtlCopyBitMapEx @ 0x140251D50
 * Callers:
 *     MiResizeAweBitMap @ 0x1406E5A4C (MiResizeAweBitMap.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlpCopyBitMapTailToHeadEx @ 0x140253884 (RtlpCopyBitMapTailToHeadEx.c)
 */

char *__fastcall RtlCopyBitMapEx(char **a1, char **a2, __int64 a3)
{
  char *result; // rax
  char *v5; // rbx
  char *v7; // rcx
  char *v8; // rdx
  char *v9; // rdi
  __int64 v10; // rbx
  size_t v11; // rdi
  char *v12; // r9

  result = *a2;
  v5 = *a1;
  if ( *a1 > *a2 )
    v5 = *a2;
  if ( v5 )
  {
    v7 = a2[1];
    v8 = a1[1];
    if ( v8 > v7 || (result = &v8[8 * ((unsigned __int64)(v5 - 1) >> 6)], v7 > result) )
    {
      v9 = v5;
      v10 = (unsigned __int8)v5 & 7;
      v11 = (unsigned __int64)v9 >> 3;
      if ( v11 )
        result = (char *)memmove(v7, v8, v11);
      if ( v10 )
      {
        v12 = a2[1];
        v12[v11] &= ~((1 << v10) - 1);
        result = a1[1];
        v12[v11] |= ((1 << v10) - 1) & result[v11];
      }
    }
    else
    {
      return (char *)RtlpCopyBitMapTailToHeadEx(a1, a2, a3, v5);
    }
  }
  return result;
}
