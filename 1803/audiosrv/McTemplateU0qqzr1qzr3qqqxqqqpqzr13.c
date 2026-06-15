/*
 * XREFs of McTemplateU0qqzr1qzr3qqqxqqqpqzr13 @ 0x180005CD0
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID @ 0x1800652E8 (Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180017BB0 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qqzr1qzr3qqqxqqqpqzr13(
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
  _BYTE v18[16]; // [rsp+20h] [rbp-E0h] BYREF
  int *v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  int *v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+5Ch] [rbp-A4h]
  int *v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  char *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
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
  __int64 v49; // [rsp+110h] [rbp+10h]
  int v50; // [rsp+118h] [rbp+18h]
  int v51; // [rsp+11Ch] [rbp+1Ch]
  int v52; // [rsp+150h] [rbp+50h] BYREF
  int v53; // [rsp+158h] [rbp+58h] BYREF

  v53 = a4;
  v52 = a3;
  v20 = 4LL;
  v25 = 0;
  v19 = &v52;
  v30 = 0;
  v21 = &v53;
  v23 = a5;
  v24 = 2 * a4;
  v51 = 0;
  v26 = &a6;
  v28 = a7;
  v22 = 4LL;
  v29 = 2 * a6;
  v31 = &a8;
  v33 = &a9;
  v35 = &a10;
  v37 = &a11;
  v39 = &a12;
  v41 = &a13;
  v43 = &a14;
  v45 = &a15;
  v47 = &a16;
  v49 = a17;
  v27 = 4LL;
  v50 = 2 * a16;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 8LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 8LL;
  v48 = 4LL;
  return McGenEventWriteUM(&PDC_EVENT_PROVIDER_Context, "t", 16LL, v18);
}
