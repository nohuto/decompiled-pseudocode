/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x14051CF4C
 * Callers:
 *     PopLogDisabledSleepReason @ 0x14051CCD4 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x14051CF94 (PopGetReasonListByReasonCode.c)
 */

void PopRemoveReasonRecordByReasonCode()
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v1; // rcx
  _QWORD *v2; // rdx

  ReasonListByReasonCode = (_QWORD *)PopGetReasonListByReasonCode();
  if ( ReasonListByReasonCode )
  {
    v1 = *ReasonListByReasonCode;
    if ( *(_QWORD **)(*ReasonListByReasonCode + 8LL) != ReasonListByReasonCode
      || (v2 = (_QWORD *)ReasonListByReasonCode[1], (_QWORD *)*v2 != ReasonListByReasonCode) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    ExFreePoolWithTag(ReasonListByReasonCode, 0x66756263u);
  }
}
