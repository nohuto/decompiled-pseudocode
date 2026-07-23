/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x180069680
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x1800696E0 (RtlRealSuccessor.c)
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplaying(PRTL_GENERIC_TABLE Table, PVOID *RestartKey)
{
  PVOID result; // rax
  _QWORD *i; // rcx

  result = Table->TableRoot;
  if ( Table->TableRoot )
  {
    if ( *RestartKey )
    {
      result = RtlRealSuccessor((PRTL_SPLAY_LINKS)*RestartKey);
      if ( result )
        *RestartKey = result;
    }
    else
    {
      for ( i = (_QWORD *)*((_QWORD *)result + 1); i; i = (_QWORD *)i[1] )
        result = i;
      *RestartKey = result;
    }
    return (PVOID)(((unsigned __int64)result + 40) & -(__int64)(result != 0LL));
  }
  return result;
}
