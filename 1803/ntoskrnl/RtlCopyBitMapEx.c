/*
 * XREFs of RtlCopyBitMapEx @ 0x140287900
 * Callers:
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlpCopyBitMapTailToHeadEx @ 0x140288EF4 (RtlpCopyBitMapTailToHeadEx.c)
 */

char *__fastcall RtlCopyBitMapEx(char **a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  char *result; // rax
  char *v7; // rcx
  char *v8; // rdx
  char *v9; // rdi
  __int64 v10; // rbx
  size_t v11; // rdi
  char *v12; // r9

  v3 = *a2;
  result = *a1;
  if ( *a1 <= *a2 )
    v3 = *a1;
  if ( v3 )
  {
    v7 = a2[1];
    v8 = a1[1];
    if ( v8 > v7 || (result = &v8[8 * ((unsigned __int64)(v3 - 1) >> 6)], v7 > result) )
    {
      v9 = v3;
      v10 = (unsigned __int8)v3 & 7;
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
      return (char *)RtlpCopyBitMapTailToHeadEx(a1, a2, a3, v3);
    }
  }
  return result;
}
