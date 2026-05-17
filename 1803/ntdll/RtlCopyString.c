/*
 * XREFs of RtlCopyString @ 0x1800837A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

void *__fastcall RtlCopyString(__int64 a1, const void **a2)
{
  void *result; // rax
  size_t v3; // r8
  __int16 v4; // ax

  result = 0LL;
  *(_WORD *)a1 = 0;
  if ( a2 )
  {
    v3 = *(unsigned __int16 *)(a1 + 2);
    v4 = *(_WORD *)a2;
    if ( *(unsigned __int16 *)a2 <= v3 )
      v3 = *(unsigned __int16 *)a2;
    else
      v4 = *(_WORD *)(a1 + 2);
    *(_WORD *)a1 = v4;
    return memmove(*(void **)(a1 + 8), a2[1], v3);
  }
  return result;
}
