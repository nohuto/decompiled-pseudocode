/*
 * XREFs of DbgUiConnectToDbg @ 0x1800CFA40
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateDebugObject @ 0x1800A1490 (NtCreateDebugObject.c)
 */

__int64 DbgUiConnectToDbg()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
    return (unsigned int)NtCreateDebugObject();
  return v0;
}
