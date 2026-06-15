/*
 * XREFs of McTemplateU0pt @ 0x180021C20
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180020F5C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18000B3A4 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0pt(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  int *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v8 = 0;
  v7 = 8;
  v9 = &v13;
  v11 = 0;
  v10 = 4;
  return McGenEventWriteUM(MICROSOFT_WINDOWS_EUVOLUMEPOLICY_Context, &EUVolumePolicy_VolumeLimit_Create, 3u, &v5);
}
