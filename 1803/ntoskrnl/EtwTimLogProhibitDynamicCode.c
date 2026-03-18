/*
 * XREFs of EtwTimLogProhibitDynamicCode @ 0x140578370
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x1404D6800 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x1405783A0 (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitDynamicCode(unsigned int a1, __int64 a2)
{
  void *v2; // r8

  v2 = &MITIGATION_AUDIT_PROHIBIT_DYNAMIC_CODE;
  if ( a1 != 1 )
    v2 = &MITIGATION_ENFORCE_PROHIBIT_DYNAMIC_CODE;
  return EtwpTimLogMitigationForProcess(0LL, a1, v2, a2);
}
