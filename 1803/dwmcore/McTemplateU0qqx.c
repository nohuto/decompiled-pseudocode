/*
 * XREFs of McTemplateU0qqx @ 0x18014AC30
 * Callers:
 *     ?Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x18002DDC4 (-Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180047BA0 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180047BF0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qqx(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-50h] BYREF
  int *v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  int *v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  char *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+90h] [rbp+20h] BYREF
  int v14; // [rsp+98h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = 8LL;
  v8 = 4LL;
  v7 = &v13;
  v10 = 4LL;
  v9 = &v14;
  v11 = &a5;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_ROUNDTRIPREQUEST_STATE,
           4u,
           &v6);
}
