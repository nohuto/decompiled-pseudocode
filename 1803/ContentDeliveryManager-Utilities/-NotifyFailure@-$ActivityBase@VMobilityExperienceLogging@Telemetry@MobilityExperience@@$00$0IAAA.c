/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18004DB20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180002158 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x1800495E8 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v3; // edx
  bool v4; // zf
  BOOL v6; // ebx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rsi
  const unsigned __int16 *v9; // r10
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rax
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  const WCHAR *v15; // rdx
  const WCHAR *v16; // r11
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r8
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // r8
  const WCHAR *v22; // rdx
  const WCHAR *v23; // r8
  const unsigned __int16 *v24; // rdx
  const WCHAR *v25; // rdx
  const unsigned __int16 *v26; // r10
  const unsigned __int16 *v27; // rdx
  __int64 v28; // rax
  const unsigned __int16 *v29; // r8
  const unsigned __int16 *v30; // rdx
  const unsigned __int16 *v31; // r8
  const WCHAR *v32; // rdx
  const WCHAR *v33; // r11
  const WCHAR *v34; // r8
  const unsigned __int16 *v35; // rdx
  const unsigned __int16 *v36; // r8
  const unsigned __int16 *v37; // rdx
  const unsigned __int16 *v38; // r8
  const WCHAR *v39; // rdx
  const WCHAR *v40; // r8
  const unsigned __int16 *v41; // rdx
  const unsigned __int16 *v42; // r8
  const WCHAR *v43; // rdx
  const unsigned __int16 *v44; // rdx
  _DWORD *v45; // rcx
  int v46; // eax
  int v48; // [rsp+30h] [rbp-D0h] BYREF
  int v49; // [rsp+34h] [rbp-CCh] BYREF
  int v50; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+3Ch] [rbp-C4h] BYREF
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  int v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+54h] [rbp-ACh] BYREF
  int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v61; // [rsp+70h] [rbp-90h] BYREF
  int *v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+ACh] [rbp-54h]
  int *v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v69; // [rsp+C0h] [rbp-40h]
  int v70; // [rsp+C8h] [rbp-38h]
  int v71; // [rsp+CCh] [rbp-34h]
  int *v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  const WCHAR *v74; // [rsp+E0h] [rbp-20h]
  int v75; // [rsp+E8h] [rbp-18h]
  int v76; // [rsp+ECh] [rbp-14h]
  int *v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v79; // [rsp+100h] [rbp+0h]
  int v80; // [rsp+108h] [rbp+8h]
  int v81; // [rsp+10Ch] [rbp+Ch]
  int *v82; // [rsp+110h] [rbp+10h]
  __int64 v83; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v84; // [rsp+120h] [rbp+20h]
  int v85; // [rsp+128h] [rbp+28h]
  int v86; // [rsp+12Ch] [rbp+2Ch]
  const WCHAR *v87; // [rsp+130h] [rbp+30h]
  int v88; // [rsp+138h] [rbp+38h]
  int v89; // [rsp+13Ch] [rbp+3Ch]
  int *v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  const unsigned __int16 *v92; // [rsp+150h] [rbp+50h]
  int v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v95; // [rsp+160h] [rbp+60h]
  int v96; // [rsp+168h] [rbp+68h]
  int v97; // [rsp+16Ch] [rbp+6Ch]
  int *v98; // [rsp+170h] [rbp+70h]
  __int64 v99; // [rsp+178h] [rbp+78h]
  int *v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+188h] [rbp+88h]
  const unsigned __int16 *v102; // [rsp+190h] [rbp+90h]
  int v103; // [rsp+198h] [rbp+98h]
  int v104; // [rsp+19Ch] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v106; // [rsp+1C0h] [rbp+C0h]
  __int64 v107; // [rsp+1C8h] [rbp+C8h]
  const unsigned __int16 *v108; // [rsp+1D0h] [rbp+D0h]
  int v109; // [rsp+1D8h] [rbp+D8h]
  int v110; // [rsp+1DCh] [rbp+DCh]
  int *v111; // [rsp+1E0h] [rbp+E0h]
  __int64 v112; // [rsp+1E8h] [rbp+E8h]
  const unsigned __int16 *v113; // [rsp+1F0h] [rbp+F0h]
  int v114; // [rsp+1F8h] [rbp+F8h]
  int v115; // [rsp+1FCh] [rbp+FCh]
  int *v116; // [rsp+200h] [rbp+100h]
  __int64 v117; // [rsp+208h] [rbp+108h]
  const WCHAR *v118; // [rsp+210h] [rbp+110h]
  int v119; // [rsp+218h] [rbp+118h]
  int v120; // [rsp+21Ch] [rbp+11Ch]
  int *v121; // [rsp+220h] [rbp+120h]
  __int64 v122; // [rsp+228h] [rbp+128h]
  const unsigned __int16 *v123; // [rsp+230h] [rbp+130h]
  int v124; // [rsp+238h] [rbp+138h]
  int v125; // [rsp+23Ch] [rbp+13Ch]
  int *v126; // [rsp+240h] [rbp+140h]
  __int64 v127; // [rsp+248h] [rbp+148h]
  const unsigned __int16 *v128; // [rsp+250h] [rbp+150h]
  int v129; // [rsp+258h] [rbp+158h]
  int v130; // [rsp+25Ch] [rbp+15Ch]
  const WCHAR *v131; // [rsp+260h] [rbp+160h]
  int v132; // [rsp+268h] [rbp+168h]
  int v133; // [rsp+26Ch] [rbp+16Ch]
  int *v134; // [rsp+270h] [rbp+170h]
  __int64 v135; // [rsp+278h] [rbp+178h]
  const unsigned __int16 *v136; // [rsp+280h] [rbp+180h]
  int v137; // [rsp+288h] [rbp+188h]
  int v138; // [rsp+28Ch] [rbp+18Ch]
  const WCHAR *v139; // [rsp+290h] [rbp+190h]
  int v140; // [rsp+298h] [rbp+198h]
  int v141; // [rsp+29Ch] [rbp+19Ch]

  v3 = a2[2];
  v4 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == v3;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = v3;
  v6 = !v4;
  v7 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v8 = v7;
  if ( v6 )
  {
    if ( *(_DWORD *)v7 > 5u
      && (*((_QWORD *)v7 + 2) & 0xA00000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0xA00000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v9 = &word_1800F144C;
      v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v48 = a2[1];
      v106 = &v48;
      LODWORD(v11) = 0;
      v107 = 4LL;
      v12 = &word_1800F144C;
      if ( v10 )
      {
        v12 = v10;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v10 + v11) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v109 = v11 + 1;
      v111 = a2 + 14;
      LODWORD(v11) = 0;
      v108 = v12;
      v14 = &word_1800F144C;
      v110 = 0;
      v112 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v13 + v11) );
      }
      v15 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v16 = &Src;
      v113 = v14;
      v114 = v11 + 1;
      v17 = &Src;
      v49 = *a2;
      v116 = &v49;
      LODWORD(v11) = 0;
      v115 = 0;
      v117 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v11 = -1LL;
        do
          ++v11;
        while ( v15[v11] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v119 = 2 * v11 + 2;
      v50 = a2[6];
      v121 = &v50;
      LODWORD(v11) = 0;
      v118 = v17;
      v19 = &word_1800F144C;
      v120 = 0;
      v122 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v18 + v11) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v124 = v11 + 1;
      v51 = a2[18];
      v126 = &v51;
      LODWORD(v11) = 0;
      v123 = v19;
      v21 = &word_1800F144C;
      v125 = 0;
      v127 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v20 + v11) );
      }
      v22 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v129 = v11 + 1;
      LODWORD(v11) = 0;
      v128 = v21;
      v23 = &Src;
      v130 = 0;
      if ( v22 )
      {
        v23 = v22;
        v11 = -1LL;
        do
          ++v11;
        while ( v22[v11] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v132 = 2 * v11 + 2;
      v52 = a2[24];
      v134 = &v52;
      LODWORD(v11) = 0;
      v131 = v23;
      v133 = 0;
      v135 = 4LL;
      if ( v24 )
      {
        v9 = v24;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v24 + v11) );
      }
      v25 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v137 = v11 + 1;
      LODWORD(v11) = 0;
      v136 = v9;
      v138 = 0;
      if ( v25 )
      {
        v16 = v25;
        v11 = -1LL;
        do
          ++v11;
        while ( v25[v11] );
      }
      v139 = v16;
      v140 = 2 * v11 + 2;
      v141 = 0;
      TlgWrite(v8, &unk_180156255, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else if ( *(_DWORD *)v7 > 5u
         && (*((_QWORD *)v7 + 2) & 0x800000000000LL) != 0
         && (*((_QWORD *)v7 + 3) & 0x800000000000LL) == *((_QWORD *)v7 + 3) )
  {
    v26 = &word_1800F144C;
    v27 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v53 = a2[1];
    v62 = &v53;
    LODWORD(v28) = 0;
    v63 = 4LL;
    v29 = &word_1800F144C;
    if ( v27 )
    {
      v29 = v27;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v27 + v28) );
    }
    v30 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v65 = v28 + 1;
    v67 = a2 + 14;
    LODWORD(v28) = 0;
    v64 = v29;
    v31 = &word_1800F144C;
    v66 = 0;
    v68 = 4LL;
    if ( v30 )
    {
      v31 = v30;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v30 + v28) );
    }
    v32 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v33 = &Src;
    v69 = v31;
    v70 = v28 + 1;
    v34 = &Src;
    v54 = *a2;
    v72 = &v54;
    LODWORD(v28) = 0;
    v71 = 0;
    v73 = 4LL;
    if ( v32 )
    {
      v34 = v32;
      v28 = -1LL;
      do
        ++v28;
      while ( v32[v28] );
    }
    v35 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v75 = 2 * v28 + 2;
    v55 = a2[6];
    v77 = &v55;
    LODWORD(v28) = 0;
    v74 = v34;
    v36 = &word_1800F144C;
    v76 = 0;
    v78 = 4LL;
    if ( v35 )
    {
      v36 = v35;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v35 + v28) );
    }
    v37 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v80 = v28 + 1;
    v56 = a2[18];
    v82 = &v56;
    LODWORD(v28) = 0;
    v79 = v36;
    v38 = &word_1800F144C;
    v81 = 0;
    v83 = 4LL;
    if ( v37 )
    {
      v38 = v37;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v37 + v28) );
    }
    v39 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v85 = v28 + 1;
    LODWORD(v28) = 0;
    v84 = v38;
    v40 = &Src;
    v86 = 0;
    if ( v39 )
    {
      v40 = v39;
      v28 = -1LL;
      do
        ++v28;
      while ( v39[v28] );
    }
    v41 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v88 = 2 * v28 + 2;
    v57 = a2[24];
    v90 = &v57;
    LODWORD(v28) = 0;
    v87 = v40;
    v42 = &word_1800F144C;
    v89 = 0;
    v91 = 4LL;
    if ( v41 )
    {
      v42 = v41;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v41 + v28) );
    }
    v43 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v93 = v28 + 1;
    LODWORD(v28) = 0;
    v92 = v42;
    v94 = 0;
    if ( v43 )
    {
      v33 = v43;
      v28 = -1LL;
      do
        ++v28;
      while ( v43[v28] );
    }
    v44 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v96 = 2 * v28 + 2;
    v58 = a2[2];
    v98 = &v58;
    v59 = a2[15];
    v100 = &v59;
    LODWORD(v28) = 0;
    v95 = v33;
    v97 = 0;
    v99 = 4LL;
    v101 = 4LL;
    if ( v44 )
    {
      v26 = v44;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v44 + v28) );
    }
    v102 = v26;
    v103 = v28 + 1;
    v104 = 0;
    TlgWrite(v8, &unk_1801563AF, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &v61);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v45 = *(_DWORD **)(a1 + 48);
  v46 = a2[1];
  if ( v46 != v45[21] && (v46 != v45[19] || (int)v45[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v45 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
