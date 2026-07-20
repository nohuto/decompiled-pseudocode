/*
 * XREFs of WppControlCallback @ 0x140013100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WppControlCallback(int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v5; // ecx
  __int64 TraceLoggerHandle; // rdi
  int TraceEnableFlags; // eax
  char TraceEnableLevel; // si

  *a3 = 0;
  v5 = a1 - 4;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 87LL;
    TraceLoggerHandle = 0LL;
    TraceEnableFlags = 0;
    TraceEnableLevel = 0;
  }
  else
  {
    TraceLoggerHandle = EtwGetTraceLoggerHandle(a4);
    TraceEnableLevel = EtwGetTraceEnableLevel(TraceLoggerHandle);
    TraceEnableFlags = EtwGetTraceEnableFlags(TraceLoggerHandle);
  }
  if ( (*(_BYTE *)(a2 + 26) & 2) != 0 )
  {
    if ( *(_QWORD *)(a2 + 16) )
      a2 = *(_QWORD *)(a2 + 16);
  }
  *(_QWORD *)(a2 + 16) = TraceLoggerHandle;
  *(_BYTE *)(a2 + 25) = TraceEnableLevel;
  *(_DWORD *)(a2 + 28) = TraceEnableFlags;
  return 0LL;
}
