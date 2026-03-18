/*
 * XREFs of PerformDLMObjectBindings @ 0x1C005DA84
 * Callers:
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0043ED0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 * Callees:
 *     ParseDLMObjectInternal @ 0x1C005D8E4 (ParseDLMObjectInternal.c)
 */

__int64 __fastcall PerformDLMObjectBindings(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  __int64 result; // rax
  int v5; // edi
  unsigned int v6; // esi
  _DWORD **i; // rbx
  _DWORD *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r14

  if ( *(_WORD *)(a1 + 2) == 4 )
  {
    v3 = *(_DWORD **)(a1 + 32);
    result = 0LL;
    v5 = 0;
    v6 = *v3;
    if ( !*v3 )
      return result;
    for ( i = (_DWORD **)(v3 + 10); *((_WORD *)i - 15) == 4; i += 5 )
    {
      v8 = *i;
      if ( **i > 1u )
      {
        v9 = (__int64)(v8 + 12);
        v10 = (__int64)(v8 + 2);
        do
          result = ParseDLMObjectInternal((__int64)v8, a2, v10, v9);
        while ( (_DWORD)result == -1073741802 );
      }
      if ( ++v5 >= v6 )
        return result;
    }
  }
  return 3222536207LL;
}
