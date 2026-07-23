/*
 * XREFs of RtlTestAndPublishWnfStateData @ 0x180087FD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwUpdateWnfStateData @ 0x1800A8AF0 (ZwUpdateWnfStateData.c)
 *     sub_1800DF434 @ 0x1800DF434 (sub_1800DF434.c)
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
    ((void (__fastcall *)(_QWORD, _QWORD))sub_1800DF434)(StateName, a4);
  return (unsigned int)updated;
}
