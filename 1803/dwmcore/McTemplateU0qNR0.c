/*
 * XREFs of McTemplateU0qNR0 @ 0x1801513F8
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qNR0(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-48h] BYREF
  int *v7; // [rsp+30h] [rbp-38h]
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v11 = a4 * a3;
  v10 = a5;
  v12 = 0;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 3u, &v6);
}
