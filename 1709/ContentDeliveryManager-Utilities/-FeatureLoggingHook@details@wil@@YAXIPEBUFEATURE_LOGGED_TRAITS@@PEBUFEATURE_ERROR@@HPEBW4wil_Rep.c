/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18000BB60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000BA80 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        char a8)
{
  int v8; // r15d
  _DWORD *v11; // rcx
  int *v12; // r14
  __int64 v13; // r10
  __int64 v14; // rcx
  const enum wil_ReportingKind *v15; // r14
  __int64 v16; // r10
  __int64 v17; // r10
  const unsigned __int16 *v18; // r8
  const unsigned __int16 *v19; // rdx
  __int64 v20; // rax
  const unsigned __int16 *v21; // r9
  const unsigned __int16 *v22; // r8
  const unsigned __int16 *v23; // r9
  const unsigned __int16 *v24; // r8
  const unsigned __int16 *v25; // r9
  const unsigned __int16 *v26; // r8
  const unsigned __int16 *v27; // r9
  const unsigned __int16 *v28; // r8
  const unsigned __int16 *v29; // r9
  const unsigned __int16 *v30; // r8
  const unsigned __int16 *v31; // r9
  const unsigned __int16 *v32; // r8
  const unsigned __int16 *v33; // r9
  const unsigned __int16 *v34; // r8
  const unsigned __int16 *v35; // r9
  const unsigned __int16 *v36; // r8
  _BYTE v37[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v38; // [rsp+3Ah] [rbp-CEh] BYREF
  int v39; // [rsp+3Ch] [rbp-CCh] BYREF
  int v40; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+44h] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  int *v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  int *v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  int *v47; // [rsp+88h] [rbp-80h]
  __int64 v48; // [rsp+90h] [rbp-78h]
  __int16 *v49; // [rsp+98h] [rbp-70h]
  __int64 v50; // [rsp+A0h] [rbp-68h]
  const struct FEATURE_LOGGED_TRAITS *v51; // [rsp+A8h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-58h]
  int *v53; // [rsp+B8h] [rbp-50h]
  __int64 v54; // [rsp+C0h] [rbp-48h]
  char *v55; // [rsp+C8h] [rbp-40h]
  __int64 v56; // [rsp+D0h] [rbp-38h]
  char *v57; // [rsp+D8h] [rbp-30h]
  __int64 v58; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v59; // [rsp+E8h] [rbp-20h]
  int v60; // [rsp+F0h] [rbp-18h]
  int v61; // [rsp+F4h] [rbp-14h]
  const unsigned __int16 *v62; // [rsp+F8h] [rbp-10h]
  int v63; // [rsp+100h] [rbp-8h]
  int v64; // [rsp+104h] [rbp-4h]
  char *v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v67; // [rsp+118h] [rbp+10h]
  int v68; // [rsp+120h] [rbp+18h]
  int v69; // [rsp+124h] [rbp+1Ch]
  const unsigned __int16 *v70; // [rsp+128h] [rbp+20h]
  int v71; // [rsp+130h] [rbp+28h]
  int v72; // [rsp+134h] [rbp+2Ch]
  const unsigned __int16 *v73; // [rsp+138h] [rbp+30h]
  int v74; // [rsp+140h] [rbp+38h]
  int v75; // [rsp+144h] [rbp+3Ch]
  const unsigned __int16 *v76; // [rsp+148h] [rbp+40h]
  int v77; // [rsp+150h] [rbp+48h]
  int v78; // [rsp+154h] [rbp+4Ch]
  char *v79; // [rsp+158h] [rbp+50h]
  __int64 v80; // [rsp+160h] [rbp+58h]
  const unsigned __int16 *v81; // [rsp+168h] [rbp+60h]
  int v82; // [rsp+170h] [rbp+68h]
  int v83; // [rsp+174h] [rbp+6Ch]
  char *v84; // [rsp+178h] [rbp+70h]
  __int64 v85; // [rsp+180h] [rbp+78h]
  int v86; // [rsp+1C8h] [rbp+C0h] BYREF

  v86 = (int)this;
  v8 = (int)a4;
  v11 = (_DWORD *)*((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
  if ( v11 && *v11 )
  {
    v12 = a5;
    if ( a5 )
    {
      v13 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v13 > 5u
        && (*(_BYTE *)(v13 + 16) & 2) != 0
        && (*(_QWORD *)(v13 + 24) & 2LL) == *(_QWORD *)(v13 + 24) )
      {
        v44 = 4LL;
        v43 = &v86;
        if ( a2 )
          v39 = *a2;
        else
          v39 = -1;
        v46 = 4LL;
        v45 = &v39;
        if ( a2 )
          v40 = a2[1];
        else
          v40 = -1;
        v48 = 4LL;
        v47 = &v40;
        if ( a2 )
          v38 = *((unsigned __int8 *)a2 + 4);
        else
          v38 = -1;
        v50 = 2LL;
        v49 = &v38;
        v52 = 1LL;
        v51 = (const struct FEATURE_LOGGED_TRAITS *)v37;
        v37[0] = v8 != 0;
        v41 = *v12;
        v53 = &v41;
        v55 = &a8;
        v54 = 4LL;
        v56 = 8LL;
        TlgWrite((TraceLoggingHProvider)v13, &unk_18013B272, 0LL, 0LL, 9u, &pData);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v8 )
        {
          v14 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
          if ( *(_DWORD *)v14 > 5u
            && (*(_BYTE *)(v14 + 16) & 0xA) != 0
            && (*(_QWORD *)(v14 + 24) & 0xALL) == *(_QWORD *)(v14 + 24) )
          {
            v44 = 4LL;
            v43 = &v86;
            v41 = *a2;
            v45 = &v41;
            v40 = a2[1];
            v47 = &v40;
            v38 = *((unsigned __int8 *)a2 + 4);
            v49 = &v38;
            v51 = (const struct FEATURE_LOGGED_TRAITS *)v37;
            v39 = *v12;
            v53 = &v39;
            v55 = &a8;
            v46 = 4LL;
            v48 = 4LL;
            v50 = 2LL;
            v37[0] = 1;
            v52 = 1LL;
            v54 = 4LL;
            v56 = 8LL;
            TlgWrite((TraceLoggingHProvider)v14, &unk_18013B1FA, 0LL, 0LL, 9u, &pData);
          }
        }
      }
    }
    else
    {
      v15 = a6;
      if ( a6 )
      {
        v16 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
        if ( *(_DWORD *)v16 > 5u
          && (*(_BYTE *)(v16 + 16) & 4) != 0
          && (*(_QWORD *)(v16 + 24) & 4LL) == *(_QWORD *)(v16 + 24) )
        {
          v44 = 4LL;
          v43 = &v86;
          if ( a2 )
            v40 = *a2;
          else
            v40 = -1;
          v46 = 4LL;
          v45 = &v40;
          if ( a2 )
            v39 = a2[1];
          else
            v39 = -1;
          v48 = 4LL;
          v47 = &v39;
          if ( a2 )
            v38 = *((unsigned __int8 *)a2 + 4);
          else
            v38 = -1;
          v50 = 2LL;
          v49 = &v38;
          v52 = 1LL;
          v51 = (const struct FEATURE_LOGGED_TRAITS *)v37;
          v37[0] = v8 != 0;
          v41 = *(_DWORD *)v15;
          v53 = &v41;
          v55 = (char *)&a7;
          v57 = &a8;
          v54 = 4LL;
          v56 = 1LL;
          v58 = 8LL;
          TlgWrite((TraceLoggingHProvider)v16, &unk_18013B06F, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( a3 )
      {
        v17 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
        if ( *(_DWORD *)v17 > 2u
          && (*(_BYTE *)(v17 + 16) & 1) != 0
          && (*(_QWORD *)(v17 + 24) & 1LL) == *(_QWORD *)(v17 + 24) )
        {
          v44 = 4LL;
          v43 = &v86;
          if ( a2 )
            v40 = *a2;
          else
            v40 = -1;
          v46 = 4LL;
          v45 = &v40;
          if ( a2 )
            v39 = a2[1];
          else
            v39 = -1;
          v48 = 4LL;
          v47 = &v39;
          if ( a2 )
            v38 = *((unsigned __int8 *)a2 + 4);
          else
            v38 = -1;
          v18 = (const unsigned __int16 *)*((_QWORD *)a3 + 1);
          v49 = &v38;
          v19 = &word_1800E10E4;
          v50 = 2LL;
          LODWORD(v20) = 0;
          v51 = a3;
          v21 = &word_1800E10E4;
          v52 = 4LL;
          if ( v18 )
          {
            v21 = v18;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v18 + v20) );
          }
          v22 = (const unsigned __int16 *)*((_QWORD *)a3 + 3);
          v54 = (unsigned int)(v20 + 1);
          v55 = (char *)a3 + 4;
          LODWORD(v20) = 0;
          v53 = (int *)v21;
          v23 = &word_1800E10E4;
          v56 = 2LL;
          if ( v22 )
          {
            v23 = v22;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v22 + v20) );
          }
          v24 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
          v58 = (unsigned int)(v20 + 1);
          LODWORD(v20) = 0;
          v57 = (char *)v23;
          v25 = &word_1800E10E4;
          if ( v24 )
          {
            v25 = v24;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v24 + v20) );
          }
          v26 = (const unsigned __int16 *)*((_QWORD *)a3 + 8);
          v60 = v20 + 1;
          LODWORD(v20) = 0;
          v59 = v25;
          v27 = &word_1800E10E4;
          v61 = 0;
          if ( v26 )
          {
            v27 = v26;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v26 + v20) );
          }
          v28 = (const unsigned __int16 *)*((_QWORD *)a3 + 9);
          v63 = v20 + 1;
          v65 = (char *)a3 + 56;
          LODWORD(v20) = 0;
          v62 = v27;
          v29 = &word_1800E10E4;
          v64 = 0;
          v66 = 2LL;
          if ( v28 )
          {
            v29 = v28;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v28 + v20) );
          }
          v30 = (const unsigned __int16 *)*((_QWORD *)a3 + 12);
          v68 = v20 + 1;
          LODWORD(v20) = 0;
          v67 = v29;
          v31 = &word_1800E10E4;
          v69 = 0;
          if ( v30 )
          {
            v31 = v30;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v30 + v20) );
          }
          v32 = (const unsigned __int16 *)*((_QWORD *)a3 + 6);
          v71 = v20 + 1;
          LODWORD(v20) = 0;
          v70 = v31;
          v33 = &word_1800E10E4;
          v72 = 0;
          if ( v32 )
          {
            v33 = v32;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v32 + v20) );
          }
          v34 = (const unsigned __int16 *)*((_QWORD *)a3 + 5);
          v74 = v20 + 1;
          LODWORD(v20) = 0;
          v73 = v33;
          v35 = &word_1800E10E4;
          v75 = 0;
          if ( v34 )
          {
            v35 = v34;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v34 + v20) );
          }
          v36 = (const unsigned __int16 *)*((_QWORD *)a3 + 11);
          v77 = v20 + 1;
          v79 = (char *)a3 + 32;
          LODWORD(v20) = 0;
          v76 = v35;
          v78 = 0;
          v80 = 4LL;
          if ( v36 )
          {
            v19 = v36;
            v20 = -1LL;
            do
              ++v20;
            while ( *((_BYTE *)v36 + v20) );
          }
          v81 = v19;
          v82 = v20 + 1;
          v84 = (char *)a3 + 80;
          v83 = 0;
          v85 = 4LL;
          TlgWrite((TraceLoggingHProvider)v17, &unk_18013B2E3, 0LL, 0LL, 0x14u, &pData);
        }
      }
    }
  }
}
