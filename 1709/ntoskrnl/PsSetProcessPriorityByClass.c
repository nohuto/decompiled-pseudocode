/*
 * XREFs of PsSetProcessPriorityByClass @ 0x14050B380
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x14050D938 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     PspComputeQuantumAndPriority @ 0x14048C29C (PspComputeQuantumAndPriority.c)
 */

__int64 __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  char v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = PspComputeQuantumAndPriority(a1, a2, &v5, &v7, &v6);
  return KeSetPriorityAndQuantumProcess(a1, v3, v5, v7, v6);
}
