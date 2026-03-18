/*
 * XREFs of McTemplateU0xcqf @ 0x18021E8B8
 * Callers:
 *     ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@DirectDisplay@Graphics@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x18021D5C4 (-CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDispla.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E1C4 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xcqf(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, char a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v8; // [rsp+30h] [rbp-50h]
  __int64 v9; // [rsp+38h] [rbp-48h]
  char *v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  char *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  char *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF
  char v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 8LL;
  v8 = &v16;
  v11 = 1LL;
  v10 = &v17;
  v13 = 4LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 5u, &v7);
}
