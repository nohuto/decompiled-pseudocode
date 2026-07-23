/*
 * XREFs of RtlTestAndPublishWnfStateData @ 0x180082DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x18009E370 (ZwUpdateWnfStateData.c)
 *     sub_1800D8CB4 @ 0x1800D8CB4 (sub_1800D8CB4.c)
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
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
  else
    v8 = 2147353486LL;
  if ( *(_BYTE *)v8 && updated >= 0 )
    ((void (__fastcall *)(_QWORD, _QWORD))sub_1800D8CB4)(StateName, a4);
  return (unsigned int)updated;
}
