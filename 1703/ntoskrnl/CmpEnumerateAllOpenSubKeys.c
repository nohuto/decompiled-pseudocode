/*
 * XREFs of CmpEnumerateAllOpenSubKeys @ 0x1404CAAE4
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14058652C (CmpPrepareForSubtreeInvalidation.c)
 * Callees:
 *     CmpEnumerateKcbCacheBucket @ 0x1404CABA4 (CmpEnumerateKcbCacheBucket.c)
 *     CmpCleanUpKCBCacheTable @ 0x1404CAC38 (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpEnumerateAllOpenSubKeys(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // esi

  v4 = *(_QWORD *)(a1 + 24);
  result = CmpCleanUpKCBCacheTable(v4);
  if ( *(_DWORD *)a1 != 1 && ((*(_DWORD *)(a1 + 176) & 0x40000) == 0 || *(_DWORD *)a1 != 2) )
  {
    v10 = 0LL;
    v11 = 0;
    if ( *(_DWORD *)(v4 + 2808) )
    {
      while ( 1 )
      {
        result = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v4 + 2800) + 24LL * v11, a3, a4);
        if ( (_DWORD)result == 1 )
          break;
        if ( (_DWORD)result == 2 )
          --v11;
        if ( ++v11 >= *(_DWORD *)(v4 + 2808) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( a2 && *(_DWORD *)(v4 + 2824) )
      {
        do
        {
          result = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v4 + 2816) + 24 * v10, a3, a4);
          if ( (_DWORD)result == 1 )
            break;
          if ( (_DWORD)result == 2 )
            LODWORD(v10) = v10 - 1;
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v4 + 2824) );
      }
    }
  }
  return result;
}
