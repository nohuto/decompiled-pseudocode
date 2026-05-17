/*
 * XREFs of RtlWow64GetCurrentMachine @ 0x180069D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlWow64GetCurrentCpuArea @ 0x180069D60 (RtlWow64GetCurrentCpuArea.c)
 */

__int64 RtlWow64GetCurrentMachine()
{
  unsigned __int16 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = -31132;
  if ( (int)NtCurrentTeb()->SpareUlong0 > 0 )
    RtlWow64GetCurrentCpuArea(&v1, 0LL, 0LL);
  return v1;
}
