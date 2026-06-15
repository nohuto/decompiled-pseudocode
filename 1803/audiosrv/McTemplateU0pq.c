/*
 * XREFs of McTemplateU0pq @ 0x1800C7160
 * Callers:
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800C6E40 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180017BB0 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  int *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v5[2] = &v11;
  v7 = 0;
  v6 = 8;
  v8 = &v12;
  v10 = 0;
  v9 = 4;
  return McGenEventWriteUM(AUDIO_EVENT_PROVIDER_Context, &EVT_VOLUME_LIMIT_CHANGED_EXIT, 3LL, (__int64)v5);
}
