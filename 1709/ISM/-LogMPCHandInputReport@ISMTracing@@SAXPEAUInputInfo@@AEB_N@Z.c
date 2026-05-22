/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18005EFDC
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800600C0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180028C1C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18005EED8 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // r13
  const unsigned __int16 *Vector3AsString; // rax
  const unsigned __int16 *v6; // r14
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rcx
  const unsigned __int16 *v9; // rax
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rcx
  const unsigned __int16 *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 *v14; // rcx
  __int64 v15; // r13
  const unsigned __int16 *v16; // rax
  const unsigned __int16 *v17; // r14
  const unsigned __int16 *v18; // rdx
  __int64 v19; // rcx
  const unsigned __int16 *v20; // rax
  const unsigned __int16 *v21; // rdx
  __int64 v22; // rcx
  const unsigned __int16 *v23; // rax
  __int64 v24; // rcx
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v30[4]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v31[4]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v32[5]; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  char *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  const bool *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  char *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  int *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  char *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  char *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  const unsigned __int16 *v52; // [rsp+168h] [rbp+60h]
  int v53; // [rsp+170h] [rbp+68h]
  int v54; // [rsp+174h] [rbp+6Ch]
  char *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  const unsigned __int16 *v57; // [rsp+188h] [rbp+80h]
  int v58; // [rsp+190h] [rbp+88h]
  int v59; // [rsp+194h] [rbp+8Ch]
  const unsigned __int16 *v60; // [rsp+198h] [rbp+90h]
  int v61; // [rsp+1A0h] [rbp+98h]
  int v62; // [rsp+1A4h] [rbp+9Ch]
  char *v63; // [rsp+1A8h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+A8h]
  char *v65; // [rsp+1B8h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+B8h]

  v29 = -2LL;
  if ( *((_DWORD *)a1 + 174) == 6 )
  {
    v4 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      v25 = *(_DWORD *)a1;
      v34 = &v25;
      v35 = 4LL;
      v26 = *((_DWORD *)a1 + 1);
      v36 = &v26;
      v37 = 4LL;
      v38 = (char *)a1 + 8;
      v39 = 4LL;
      v40 = a2;
      v41 = 1LL;
      v42 = (char *)a1 + 704;
      v43 = 4LL;
      v27 = *((_DWORD *)a1 + 174);
      v44 = &v27;
      v45 = 4LL;
      v28 = *((_DWORD *)a1 + 175);
      v46 = &v28;
      v47 = 4LL;
      v48 = (char *)a1 + 1320;
      v49 = 4LL;
      v50 = (char *)a1 + 1324;
      v51 = 4LL;
      Vector3AsString = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v32, (float *)a1 + 332);
      if ( *((_QWORD *)Vector3AsString + 3) >= 0x10uLL )
        Vector3AsString = *(const unsigned __int16 **)Vector3AsString;
      v6 = &word_1800DD4CA;
      v7 = &word_1800DD4CA;
      LODWORD(v8) = 0;
      if ( Vector3AsString )
      {
        v7 = Vector3AsString;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)Vector3AsString + v8) );
      }
      v52 = v7;
      v53 = v8 + 1;
      v54 = 0;
      v55 = (char *)a1 + 1340;
      v56 = 4LL;
      v9 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v31, (float *)a1 + 336);
      if ( *((_QWORD *)v9 + 3) >= 0x10uLL )
        v9 = *(const unsigned __int16 **)v9;
      v10 = &word_1800DD4CA;
      LODWORD(v11) = 0;
      if ( v9 )
      {
        v10 = v9;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v9 + v11) );
      }
      v57 = v10;
      v58 = v11 + 1;
      v59 = 0;
      v12 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v30, (float *)a1 + 339);
      if ( *((_QWORD *)v12 + 3) >= 0x10uLL )
        v12 = *(const unsigned __int16 **)v12;
      LODWORD(v13) = 0;
      if ( v12 )
      {
        v6 = v12;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v12 + v13) );
      }
      v60 = v6;
      v61 = v13 + 1;
      v62 = 0;
      v63 = (char *)a1 + 1368;
      v64 = 4LL;
      v65 = (char *)a1 + 1372;
      v66 = 4LL;
      TlgWrite((TraceLoggingHProvider)v4, &unk_1800EED6B, 0LL, 0LL, 0x11u, &pData);
      std::string::~string(v30);
      std::string::~string(v31);
      v14 = v32;
LABEL_40:
      std::string::~string(v14);
    }
  }
  else
  {
    v15 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 1) != 0
      && (*(_QWORD *)(v15 + 24) & 1LL) == *(_QWORD *)(v15 + 24) )
    {
      v28 = *(_DWORD *)a1;
      v34 = &v28;
      v35 = 4LL;
      v27 = *((_DWORD *)a1 + 1);
      v36 = &v27;
      v37 = 4LL;
      v38 = (char *)a1 + 8;
      v39 = 4LL;
      v40 = a2;
      v41 = 1LL;
      v42 = (char *)a1 + 704;
      v43 = 4LL;
      v26 = *((_DWORD *)a1 + 174);
      v44 = &v26;
      v45 = 4LL;
      v25 = *((_DWORD *)a1 + 175);
      v46 = &v25;
      v47 = 4LL;
      v48 = (char *)a1 + 1320;
      v49 = 4LL;
      v50 = (char *)a1 + 1324;
      v51 = 4LL;
      v16 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v30, (float *)a1 + 332);
      if ( *((_QWORD *)v16 + 3) >= 0x10uLL )
        v16 = *(const unsigned __int16 **)v16;
      v17 = &word_1800DD4CA;
      v18 = &word_1800DD4CA;
      LODWORD(v19) = 0;
      if ( v16 )
      {
        v18 = v16;
        v19 = -1LL;
        do
          ++v19;
        while ( *((_BYTE *)v16 + v19) );
      }
      v52 = v18;
      v53 = v19 + 1;
      v54 = 0;
      v55 = (char *)a1 + 1340;
      v56 = 4LL;
      v20 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v31, (float *)a1 + 336);
      if ( *((_QWORD *)v20 + 3) >= 0x10uLL )
        v20 = *(const unsigned __int16 **)v20;
      v21 = &word_1800DD4CA;
      LODWORD(v22) = 0;
      if ( v20 )
      {
        v21 = v20;
        v22 = -1LL;
        do
          ++v22;
        while ( *((_BYTE *)v20 + v22) );
      }
      v57 = v21;
      v58 = v22 + 1;
      v59 = 0;
      v23 = (const unsigned __int16 *)ISMTracing::GetVector3AsString((__int64)v32, (float *)a1 + 339);
      if ( *((_QWORD *)v23 + 3) >= 0x10uLL )
        v23 = *(const unsigned __int16 **)v23;
      LODWORD(v24) = 0;
      if ( v23 )
      {
        v17 = v23;
        v24 = -1LL;
        do
          ++v24;
        while ( *((_BYTE *)v23 + v24) );
      }
      v60 = v17;
      v61 = v24 + 1;
      v62 = 0;
      v63 = (char *)a1 + 1368;
      v64 = 4LL;
      v65 = (char *)a1 + 1372;
      v66 = 4LL;
      TlgWrite((TraceLoggingHProvider)v15, &unk_1800EEAE9, 0LL, 0LL, 0x11u, &pData);
      std::string::~string(v32);
      std::string::~string(v31);
      v14 = v30;
      goto LABEL_40;
    }
  }
}
