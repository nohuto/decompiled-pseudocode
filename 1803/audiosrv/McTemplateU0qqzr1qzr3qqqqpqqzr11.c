/*
 * XREFs of McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x180005E50
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x180029C80 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x18010CB68 (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180017BB0 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qqzr1qzr3qqqqpqqzr11(
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
        int a13,
        int a14,
        __int64 a15)
{
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-D0h] BYREF
  int *v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  int *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+6Ch] [rbp-94h]
  int *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+8Ch] [rbp-74h]
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
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  __int64 v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]
  int v47; // [rsp+140h] [rbp+40h] BYREF
  int v48; // [rsp+148h] [rbp+48h] BYREF

  v48 = a4;
  v47 = a3;
  v16 = 2;
  v24 = 0;
  v18 = &v47;
  v29 = 0;
  v20 = &v48;
  v22 = a5;
  v23 = 2 * a4;
  v46 = 0;
  v25 = &a6;
  v27 = a7;
  v19 = 4LL;
  v28 = 2 * a6;
  v30 = &a8;
  v32 = &a9;
  v34 = &a10;
  v36 = &a11;
  v38 = &a12;
  v40 = &v16;
  v42 = &a14;
  v44 = a15;
  v21 = 4LL;
  v45 = 2 * a14;
  v26 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 4LL;
  return McGenEventWriteUM(&PDC_EVENT_PROVIDER_Context, &PDCV2_ACTIVATION_ACTIVATE, 14LL, v17);
}
