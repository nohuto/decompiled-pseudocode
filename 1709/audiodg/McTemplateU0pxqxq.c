/*
 * XREFs of McTemplateU0pxqxq @ 0x140059A30
 * Callers:
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140059230 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x140035E94 (McGenEventWriteUM.c)
 */

__int64 McTemplateU0pxqxq(__int64 a1, __int64 a2, ...)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-31h] BYREF
  va_list v4; // [rsp+30h] [rbp-21h]
  __int64 v5; // [rsp+38h] [rbp-19h]
  va_list v6; // [rsp+40h] [rbp-11h]
  __int64 v7; // [rsp+48h] [rbp-9h]
  va_list v8; // [rsp+50h] [rbp-1h]
  __int64 v9; // [rsp+58h] [rbp+7h]
  va_list v10; // [rsp+60h] [rbp+Fh]
  __int64 v11; // [rsp+68h] [rbp+17h]
  va_list v12; // [rsp+70h] [rbp+1Fh]
  __int64 v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+B0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B0h] [rbp+5Fh]
  __int64 v16; // [rsp+B8h] [rbp+67h] BYREF
  va_list va1; // [rsp+B8h] [rbp+67h]
  __int64 v18; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+C0h] [rbp+6Fh]
  __int64 v20; // [rsp+C8h] [rbp+77h] BYREF
  va_list va3; // [rsp+C8h] [rbp+77h]
  va_list va4; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v20 = va_arg(va4, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 4LL;
  va_copy(v8, va2);
  v11 = 8LL;
  va_copy(v10, va3);
  va_copy(v12, va4);
  v13 = 4LL;
  return McGenEventWriteUM(a1, &EVT_GLITCH_CP_SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP, 6LL, (__int64)v3);
}
