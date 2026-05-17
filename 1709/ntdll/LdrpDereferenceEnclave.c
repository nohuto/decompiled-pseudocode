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

__int64 __fastcall LdrpDereferenceEnclave(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 104));
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
