/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x1404C5C00
 * Callers:
 *     PopLogDisabledSleepReason @ 0x1404C598C (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1404C5A80 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x1404C5C4C (PopGetReasonListByReasonCode.c)
 */

void PopRemoveReasonRecordByReasonCode()
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v1; // rdx
  _QWORD *v2; // rcx

  ReasonListByReasonCode = (_QWORD *)PopGetReasonListByReasonCode();
  if ( ReasonListByReasonCode )
  {
    v1 = *ReasonListByReasonCode;
    v2 = (_QWORD *)ReasonListByReasonCode[1];
    if ( *(_QWORD **)(*ReasonListByReasonCode + 8LL) != ReasonListByReasonCode
      || (_QWORD *)*v2 != ReasonListByReasonCode )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    ExFreePoolWithTag(ReasonListByReasonCode, 0x66756263u);
  }
}
