/*
 * XREFs of ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C0197060
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C019C138 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C0105170 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPSettingsConfigEvent(
        struct tagTPSETTINGS *a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        LPCWSTR pwsz,
        char a6,
        char a7,
        struct tagRECT *a8,
        struct tagRECT *a9)
{
  const WCHAR *v9; // rbx
  __int64 v10; // r9
  int v11; // r10d
  const WCHAR *v12; // r11
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  LONG bottom; // [rsp+3Ch] [rbp-C4h] BYREF
  LONG right; // [rsp+40h] [rbp-C0h] BYREF
  LONG v20; // [rsp+44h] [rbp-BCh] BYREF
  LONG v21; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  int *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+110h] [rbp+10h] BYREF
  char *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  char *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  LONG *p_bottom; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  LONG *p_right; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  LONG *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  LONG *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int v55; // [rsp+1D0h] [rbp+D0h] BYREF

  v55 = a3;
  v9 = pwsz;
  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x800000000000uLL) )
    {
      v23 = v10;
      v25 = v10 + 8;
      v24 = 4LL;
      v27 = v10 + 16;
      v26 = 4LL;
      v29 = v10 + 20;
      v31 = v10 + 24;
      v15 = *(_DWORD *)(v10 + 12);
      v33 = &v15;
      v16 = *(_DWORD *)(v10 + 28);
      v35 = &v16;
      v37 = &v17;
      v39 = &v55;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v17 = v11;
      v38 = 4LL;
      v40 = 4LL;
      TlgCreateWsz(&pDesc, v12);
      TlgCreateWsz(&v42, v9);
      v45 = &a7;
      v43 = &a6;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      bottom = a8->bottom;
      p_bottom = &bottom;
      right = a8->right;
      p_right = &right;
      v20 = a9->bottom;
      v51 = &v20;
      v21 = a9->right;
      v53 = &v21;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB656, v13, v14, 0x13u, &pData);
    }
  }
}
