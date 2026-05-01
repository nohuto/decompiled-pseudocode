/*
 * XREFs of ?_GetLaunchArgsSubstring@CortanaSharedExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x1800BC67C
 * Callers:
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1800BC460 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        const unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rdi
  size_t v8; // rax
  wchar_t *v9; // rax
  unsigned __int64 v10; // rcx

  v5 = a3;
  if ( a2 )
    v8 = wcsnlen(a2, a3);
  else
    v8 = 0LL;
  *a4 += v8;
  if ( *a4 <= &a1[v5] )
  {
    v9 = wcsstr(*a4, L"&");
    if ( v9 )
    {
      *a5 = v9 - *a4;
    }
    else
    {
      v10 = -1LL;
      do
        ++v10;
      while ( (*a4)[v10] );
      *a5 = v10;
    }
  }
  return 0LL;
}
