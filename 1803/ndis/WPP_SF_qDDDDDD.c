/*
 * XREFs of WPP_SF_qDDDDDD @ 0x1C005F388
 * Callers:
 *     ndisGetMiniportInfo @ 0x1C00E970C (ndisGetMiniportInfo.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qDDDDDD(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+B0h] [rbp+18h] BYREF
  int v5; // [rsp+B8h] [rbp+20h] BYREF
  __int64 v6; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  __int64 v8; // [rsp+C8h] [rbp+30h] BYREF
  va_list va1; // [rsp+C8h] [rbp+30h]
  __int64 v10; // [rsp+D0h] [rbp+38h] BYREF
  va_list va2; // [rsp+D0h] [rbp+38h]
  __int64 v12; // [rsp+D8h] [rbp+40h] BYREF
  va_list va3; // [rsp+D8h] [rbp+40h]
  va_list va4; // [rsp+E0h] [rbp+48h] BYREF

  va_start(va4, a4);
  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v10 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v12 = va_arg(va4, _QWORD);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(
    &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids,
    0xA4u,
    &v4,
    8LL,
    &v5,
    4LL,
    va,
    4LL,
    va1,
    4LL,
    va2,
    4LL,
    va3,
    4LL,
    va4,
    4LL,
    0LL);
}
