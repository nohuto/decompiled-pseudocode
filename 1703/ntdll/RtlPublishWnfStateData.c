/*
 * XREFs of RtlPublishWnfStateData @ 0x180082250
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwUpdateWnfStateData @ 0x1800A8AF0 (ZwUpdateWnfStateData.c)
 *     sub_1800DF434 @ 0x1800DF434 (sub_1800DF434.c)
 */

NTSTATUS __cdecl RtlPublishWnfStateData(
        WNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *Buffer,
        ULONG Length,
        const void *ExplicitScope)
{
  int updated; // ebx
  __int64 v7; // rdx
  WNF_STATE_NAME StateNamea; // [rsp+40h] [rbp-28h] BYREF

  StateNamea = StateName;
  updated = ZwUpdateWnfStateData(&StateNamea, Buffer, Length, TypeId, ExplicitScope, 0, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
  else
    v7 = 2147353486LL;
  if ( *(_BYTE *)v7 && updated >= 0 )
    ((void (__fastcall *)(_QWORD, _QWORD))sub_1800DF434)(StateNamea, Length);
  return updated;
}
