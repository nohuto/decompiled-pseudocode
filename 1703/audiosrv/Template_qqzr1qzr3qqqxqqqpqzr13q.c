/*
 * XREFs of Template_qqzr1qzr3qqqxqqqpqzr13q @ 0x1800D29B4
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x1800D22D4 (Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqzr1qzr3qqqxqqqpqzr13q(
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
        __int64 a17,
        char a18)
{
  _QWORD v19[5]; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+4Ch] [rbp-B4h]
  int *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+6Ch] [rbp-94h]
  char *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  char *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  char *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  char *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  char *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  char *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int64 v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  char *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+160h] [rbp+60h] BYREF
  int v51; // [rsp+168h] [rbp+68h] BYREF

  v51 = a4;
  v50 = a3;
  v19[0] = &v50;
  v21 = 0;
  v19[2] = &v51;
  v19[4] = a5;
  v26 = 0;
  v20 = 2 * a4;
  v47 = 0;
  v22 = &a6;
  v24 = a7;
  v19[1] = 4LL;
  v25 = 2 * a6;
  v27 = &a8;
  v29 = &a9;
  v31 = &a10;
  v33 = &a11;
  v35 = &a12;
  v37 = &a13;
  v39 = &a14;
  v41 = &a15;
  v43 = &a16;
  v45 = a17;
  v19[3] = 4LL;
  v46 = 2 * a16;
  v48 = &a18;
  v23 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 8LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 8LL;
  v44 = 4LL;
  v49 = 4LL;
  return EtwEventWrite(Microsoft_Windows_PDCHandle, &PDCV2_ACTIVATION_RENEW_ACTIVATION, 16LL, v19);
}
