/*
 * XREFs of RtlpWaitOnAddressWakeEntireList @ 0x18006F8EC
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x18004B4D8 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004CFD0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpWakeByAddress @ 0x18006F6E8 (RtlpWakeByAddress.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A0E90 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __fastcall RtlpWaitOnAddressWakeEntireList(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  NTSTATUS result; // eax

  v1 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      result = _InterlockedExchange((volatile __int32 *)(v1 + 40), 2);
      if ( !result )
        result = ZwAlertThreadByThreadId(*(HANDLE *)(v1 + 8));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
