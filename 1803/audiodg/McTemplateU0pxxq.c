/*
 * XREFs of McTemplateU0pxxq @ 0x140056A3C
 * Callers:
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140055BD0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x140034AB4 (McGenEventWriteUM.c)
 */

__int64 McTemplateU0pxxq(__int64 a1, __int64 a2, ...)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-60h] BYREF
  va_list v4; // [rsp+30h] [rbp-50h]
  __int64 v5; // [rsp+38h] [rbp-48h]
  va_list v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+48h] [rbp-38h]
  va_list v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  va_list v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF
  va_list va; // [rsp+A0h] [rbp+20h]
  __int64 v14; // [rsp+A8h] [rbp+28h] BYREF
  va_list va1; // [rsp+A8h] [rbp+28h]
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF
  va_list va2; // [rsp+B0h] [rbp+30h]
  va_list va3; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  v11 = 4LL;
  va_copy(v10, va3);
  return McGenEventWriteUM(a1, &EVT_GLITCH_CP_CLIENT_OUTPUT_SERVER_OVERREAD, 5LL, (__int64)v3);
}
