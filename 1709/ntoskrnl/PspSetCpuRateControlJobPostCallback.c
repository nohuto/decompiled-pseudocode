/*
 * XREFs of PspSetCpuRateControlJobPostCallback @ 0x14059AA30
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x14050CEAC (PspGetNextJobProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14059AAA8 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetCpuRateControlJobPostCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdi
  void *v5; // r9
  _QWORD *NextJobProcess; // rax
  _QWORD *v7; // rbx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = (a2 + 128) & -(__int64)(a2 != 0);
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, (__int64)CurrentThread, v9, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    PspSetProcessSchedulingGroup(NextJobProcess, v4);
    v5 = v7;
    a1 = v3;
  }
  return 0LL;
}
