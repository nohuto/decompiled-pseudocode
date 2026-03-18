/*
 * XREFs of McTemplateU0xxxqNR3 @ 0x18015DD04
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800204B0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xxxqNR3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+20h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-29h]
  __int64 v11; // [rsp+38h] [rbp-21h]
  __int64 *v12; // [rsp+40h] [rbp-19h]
  __int64 v13; // [rsp+48h] [rbp-11h]
  char *v14; // [rsp+50h] [rbp-9h]
  __int64 v15; // [rsp+58h] [rbp-1h]
  int *v16; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+68h] [rbp+Fh]
  __int64 v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+7Ch] [rbp+23h]
  __int64 v21; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+5Fh] BYREF

  v22 = a4;
  v21 = a3;
  v11 = 8LL;
  v20 = 0;
  v10 = &v21;
  v13 = 8LL;
  v12 = &v22;
  v15 = 8LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v18 = a8;
  v19 = 16 * a6;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_BLT,
           6u,
           &v9);
}
