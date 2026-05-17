/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A4C70
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A4BE6 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x1801087E0 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
