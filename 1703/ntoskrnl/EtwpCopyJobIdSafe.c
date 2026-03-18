/*
 * XREFs of EtwpCopyJobIdSafe @ 0x14070B520
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140163C1C (EtwTraceJobServerSiloMonitorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobIdSafe(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 1220);
    *a1 = result;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
