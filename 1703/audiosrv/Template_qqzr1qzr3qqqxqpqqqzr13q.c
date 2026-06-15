/*
 * XREFs of Template_qqzr1qzr3qqqxqpqqqzr13q @ 0x1800D268C
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x1800D202C (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqzr1qzr3qqqxqpqqqzr13q(
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
        __int64 a15,
        int a16,
        __int64 a17,
        char a18)
{
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v20[5]; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+5Ch] [rbp-A4h]
  int *v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
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
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  char *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+170h] [rbp+70h] BYREF
  int v52; // [rsp+178h] [rbp+78h] BYREF

  v52 = a4;
  v51 = a3;
  v20[0] = &v51;
  v22 = 0;
  v20[2] = &v52;
  v20[4] = a5;
  v27 = 0;
  v21 = 2 * a4;
  v48 = 0;
  v23 = &a6;
  v25 = a7;
  v19 = 2;
  v26 = 2 * a6;
  v28 = &a8;
  v30 = &a9;
  v32 = &a10;
  v34 = &a11;
  v36 = &a12;
  v38 = &a13;
  v40 = &a14;
  v42 = &v19;
  v44 = &a16;
  v46 = a17;
  v20[1] = 4LL;
  v47 = 2 * a16;
  v49 = &a18;
  v20[3] = 4LL;
  v24 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 8LL;
  v37 = 4LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  v50 = 4LL;
  return EtwEventWrite(Microsoft_Windows_PDCHandle, "s", 16LL, v20);
}
