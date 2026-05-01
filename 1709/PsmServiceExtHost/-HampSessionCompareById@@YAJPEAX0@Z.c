/*
 * XREFs of ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180048EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSessionCompareById(void *a1, _DWORD *a2)
{
  if ( a2[10] == (_DWORD)a1 )
    return 0LL;
  else
    return a2[10] < (unsigned int)a1 ? 1 : -1;
}
