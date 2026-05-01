/*
 * XREFs of PerSessionState::_LauncherVisibilityWnfCallback @ 0x180152BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerSessionState::_LauncherVisibilityWnfCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        bool *a4,
        _DWORD *a5,
        int a6)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( a5 )
  {
    if ( a6 == 4 )
    {
      *a4 = *a5 != 0;
      return 0LL;
    }
  }
  return result;
}
