/*
 * XREFs of EtwpLogMemInfoRundown @ 0x140710334
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14003AAC0 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x1402541D0 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x14070B538 (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(unsigned int a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v3; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v4[2]; // [rsp+28h] [rbp-30h] BYREF

  v3 = a1;
  MmQuerySystemMemoryInformation(v4);
  EtwpLogMemInfo(&v3, (__int64)v4, v1, v2);
  EtwpLogMemInfoWs((unsigned __int64)&v3, *(unsigned __int64 *)&v4[0]);
}
