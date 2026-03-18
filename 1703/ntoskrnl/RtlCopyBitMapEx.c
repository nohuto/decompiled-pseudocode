/*
 * XREFs of RtlCopyBitMapEx @ 0x14023C4E0
 * Callers:
 *     MiResizeAweBitMap @ 0x1406B8CF8 (MiResizeAweBitMap.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlpCopyBitMapTailToHeadEx @ 0x14023DAD4 (RtlpCopyBitMapTailToHeadEx.c)
 */

char *__fastcall RtlCopyBitMapEx(_QWORD *a1, char **a2)
{
  char *result; // rax
  _QWORD *v3; // r8
  char *v6; // rcx
  char *v7; // rdx
  __int64 v8; // rbx
  size_t v9; // rdi
  char *v10; // r9

  result = *a2;
  v3 = a1;
  if ( *a1 > (unsigned __int64)*a2 )
    v3 = a2;
  if ( *v3 )
  {
    v6 = a2[1];
    v7 = (char *)a1[1];
    if ( v7 > v6 || (result = &v7[8 * ((unsigned __int64)(*v3 - 1LL) >> 6)], v6 > result) )
    {
      v8 = *v3 & 7LL;
      v9 = *v3 >> 3;
      if ( v9 )
        result = (char *)memmove(v6, v7, v9);
      if ( v8 )
      {
        v10 = a2[1];
        v10[v9] &= ~((1 << v8) - 1);
        result = (char *)a1[1];
        v10[v9] |= ((1 << v8) - 1) & result[v9];
      }
    }
    else
    {
      return (char *)RtlpCopyBitMapTailToHeadEx(a1, a2, v3, *v3);
    }
  }
  return result;
}
