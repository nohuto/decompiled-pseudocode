/*
 * XREFs of ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180030E80
 * Callers:
 *     ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x1800310B0 (-PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x1800179B4 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall LogQueryApplicationProperties(
        int a1,
        const unsigned __int16 *a2,
        const SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10)
{
  int v12; // ebx
  const WCHAR *v13; // r9
  int v14; // r10d
  __int64 v15; // r11
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp-60h] BYREF
  int *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  unsigned int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  __int64 *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  int *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  __int64 *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  int v49; // [rsp+180h] [rbp+80h] BYREF

  v49 = a1;
  if ( a1 < 0 )
  {
    v22 = 0LL;
    v12 = 0;
    v23 = 0LL;
    v24 = 0LL;
  }
  else
  {
    if ( a7 )
      v12 = *a7;
    else
      v12 = -1;
    if ( a8 )
      v22 = *a8;
    else
      v22 = -1LL;
    if ( a9 )
      v23 = *a9;
    else
      v23 = -1LL;
    if ( a10 )
      v24 = *a10;
    else
      v24 = -1LL;
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v28 = 4LL;
      v27 = &v49;
      TlgCreateWsz(&pDesc, v13);
      TlgCreateSid(&v30, a3);
      v18 = a4;
      v31 = &v18;
      v19 = a5;
      v33 = &v19;
      v35 = &a6;
      v37 = &v20;
      v39 = &v22;
      v41 = &v23;
      v43 = &v24;
      v45 = &v21;
      v47 = &v25;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 8LL;
      v20 = v12;
      v38 = 4LL;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 8LL;
      v21 = v14;
      v46 = 4LL;
      v25 = v15;
      v48 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800558F9, v16, v17, 0xEu, &pData);
    }
  }
}
