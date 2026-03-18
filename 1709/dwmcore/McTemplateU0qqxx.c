/*
 * XREFs of McTemplateU0qqxx @ 0x18013237C
 * Callers:
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180029AA0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0qqxx(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+20h] [rbp-60h] BYREF
  int *v8; // [rsp+30h] [rbp-50h]
  __int64 v9; // [rsp+38h] [rbp-48h]
  int *v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  char *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  char *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+A0h] [rbp+20h] BYREF
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 4LL;
  v8 = &v16;
  v11 = 4LL;
  v10 = &v17;
  v13 = 8LL;
  v12 = &a5;
  v15 = 8LL;
  v14 = &a6;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, &CHANNELANIMATIONS_ACTIVE, 5u, &v7);
}
