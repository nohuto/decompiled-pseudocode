/*
 * XREFs of Template_qqzr1qzr3qqqqpqqzr11 @ 0x1800D2534
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1800279B0 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x1800D1F3C (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqzr1qzr3qqqqpqqzr11(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13,
        int a14,
        __int64 a15)
{
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[5]; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+5Ch] [rbp-A4h]
  int *v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  char *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  char *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  char *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  int v42; // [rsp+140h] [rbp+40h] BYREF
  int v43; // [rsp+148h] [rbp+48h] BYREF

  v43 = a4;
  v42 = a3;
  v17[0] = &v42;
  v19 = 0;
  v17[2] = &v43;
  v17[4] = a5;
  v24 = 0;
  v18 = 2 * a4;
  v41 = 0;
  v20 = &a6;
  v22 = a7;
  v16 = 2;
  v23 = 2 * a6;
  v25 = &a8;
  v27 = &a9;
  v29 = &a10;
  v31 = &a11;
  v33 = &a12;
  v35 = &v16;
  v37 = &a14;
  v39 = a15;
  v17[1] = 4LL;
  v40 = 2 * a14;
  v17[3] = 4LL;
  v21 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 8LL;
  v36 = 4LL;
  v38 = 4LL;
  return EtwEventWrite(Microsoft_Windows_PDCHandle, "o", 13LL, v17);
}
