/*
 * XREFs of DbgUiConnectToDbg @ 0x1800D4D40
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateDebugObject @ 0x1800A66B0 (ZwCreateDebugObject.c)
 */

__int64 DbgUiConnectToDbg()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
    return (unsigned int)ZwCreateDebugObject();
  return v0;
}
