/*
 * XREFs of EtwpMapEnableFlags @ 0x1406290D4
 * Callers:
 *     EtwpGetLoggerInfoFromContext @ 0x14058B16C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x1406289E0 (EtwpInitializeSiloAllowedGroupMask.c)
 *     EtwpUpdateGroupMasks @ 0x140628B88 (EtwpUpdateGroupMasks.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpMapEnableFlags(__int64 a1, char a2)
{
  __int64 *v3; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx

  v3 = EtwpEnableFlagMap;
  v5 = 8LL;
  do
  {
    if ( a2 == 1 )
    {
      if ( a1 )
      {
        result = (unsigned __int64)*(unsigned int *)v3 >> 29;
        if ( (*(_DWORD *)v3 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v8 = *((unsigned int *)v3 + 1);
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)v3 + 1);
      if ( a1 )
      {
        result = (unsigned __int64)v6 >> 29;
        if ( (v6 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v8 = *(unsigned int *)v3;
LABEL_6:
          result = v8 >> 29;
          *(_DWORD *)(a1 + 4 * (v8 >> 29)) |= v8 & 0x1FFFFFFF;
        }
      }
    }
    ++v3;
    --v5;
  }
  while ( v5 );
  return result;
}
