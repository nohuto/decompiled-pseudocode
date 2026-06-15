/*
 * XREFs of Template_pq @ 0x140055B0C
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140055660 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+28h] [rbp-40h] BYREF
  int *v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  *(_QWORD *)&v5.Size = 8LL;
  v4 = 0;
  v5.Ptr = (ULONGLONG)&v8;
  v7 = 4LL;
  v6 = &v4;
  return EventWrite(Microsoft_Windows_AudioHandle, a2, 2u, &v5);
}
