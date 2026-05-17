/*
 * XREFs of sub_1800C9DEC @ 0x1800C9DEC
 * Callers:
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800C9790 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800C9810 (LdrInitializeEnclave.c)
 *     sub_1800C98F0 @ 0x1800C98F0 (sub_1800C98F0.c)
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 *     sub_1800C9D70 @ 0x1800C9D70 (sub_1800C9D70.c)
 *     LdrCallEnclave_0 @ 0x1800CA210 (LdrCallEnclave_0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_1800C9DEC(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    RtlFreeHeap(qword_18015C288, 0, *(_QWORD *)(a1 + 104));
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
