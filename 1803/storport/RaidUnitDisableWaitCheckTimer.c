/*
 * XREFs of RaidUnitDisableWaitCheckTimer @ 0x1C003CA44
 * Callers:
 *     RaUnitSetQOSIoctl @ 0x1C003AD84 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0025F1C (RaidAdapterDisableQosWaitTimeoutCheck.c)
 */

__int64 __fastcall RaidUnitDisableWaitCheckTimer(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2656), 0, 1);
  if ( (_DWORD)result == 1 )
    return RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  return result;
}
