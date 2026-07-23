/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800D06BC
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     LdrDeleteEnclave @ 0x1800D0060 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D00E0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D01C0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D0260 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800D0640 (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D0AE0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall LdrpDereferenceEnclave(PVOID BaseAddress)
{
  LOGICAL result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 14, 0xFFFFFFFF);
  if ( result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *((PVOID *)BaseAddress + 13));
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
