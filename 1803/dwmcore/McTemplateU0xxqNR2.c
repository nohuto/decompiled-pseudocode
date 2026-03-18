/*
 * XREFs of McTemplateU0xxqNR2 @ 0x18015DC68
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800204B0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xxqNR2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v9; // [rsp+30h] [rbp-50h]
  __int64 v10; // [rsp+38h] [rbp-48h]
  __int64 *v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  int *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  __int64 v18; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  v18 = a3;
  v10 = 8LL;
  v17 = 0;
  v9 = &v18;
  v12 = 8LL;
  v11 = &v19;
  v14 = 4LL;
  v13 = &a5;
  v15 = a7;
  v16 = 16 * a5;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDI,
           5u,
           &v8);
}
