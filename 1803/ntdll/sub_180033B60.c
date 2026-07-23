/*
 * XREFs of sub_180033B60 @ 0x180033B60
 * Callers:
 *     sub_180030F54 @ 0x180030F54 (sub_180030F54.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_180033ADC @ 0x180033ADC (sub_180033ADC.c)
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_18007A164 @ 0x18007A164 (sub_18007A164.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D9F0 (LdrLoadAlternateResourceModule.c)
 *     sub_18007DBEC @ 0x18007DBEC (sub_18007DBEC.c)
 * Callees:
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_180033B60(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  __int64 v4; // rsi
  _DWORD *result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  _DWORD *v10; // [rsp+40h] [rbp-58h] BYREF
  int v11; // [rsp+48h] [rbp-50h] BYREF
  ULONG *v12; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-40h] BYREF

  v4 = -1LL;
  v10 = 0LL;
  if ( a4 )
  {
    result = sub_1800107D4((unsigned __int64)BaseOfImage, 0, 0LL, 8);
    v10 = result;
    if ( result == (_DWORD *)-1LL )
      return 0LL;
    if ( result )
      return result;
  }
  v13[1] = 1LL;
  v13[2] = 0LL;
  v13[0] = L"MUI";
  v8 = sub_180032DB4(BaseOfImage, (__int64)v13, 3u, 0x30u, (__int64)&v12);
  if ( v8 < 0 )
    goto LABEL_14;
  v8 = sub_180010CB4((unsigned __int64)BaseOfImage, v12, (unsigned __int64 *)&v10, &v11);
  if ( v8 < 0 )
    goto LABEL_14;
  v9 = v10;
  if ( *v10 != -20054323 )
  {
    v8 = -1073741701;
LABEL_14:
    v9 = 0LL;
  }
  if ( a3 )
  {
    if ( v9 )
      v4 = (__int64)v9;
    sub_18002B698((__int64)BaseOfImage, 0LL, 0LL, v4, 0, 2, v8, 0LL);
  }
  return v9;
}
