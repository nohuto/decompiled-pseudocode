/*
 * XREFs of RtlPublishWnfStateData @ 0x18007D640
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x18009E370 (ZwUpdateWnfStateData.c)
 *     sub_1800D8CB4 @ 0x1800D8CB4 (sub_1800D8CB4.c)
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
    sub_1800D8CB4(v9, a4);
  return (unsigned int)updated;
}
