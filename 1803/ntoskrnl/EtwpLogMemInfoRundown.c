/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1407AEC84
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1400CF52C (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x1402AFB10 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1407A8264 (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF

  MmQuerySystemMemoryInformation(v4);
  EtwpLogMemInfo(a1, (__int64)v4, v2, v3);
  EtwpLogMemInfoWs(a1, *(unsigned __int64 *)&v4[0]);
}
