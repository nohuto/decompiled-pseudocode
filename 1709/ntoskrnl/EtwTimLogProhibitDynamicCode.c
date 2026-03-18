/*
 * XREFs of EtwTimLogProhibitDynamicCode @ 0x140587EEC
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x1404D5370 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140587F1C (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitDynamicCode(unsigned int a1, __int64 a2)
{
  void *v2; // r8

  v2 = &MITIGATION_AUDIT_PROHIBIT_DYNAMIC_CODE;
  if ( a1 != 1 )
    v2 = &MITIGATION_ENFORCE_PROHIBIT_DYNAMIC_CODE;
  return EtwpTimLogMitigationForProcess(0LL, a1, v2, a2);
}
