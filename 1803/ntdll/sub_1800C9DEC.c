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

LOGICAL __fastcall sub_1800C9DEC(PVOID BaseAddress)
{
  LOGICAL result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 14, 0xFFFFFFFF);
  if ( result == 1 )
  {
    RtlFreeHeap(HeapHandle, 0, *((PVOID *)BaseAddress + 13));
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
