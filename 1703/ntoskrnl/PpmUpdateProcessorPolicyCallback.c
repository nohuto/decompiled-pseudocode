/*
 * XREFs of PpmUpdateProcessorPolicyCallback @ 0x1401496D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmUpdateTargetProcessorPolicy @ 0x14017D478 (PpmUpdateTargetProcessorPolicy.c)
 */

__int64 __fastcall PpmUpdateProcessorPolicyCallback(__int64 a1, int a2, int a3)
{
  PpmUpdateTargetProcessorPolicy(*(_QWORD *)(a1 + 24304), *(_QWORD *)(*(_QWORD *)(a1 + 24312) + 8LL), a2, a3, a1);
  return 0LL;
}
