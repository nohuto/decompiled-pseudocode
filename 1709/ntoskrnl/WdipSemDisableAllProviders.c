/*
 * XREFs of WdipSemDisableAllProviders @ 0x14073FDC0
 * Callers:
 *     WdipSemShutdown @ 0x14073ED7C (WdipSemShutdown.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x1405A8CF4 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemDisableAllProviders()
{
  __int64 v0; // rbx
  __int32 v1; // esi
  __int32 v2; // ebp
  __int64 result; // rax
  __int64 v4; // rdi

  v0 = 0LL;
  v1 = _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId);
  v2 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
  for ( result = (unsigned int)dword_1403613A0; (unsigned int)v0 < dword_1403613A0; v0 = (unsigned int)(v0 + 1) )
  {
    v4 = WdipSemProviderTable[v0];
    if ( *(_BYTE *)(v4 + 37) && v1 )
      result = WdipSemEnableDisableTrace(v1, (__int128 *)v4, 0, 0LL, 0, 0);
    if ( *(_BYTE *)(v4 + 69) )
    {
      if ( v2 )
        result = WdipSemEnableDisableTrace(v2, (__int128 *)v4, 0, 0LL, 0, 0);
    }
  }
  return result;
}
