/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18004B0E0
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180049C00 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18004AFDC (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1, const bool *a2)
{
  int v4; // ebx
  __int64 v5; // r15
  const unsigned __int16 *Vector3AsString; // rax
  const unsigned __int16 *v7; // r14
  const unsigned __int16 *v8; // rdx
  __int64 v9; // rcx
  const unsigned __int16 *v10; // rax
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rcx
  const unsigned __int16 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 *v18; // rcx
  const unsigned __int16 *v19; // rax
  const unsigned __int16 *v20; // r14
  const unsigned __int16 *v21; // rdx
  __int64 v22; // rcx
  const unsigned __int16 *v23; // rax
  const unsigned __int16 *v24; // rdx
  __int64 v25; // rcx
  const unsigned __int16 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v35[4]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v36[4]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v37[5]; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  int *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  char *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  const bool *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  char *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  int *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  int *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  char *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  char *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  const unsigned __int16 *v57; // [rsp+168h] [rbp+60h]
  int v58; // [rsp+170h] [rbp+68h]
  int v59; // [rsp+174h] [rbp+6Ch]
  char *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  const unsigned __int16 *v62; // [rsp+188h] [rbp+80h]
  int v63; // [rsp+190h] [rbp+88h]
  int v64; // [rsp+194h] [rbp+8Ch]
  const unsigned __int16 *v65; // [rsp+198h] [rbp+90h]
  int v66; // [rsp+1A0h] [rbp+98h]
  int v67; // [rsp+1A4h] [rbp+9Ch]
  char *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  char *v70; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]

  v34 = -2LL;
  v4 = *((_DWORD *)a1 + 130);
  v5 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 == 6 )
  {
    if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
    {
      v30 = *(_DWORD *)a1;
      v39 = &v30;
      v40 = 4LL;
      v31 = *((_DWORD *)a1 + 1);
      v41 = &v31;
      v42 = 4LL;
      v43 = (char *)a1 + 8;
      v44 = 4LL;
      v45 = a2;
      v46 = 1LL;
      v47 = (char *)a1 + 528;
      v48 = 4LL;
      v32 = *((_DWORD *)a1 + 130);
      v49 = &v32;
      v50 = 4LL;
      v33 = *((_DWORD *)a1 + 131);
      v51 = &v33;
      v52 = 4LL;
      v53 = (char *)a1 + 1144;
      v54 = 4LL;
      v55 = (char *)a1 + 1148;
      v56 = 4LL;
      Vector3AsString = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v37, (float *)a1 + 288);
      if ( *((_QWORD *)Vector3AsString + 3) >= 0x10uLL )
        Vector3AsString = *(const unsigned __int16 **)Vector3AsString;
      v7 = &word_1800F8432;
      v8 = &word_1800F8432;
      LODWORD(v9) = 0;
      if ( Vector3AsString )
      {
        v8 = Vector3AsString;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)Vector3AsString + v9) );
      }
      v57 = v8;
      v58 = v9 + 1;
      v59 = 0;
      v60 = (char *)a1 + 1164;
      v61 = 4LL;
      v10 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v36, (float *)a1 + 292);
      if ( *((_QWORD *)v10 + 3) >= 0x10uLL )
        v10 = *(const unsigned __int16 **)v10;
      v11 = &word_1800F8432;
      LODWORD(v12) = 0;
      if ( v10 )
      {
        v11 = v10;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v10 + v12) );
      }
      v62 = v11;
      v63 = v12 + 1;
      v64 = 0;
      v13 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v35, (float *)a1 + 295);
      if ( *((_QWORD *)v13 + 3) >= 0x10uLL )
        v13 = *(const unsigned __int16 **)v13;
      LODWORD(v14) = 0;
      if ( v13 )
      {
        v7 = v13;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v13 + v14) );
      }
      v65 = v7;
      v66 = v14 + 1;
      v67 = 0;
      v68 = (char *)a1 + 1192;
      v69 = 4LL;
      v70 = (char *)a1 + 1196;
      v71 = 4LL;
      TlgWrite((TraceLoggingHProvider)v5, &unk_18010DC2F, 0LL, 0LL, 0x11u, &pData);
      std::string::~string(v35, v15);
      std::string::~string(v36, v16);
      v18 = v37;
LABEL_40:
      std::string::~string(v18, v17);
    }
  }
  else if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v33 = *(_DWORD *)a1;
    v39 = &v33;
    v40 = 4LL;
    v32 = *((_DWORD *)a1 + 1);
    v41 = &v32;
    v42 = 4LL;
    v43 = (char *)a1 + 8;
    v44 = 4LL;
    v45 = a2;
    v46 = 1LL;
    v47 = (char *)a1 + 528;
    v48 = 4LL;
    v31 = *((_DWORD *)a1 + 130);
    v49 = &v31;
    v50 = 4LL;
    v30 = *((_DWORD *)a1 + 131);
    v51 = &v30;
    v52 = 4LL;
    v53 = (char *)a1 + 1144;
    v54 = 4LL;
    v55 = (char *)a1 + 1148;
    v56 = 4LL;
    v19 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v35, (float *)a1 + 288);
    if ( *((_QWORD *)v19 + 3) >= 0x10uLL )
      v19 = *(const unsigned __int16 **)v19;
    v20 = &word_1800F8432;
    v21 = &word_1800F8432;
    LODWORD(v22) = 0;
    if ( v19 )
    {
      v21 = v19;
      v22 = -1LL;
      do
        ++v22;
      while ( *((_BYTE *)v19 + v22) );
    }
    v57 = v21;
    v58 = v22 + 1;
    v59 = 0;
    v60 = (char *)a1 + 1164;
    v61 = 4LL;
    v23 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v36, (float *)a1 + 292);
    if ( *((_QWORD *)v23 + 3) >= 0x10uLL )
      v23 = *(const unsigned __int16 **)v23;
    v24 = &word_1800F8432;
    LODWORD(v25) = 0;
    if ( v23 )
    {
      v24 = v23;
      v25 = -1LL;
      do
        ++v25;
      while ( *((_BYTE *)v23 + v25) );
    }
    v62 = v24;
    v63 = v25 + 1;
    v64 = 0;
    v26 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v37, (float *)a1 + 295);
    if ( *((_QWORD *)v26 + 3) >= 0x10uLL )
      v26 = *(const unsigned __int16 **)v26;
    LODWORD(v27) = 0;
    if ( v26 )
    {
      v20 = v26;
      v27 = -1LL;
      do
        ++v27;
      while ( *((_BYTE *)v26 + v27) );
    }
    v65 = v20;
    v66 = v27 + 1;
    v67 = 0;
    v68 = (char *)a1 + 1192;
    v69 = 4LL;
    v70 = (char *)a1 + 1196;
    v71 = 4LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_18010DD1B, 0LL, 0LL, 0x11u, &pData);
    std::string::~string(v37, v28);
    std::string::~string(v36, v29);
    v18 = v35;
    goto LABEL_40;
  }
}
