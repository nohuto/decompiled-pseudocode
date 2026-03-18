/*
 * XREFs of PopDiagTracePowerTransitionEnd @ 0x140577C58
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwWriteEndScenario @ 0x140586480 (EtwWriteEndScenario.c)
 */

__int64 __fastcall PopDiagTracePowerTransitionEnd(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+48h] [rbp-30h]
  __int64 v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = MEMORY[0xFFFFF78000000014];
    v3.Ptr = (ULONGLONG)&v6;
    v4 = &v2;
    *(_QWORD *)&v3.Size = 4LL;
    v5 = 8LL;
    return EtwWriteEndScenario(PopDiagHandle, &POP_ETW_EVENT_POWERTRANSITION_END, &PopDiagActivityId, 2u, &v3);
  }
  return result;
}
