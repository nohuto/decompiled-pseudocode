/*
 * XREFs of McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x18010C6C8
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x18010CC58 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180017BB0 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qqzr1qzr3qqqxqpqqqzr13q(
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
        int a15,
        int a16,
        __int64 a17,
        char a18)
{
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  int *v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  int *v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  int *v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  int v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  char *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  char *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  char *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  char *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  char *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  char *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  int *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  char *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  int v56; // [rsp+170h] [rbp+70h] BYREF
  int v57; // [rsp+178h] [rbp+78h] BYREF

  v57 = a4;
  v56 = a3;
  v19 = 2;
  v27 = 0;
  v21 = &v56;
  v32 = 0;
  v23 = &v57;
  v25 = a5;
  v26 = 2 * a4;
  v53 = 0;
  v28 = &a6;
  v30 = a7;
  v22 = 4LL;
  v31 = 2 * a6;
  v33 = &a8;
  v35 = &a9;
  v37 = &a10;
  v39 = &a11;
  v41 = &a12;
  v43 = &a13;
  v45 = &a14;
  v47 = &v19;
  v49 = &a16;
  v51 = a17;
  v24 = 4LL;
  v52 = 2 * a16;
  v54 = &a18;
  v29 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 8LL;
  v42 = 4LL;
  v44 = 8LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v55 = 4LL;
  return McGenEventWriteUM(PDC_EVENT_PROVIDER_Context, (__int128 *)"s", 17LL, (__int64)v20);
}
