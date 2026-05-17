/*
 * XREFs of RtlPublishWnfStateData @ 0x1800805E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1800A3930 (ZwUpdateWnfStateData.c)
 *     RtlpWnfETWEventPublish @ 0x1800DDDB4 (RtlpWnfETWEventPublish.c)
 */

__int64 __fastcall RtlPublishWnfStateData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int updated; // ebx
  __int64 v6; // rdx
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF

  v8 = a1;
  updated = ZwUpdateWnfStateData(&v8, a3, a4, a2);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v6 = 2147353486LL;
  if ( *(_BYTE *)v6 && updated >= 0 )
    RtlpWnfETWEventPublish(v8, a4);
  return (unsigned int)updated;
}
