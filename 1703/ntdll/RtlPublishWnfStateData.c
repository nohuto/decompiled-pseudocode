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

__int64 __fastcall RtlPublishWnfStateData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int updated; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF

  v9 = a1;
  updated = ZwUpdateWnfStateData(&v9, a3, a4, a2, a5, 0, 0);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
  else
    v7 = 2147353486LL;
  if ( *(_BYTE *)v7 && updated >= 0 )
    sub_1800DF434(v9, a4);
  return (unsigned int)updated;
}
