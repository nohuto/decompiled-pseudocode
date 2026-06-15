/*
 * XREFs of McTemplateU0pq @ 0x140057D2C
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140057870 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x140035E94 (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0pq(__int64 a1, __int128 *a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v5[6]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+80h] [rbp+18h] BYREF

  v6 = a3;
  v5[3] = 8LL;
  v4 = 0;
  v5[2] = &v6;
  v5[5] = 4LL;
  v5[4] = &v4;
  return McGenEventWriteUM(0LL, a2, 3LL, (__int64)v5);
}
