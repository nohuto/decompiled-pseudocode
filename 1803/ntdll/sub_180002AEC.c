/*
 * XREFs of sub_180002AEC @ 0x180002AEC
 * Callers:
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_180047030 @ 0x180047030 (sub_180047030.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 __fastcall sub_180002AEC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  _BYTE v7[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v8; // [rsp+26h] [rbp-62h]
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v8 = 7201;
  v9 = 0LL;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v13 = a5;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v5 = 2147353478LL;
  return ZwTraceEvent(*(unsigned __int8 *)v5, 1027LL, 40LL, v7);
}
