/*
 * XREFs of ?PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z @ 0x1800B3A28
 * Callers:
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800B4D54 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B3618 (-Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd_(
        ShoulderTapExperienceManagerTelemetry *this,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  const struct _TlgProvider_t *v18; // r10
  const WCHAR *v19; // rcx
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR *v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  int *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  int *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  int *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  int *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  int *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  int *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  int *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  int *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]

  v18 = ShoulderTapExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v18 > 5u
    && (*((_QWORD *)v18 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v18 + 3) & 0x400000000000LL) == *((_QWORD *)v18 + 3) )
  {
    v19 = &word_18021F3A8;
    LODWORD(v20) = 0;
    if ( a2 )
    {
      v19 = a2;
      v20 = -1LL;
      do
        ++v20;
      while ( a2[v20] );
    }
    v35 = v19;
    v36 = 2 * v20 + 2;
    v38 = &v21;
    v40 = &v22;
    v23 = a5;
    v42 = &v23;
    v24 = a6;
    v44 = &v24;
    v25 = a7;
    v46 = &v25;
    v26 = a8;
    v48 = &v26;
    v27 = a9;
    v50 = &v27;
    v28 = a10;
    v52 = &v28;
    v29 = a11;
    v54 = &v29;
    v30 = a12;
    v56 = &v30;
    v31 = a13;
    v58 = &v31;
    v32 = a14;
    v60 = &v32;
    v33 = a15;
    v62 = &v33;
    v37 = 0;
    v21 = a3;
    v39 = 4LL;
    v22 = a4;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 4LL;
    v63 = 4LL;
    TlgWrite(v18, &unk_18025B5D5, 0LL, 0LL, 0x10u, &pData);
  }
}
