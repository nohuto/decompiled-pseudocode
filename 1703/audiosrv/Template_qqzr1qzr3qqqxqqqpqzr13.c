/*
 * XREFs of Template_qqzr1qzr3qqqxqqqpqzr13 @ 0x1800D2830
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID @ 0x180028360 (Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqzr1qzr3qqqxqqqpqzr13(
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
        char a13,
        char a14,
        char a15,
        int a16,
        __int64 a17)
{
  _QWORD v18[5]; // [rsp+20h] [rbp-E0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+4Ch] [rbp-B4h]
  int *v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+6Ch] [rbp-94h]
  char *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  char *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  char *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  char *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  char *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  __int64 v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]
  int v47; // [rsp+150h] [rbp+50h] BYREF
  int v48; // [rsp+158h] [rbp+58h] BYREF

  v48 = a4;
  v47 = a3;
  v18[0] = &v47;
  v18[1] = 4LL;
  v20 = 0;
  v18[2] = &v48;
  v18[4] = a5;
  v19 = 2 * a4;
  v25 = 0;
  v21 = &a6;
  v23 = a7;
  v46 = 0;
  v24 = 2 * a6;
  v18[3] = 4LL;
  v26 = &a8;
  v28 = &a9;
  v30 = &a10;
  v32 = &a11;
  v34 = &a12;
  v36 = &a13;
  v38 = &a14;
  v40 = &a15;
  v42 = &a16;
  v44 = a17;
  v22 = 4LL;
  v45 = 2 * a16;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 8LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 8LL;
  v43 = 4LL;
  return EtwEventWrite(Microsoft_Windows_PDCHandle, &PDCV2_ACTIVATION_SET_BROKERED_PID, 15LL, v18);
}
