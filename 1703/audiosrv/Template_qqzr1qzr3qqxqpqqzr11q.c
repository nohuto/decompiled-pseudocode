/*
 * XREFs of Template_qqzr1qzr3qqxqpqqzr11q @ 0x1800D2B4C
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180028080 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqzr1qzr3qqxqpqqzr11q(
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
        __int64 a15,
        char a16)
{
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v18[5]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+5Ch] [rbp-A4h]
  int *v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  char *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]
  char *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+150h] [rbp+50h] BYREF
  int v46; // [rsp+158h] [rbp+58h] BYREF

  v46 = a4;
  v45 = a3;
  v18[0] = &v45;
  v20 = 0;
  v18[2] = &v46;
  v18[4] = a5;
  v25 = 0;
  v19 = 2 * a4;
  v42 = 0;
  v21 = &a6;
  v23 = a7;
  v17 = 2;
  v24 = 2 * a6;
  v26 = &a8;
  v28 = &a9;
  v30 = &a10;
  v32 = &a11;
  v34 = &a12;
  v36 = &v17;
  v38 = &a14;
  v40 = a15;
  v18[1] = 4LL;
  v41 = 2 * a14;
  v43 = &a16;
  v18[3] = 4LL;
  v22 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 8LL;
  v33 = 4LL;
  v35 = 8LL;
  v37 = 4LL;
  v39 = 4LL;
  v44 = 4LL;
  return EtwEventWrite(Microsoft_Windows_PDCHandle, &PDCV2_ACTIVATION_DEACTIVATE, 14LL, v18);
}
