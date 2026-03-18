/*
 * XREFs of McTemplateU0qff @ 0x1801514E4
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x1800BC8A0 (-CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qff(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, float a4, char a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-50h] BYREF
  int *v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  float *v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  char *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+90h] [rbp+20h] BYREF
  float v14; // [rsp+98h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v7 = &v13;
  v8 = 4LL;
  v9 = &v14;
  v10 = 4LL;
  v11 = &a5;
  v12 = 4LL;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 4u, &v6);
}
