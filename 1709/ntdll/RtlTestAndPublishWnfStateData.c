/*
 * XREFs of RtlTestAndPublishWnfStateData @ 0x180087280
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1800A3930 (ZwUpdateWnfStateData.c)
 *     RtlpWnfETWEventPublish @ 0x1800DDDB4 (RtlpWnfETWEventPublish.c)
 */

__int64 __fastcall RtlTestAndPublishWnfStateData(
        WNF_STATE_NAME a1,
        const WNF_TYPE_ID *a2,
        const void *a3,
        ULONG a4,
        void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp)
{
  NTSTATUS updated; // ebx
  __int64 v8; // rdx
  WNF_STATE_NAME StateName; // [rsp+40h] [rbp-28h] BYREF

  StateName = a1;
  updated = ZwUpdateWnfStateData(&StateName, a3, a4, a2, ExplicitScope, MatchingChangeStamp, 1u);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v8 = 2147353486LL;
  if ( *(_BYTE *)v8 && updated >= 0 )
    ((void (__fastcall *)(_QWORD, _QWORD))RtlpWnfETWEventPublish)(StateName, a4);
  return (unsigned int)updated;
}
