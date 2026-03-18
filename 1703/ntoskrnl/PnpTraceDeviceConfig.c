/*
 * XREFs of PnpTraceDeviceConfig @ 0x1405924AC
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x140081B24 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PnpTraceDeviceConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const WCHAR *a4,
        const WCHAR *pwsz,
        const WCHAR *a6,
        const WCHAR *a7,
        const WCHAR *a8,
        const WCHAR *a9,
        char a10,
        unsigned __int16 *a11,
        char a12,
        char a13,
        int a14)
{
  unsigned __int16 *v15; // r9
  const WCHAR *v16; // r10
  int v17; // eax
  LPCWSTR v18; // r11
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+31h] [rbp-CFh] BYREF
  char v21; // [rsp+32h] [rbp-CEh] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  _DWORD *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  _DWORD v30[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  _DWORD v34[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+120h] [rbp+20h] BYREF
  char *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  char *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  char *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]

  if ( stru_14033C440.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C440, 0x800000000000uLL) )
    {
      v19 = a10;
      v20 = a12;
      v21 = a13;
      v23 = a14;
      v25 = &v22;
      v27 = v30;
      v29 = *((_QWORD *)v15 + 1);
      v30[0] = *v15;
      v31 = v34;
      v33 = *((_QWORD *)a11 + 1);
      v17 = *a11;
      v30[1] = 0;
      v34[1] = 0;
      v22 = 0;
      v34[0] = v17;
      v26 = 4LL;
      v28 = 2LL;
      v32 = 2LL;
      TlgCreateWsz(&pDesc, v16);
      TlgCreateWsz(&v36, v18);
      TlgCreateWsz(&v37, a4);
      TlgCreateWsz(&v38, pwsz);
      TlgCreateWsz(&v39, a6);
      TlgCreateWsz(&v40, a7);
      TlgCreateWsz(&v41, a8);
      TlgCreateWsz(&v42, a9);
      v44 = 1LL;
      v45 = &v20;
      v43 = &v19;
      v47 = &v21;
      v49 = &v23;
      v46 = 1LL;
      v48 = 1LL;
      v50 = 4LL;
      TlgWrite(&stru_14033C440, &unk_1402AC1E2, 0LL, 0LL, 0x13u, &pData);
    }
  }
}
