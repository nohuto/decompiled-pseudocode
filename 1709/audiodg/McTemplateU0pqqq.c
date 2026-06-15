/*
 * XREFs of McTemplateU0pqqq @ 0x140059900
 * Callers:
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140059230 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x140035E94 (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0pqqq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  _BYTE v7[16]; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v8; // [rsp+30h] [rbp-50h]
  __int64 v9; // [rsp+38h] [rbp-48h]
  int *v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  char *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  char *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 8LL;
  v8 = &v16;
  v11 = 4LL;
  v10 = &v17;
  v13 = 4LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  return McGenEventWriteUM(a1, &EVT_GLITCH_CP_SERVER_OUTPUT_READ_POINTER_OVERWRITE, 5LL, (__int64)v7);
}
