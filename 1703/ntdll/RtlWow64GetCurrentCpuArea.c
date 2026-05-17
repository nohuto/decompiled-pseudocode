/*
 * XREFs of RtlWow64GetCurrentCpuArea @ 0x180068BF0
 * Callers:
 *     RtlWow64GetCurrentMachine @ 0x1800688B0 (RtlWow64GetCurrentMachine.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlWow64GetCpuAreaInfo @ 0x180068C70 (RtlWow64GetCpuAreaInfo.c)
 */

__int64 __fastcall RtlWow64GetCurrentCpuArea(_WORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+44h] [rbp-14h]

  result = RtlWow64GetCpuAreaInfo(NtCurrentTeb()->TlsSlots[1], 0LL, v7);
  if ( (int)result >= 0 )
  {
    if ( a1 )
      *a1 = v8;
    if ( a2 )
      *a2 = v7[0];
    if ( a3 )
      *a3 = *(_QWORD *)v7[1];
    return 0LL;
  }
  return result;
}
