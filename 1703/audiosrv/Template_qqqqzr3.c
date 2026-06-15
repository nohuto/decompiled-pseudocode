/*
 * XREFs of Template_qqqqzr3 @ 0x1800D2484
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180034EBC (Pdcv2ActivationClientRegister.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x1800D2428 (Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqqqzr3(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  int v8; // [rsp+20h] [rbp-41h] BYREF
  _QWORD v9[9]; // [rsp+30h] [rbp-31h] BYREF
  int v10; // [rsp+78h] [rbp+17h]
  int v11; // [rsp+7Ch] [rbp+1Bh]
  int v12; // [rsp+C0h] [rbp+5Fh] BYREF
  int v13; // [rsp+C8h] [rbp+67h] BYREF

  v13 = a4;
  v12 = a3;
  v9[0] = &v12;
  v8 = 2;
  v11 = 0;
  v9[2] = &v13;
  v9[1] = 4LL;
  v9[4] = &v8;
  v9[6] = &a6;
  v9[8] = a7;
  v9[3] = 4LL;
  v10 = 2 * a6;
  v9[5] = 4LL;
  v9[7] = 4LL;
  return EtwEventWrite(Microsoft_Windows_PDCHandle, a2, 5LL, v9);
}
