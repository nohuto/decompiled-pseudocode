/*
 * XREFs of WdipSemEnableAllProviders @ 0x1405A8D44
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     WdipSemEnableDisableTrace @ 0x1405A8CF4 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemEnableAllProviders()
{
  __int64 v0; // rbp
  __int16 v1; // r15
  __int16 v2; // r14
  __int64 result; // rax
  __int64 v4; // rsi
  char *v5; // rdi
  char *v6; // rbx

  v0 = 0LL;
  v1 = _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId);
  v2 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
  result = (unsigned int)dword_1403613A0;
  if ( dword_1403613A0 )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)&WdipSemProviderTable + v0);
      result = *(_QWORD *)v4 - *(_QWORD *)&WDI_SEM_PROVIDER.Data1;
      if ( *(_QWORD *)v4 == *(_QWORD *)&WDI_SEM_PROVIDER.Data1 )
        result = *(_QWORD *)(v4 + 8) - *(_QWORD *)WDI_SEM_PROVIDER.Data4;
      if ( !result )
        goto LABEL_9;
      v5 = (char *)(v4 + 16);
      v6 = (char *)(v4 + 48);
      if ( !*(_DWORD *)(v4 + 40) || !*(_BYTE *)(v4 + 36) )
        goto LABEL_9;
      result = WdipSemEnableDisableTrace(
                 v1,
                 *((__int128 **)&WdipSemProviderTable + v0),
                 *v5,
                 *(_QWORD *)(v4 + 24),
                 *(_DWORD *)(v4 + 32),
                 1);
      if ( (int)result < 0 )
        break;
      *(_BYTE *)(v4 + 37) = 1;
      if ( *(_BYTE *)(v4 + 68) )
      {
        result = WdipSemEnableDisableTrace(v2, (__int128 *)v4, *v6, *(_QWORD *)(v4 + 56), *(_DWORD *)(v4 + 64), 1);
        if ( (int)result < 0 )
          goto LABEL_15;
        *(_BYTE *)(v4 + 69) = 1;
      }
LABEL_9:
      v0 = (unsigned int)(v0 + 1);
      if ( (unsigned int)v0 >= dword_1403613A0 )
        return result;
    }
    memset(v5, 0, 0x20uLL);
LABEL_15:
    result = (__int64)memset(v6, 0, 0x20uLL);
    goto LABEL_9;
  }
  return result;
}
