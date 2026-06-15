/*
 * XREFs of McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x1800DF648
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x18002BF24 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006487C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0qqzr1qzr3qqxqpqqzr11q(
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
  _BYTE v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  int *v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B8h]
  int *v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+6Ch] [rbp-94h]
  int *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h]
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
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int64 v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  char *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+150h] [rbp+50h] BYREF
  int v51; // [rsp+158h] [rbp+58h] BYREF

  v51 = a4;
  v50 = a3;
  v17 = 2;
  v25 = 0;
  v19 = &v50;
  v30 = 0;
  v21 = &v51;
  v23 = a5;
  v24 = 2 * a4;
  v47 = 0;
  v26 = &a6;
  v28 = a7;
  v20 = 4LL;
  v29 = 2 * a6;
  v31 = &a8;
  v33 = &a9;
  v35 = &a10;
  v37 = &a11;
  v39 = &a12;
  v41 = &v17;
  v43 = &a14;
  v45 = a15;
  v22 = 4LL;
  v46 = 2 * a14;
  v48 = &a16;
  v27 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 8LL;
  v38 = 4LL;
  v40 = 8LL;
  v42 = 4LL;
  v44 = 4LL;
  v49 = 4LL;
  return McGenEventWriteUM(PDC_EVENT_PROVIDER_Context, (__int128 *)"q", 15LL, (__int64)v18);
}
