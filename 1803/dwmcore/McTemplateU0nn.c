/*
 * XREFs of McTemplateU0nn @ 0x1801EBD60
 * Callers:
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EBA78 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0nn(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  __int64 v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v10 = 0;
  v13 = 0;
  v8 = a4;
  v11 = a6;
  v9 = 8;
  v12 = 16;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTINDESKTOP_RECT, 3u, &v7);
}
