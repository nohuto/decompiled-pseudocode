/*
 * XREFs of PopGetReasonListByReasonCode @ 0x1404E89F4
 * Callers:
 *     PopRemoveReasonRecordByReasonCode @ 0x1404E89AC (PopRemoveReasonRecordByReasonCode.c)
 *     PopCheckDisabledReason @ 0x1405ADA0C (PopCheckDisabledReason.c)
 *     PopLogSleepDisabled @ 0x1405D5670 (PopLogSleepDisabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetReasonListByReasonCode(int a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  char v3; // dl

  v1 = PowerStateDisableReasonListHead;
  v2 = 0LL;
  v3 = 0;
  while ( (__int64 *)v1 != &PowerStateDisableReasonListHead )
  {
    v2 = v1;
    if ( *(_DWORD *)(v1 + 24) == a1 )
    {
      v3 = 1;
      return v2 & -(__int64)(v3 != 0);
    }
    v1 = *(_QWORD *)v1;
  }
  return v2 & -(__int64)(v3 != 0);
}
