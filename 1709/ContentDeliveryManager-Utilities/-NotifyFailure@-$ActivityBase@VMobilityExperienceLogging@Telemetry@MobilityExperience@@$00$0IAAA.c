/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18004A010
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001FC8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x1800458E8 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v2; // eax
  const struct _TlgProvider_t *v5; // r10
  const unsigned __int16 *v6; // r11
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rax
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // r8
  const WCHAR *v12; // rdx
  const WCHAR *v13; // rdi
  const WCHAR *v14; // r8
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // r8
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // r8
  const WCHAR *v19; // rdx
  const WCHAR *v20; // r8
  const unsigned __int16 *v21; // rdx
  const WCHAR *v22; // rdx
  const struct _TlgProvider_t *v23; // r10
  const unsigned __int16 *v24; // r11
  const unsigned __int16 *v25; // rdx
  __int64 v26; // rax
  const unsigned __int16 *v27; // r8
  const unsigned __int16 *v28; // rdx
  const unsigned __int16 *v29; // r8
  const WCHAR *v30; // rdx
  const WCHAR *v31; // rdi
  const WCHAR *v32; // r8
  const unsigned __int16 *v33; // rdx
  const unsigned __int16 *v34; // r8
  const unsigned __int16 *v35; // rdx
  const unsigned __int16 *v36; // r8
  const WCHAR *v37; // rdx
  const WCHAR *v38; // r8
  const unsigned __int16 *v39; // rdx
  const unsigned __int16 *v40; // r8
  const WCHAR *v41; // rdx
  const unsigned __int16 *v42; // rdx
  _DWORD *v43; // rcx
  int v44; // eax
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  int v52; // [rsp+48h] [rbp-B8h] BYREF
  int v53; // [rsp+4Ch] [rbp-B4h] BYREF
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  int v55; // [rsp+54h] [rbp-ACh] BYREF
  int v56; // [rsp+58h] [rbp-A8h] BYREF
  int v57; // [rsp+5Ch] [rbp-A4h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v59; // [rsp+70h] [rbp-90h] BYREF
  int *v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+ACh] [rbp-54h]
  int *v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v67; // [rsp+C0h] [rbp-40h]
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  int *v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  const WCHAR *v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+ECh] [rbp-14h]
  int *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+108h] [rbp+8h]
  int v79; // [rsp+10Ch] [rbp+Ch]
  int *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v82; // [rsp+120h] [rbp+20h]
  int v83; // [rsp+128h] [rbp+28h]
  int v84; // [rsp+12Ch] [rbp+2Ch]
  const WCHAR *v85; // [rsp+130h] [rbp+30h]
  int v86; // [rsp+138h] [rbp+38h]
  int v87; // [rsp+13Ch] [rbp+3Ch]
  int *v88; // [rsp+140h] [rbp+40h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  const unsigned __int16 *v90; // [rsp+150h] [rbp+50h]
  int v91; // [rsp+158h] [rbp+58h]
  int v92; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v93; // [rsp+160h] [rbp+60h]
  int v94; // [rsp+168h] [rbp+68h]
  int v95; // [rsp+16Ch] [rbp+6Ch]
  int *v96; // [rsp+170h] [rbp+70h]
  __int64 v97; // [rsp+178h] [rbp+78h]
  int *v98; // [rsp+180h] [rbp+80h]
  __int64 v99; // [rsp+188h] [rbp+88h]
  const unsigned __int16 *v100; // [rsp+190h] [rbp+90h]
  int v101; // [rsp+198h] [rbp+98h]
  int v102; // [rsp+19Ch] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v104; // [rsp+1C0h] [rbp+C0h]
  __int64 v105; // [rsp+1C8h] [rbp+C8h]
  const unsigned __int16 *v106; // [rsp+1D0h] [rbp+D0h]
  int v107; // [rsp+1D8h] [rbp+D8h]
  int v108; // [rsp+1DCh] [rbp+DCh]
  int *v109; // [rsp+1E0h] [rbp+E0h]
  __int64 v110; // [rsp+1E8h] [rbp+E8h]
  const unsigned __int16 *v111; // [rsp+1F0h] [rbp+F0h]
  int v112; // [rsp+1F8h] [rbp+F8h]
  int v113; // [rsp+1FCh] [rbp+FCh]
  int *v114; // [rsp+200h] [rbp+100h]
  __int64 v115; // [rsp+208h] [rbp+108h]
  const WCHAR *v116; // [rsp+210h] [rbp+110h]
  int v117; // [rsp+218h] [rbp+118h]
  int v118; // [rsp+21Ch] [rbp+11Ch]
  int *v119; // [rsp+220h] [rbp+120h]
  __int64 v120; // [rsp+228h] [rbp+128h]
  const unsigned __int16 *v121; // [rsp+230h] [rbp+130h]
  int v122; // [rsp+238h] [rbp+138h]
  int v123; // [rsp+23Ch] [rbp+13Ch]
  int *v124; // [rsp+240h] [rbp+140h]
  __int64 v125; // [rsp+248h] [rbp+148h]
  const unsigned __int16 *v126; // [rsp+250h] [rbp+150h]
  int v127; // [rsp+258h] [rbp+158h]
  int v128; // [rsp+25Ch] [rbp+15Ch]
  const WCHAR *v129; // [rsp+260h] [rbp+160h]
  int v130; // [rsp+268h] [rbp+168h]
  int v131; // [rsp+26Ch] [rbp+16Ch]
  int *v132; // [rsp+270h] [rbp+170h]
  __int64 v133; // [rsp+278h] [rbp+178h]
  const unsigned __int16 *v134; // [rsp+280h] [rbp+180h]
  int v135; // [rsp+288h] [rbp+188h]
  int v136; // [rsp+28Ch] [rbp+18Ch]
  const WCHAR *v137; // [rsp+290h] [rbp+190h]
  int v138; // [rsp+298h] [rbp+198h]
  int v139; // [rsp+29Ch] [rbp+19Ch]

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2[2];
  if ( v2 == `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen )
  {
    v23 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    if ( *(_DWORD *)v23 > 5u
      && (*((_QWORD *)v23 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v23 + 3) & 0x800000000000LL) == *((_QWORD *)v23 + 3) )
    {
      v24 = &word_1800E10E4;
      v25 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v51 = a2[1];
      v60 = &v51;
      LODWORD(v26) = 0;
      v61 = 4LL;
      v27 = &word_1800E10E4;
      if ( v25 )
      {
        v27 = v25;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v25 + v26) );
      }
      v28 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v63 = v26 + 1;
      v65 = a2 + 14;
      LODWORD(v26) = 0;
      v62 = v27;
      v29 = &word_1800E10E4;
      v64 = 0;
      v66 = 4LL;
      if ( v28 )
      {
        v29 = v28;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v28 + v26) );
      }
      v30 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v31 = &Src;
      v67 = v29;
      v68 = v26 + 1;
      v32 = &Src;
      v52 = *a2;
      v70 = &v52;
      LODWORD(v26) = 0;
      v69 = 0;
      v71 = 4LL;
      if ( v30 )
      {
        v32 = v30;
        v26 = -1LL;
        do
          ++v26;
        while ( v30[v26] );
      }
      v33 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v73 = 2 * v26 + 2;
      v53 = a2[6];
      v75 = &v53;
      LODWORD(v26) = 0;
      v72 = v32;
      v34 = &word_1800E10E4;
      v74 = 0;
      v76 = 4LL;
      if ( v33 )
      {
        v34 = v33;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v33 + v26) );
      }
      v35 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v78 = v26 + 1;
      v54 = a2[18];
      v80 = &v54;
      LODWORD(v26) = 0;
      v77 = v34;
      v36 = &word_1800E10E4;
      v79 = 0;
      v81 = 4LL;
      if ( v35 )
      {
        v36 = v35;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v35 + v26) );
      }
      v37 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v83 = v26 + 1;
      LODWORD(v26) = 0;
      v82 = v36;
      v38 = &Src;
      v84 = 0;
      if ( v37 )
      {
        v38 = v37;
        v26 = -1LL;
        do
          ++v26;
        while ( v37[v26] );
      }
      v39 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v86 = 2 * v26 + 2;
      v55 = a2[24];
      v88 = &v55;
      LODWORD(v26) = 0;
      v85 = v38;
      v40 = &word_1800E10E4;
      v87 = 0;
      v89 = 4LL;
      if ( v39 )
      {
        v40 = v39;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v39 + v26) );
      }
      v41 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v91 = v26 + 1;
      LODWORD(v26) = 0;
      v90 = v40;
      v92 = 0;
      if ( v41 )
      {
        v31 = v41;
        v26 = -1LL;
        do
          ++v26;
        while ( v41[v26] );
      }
      v42 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
      v94 = 2 * v26 + 2;
      v56 = a2[2];
      v96 = &v56;
      v57 = a2[15];
      v98 = &v57;
      LODWORD(v26) = 0;
      v93 = v31;
      v95 = 0;
      v97 = 4LL;
      v99 = 4LL;
      if ( v42 )
      {
        v24 = v42;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v42 + v26) );
      }
      v100 = v24;
      v101 = v26 + 1;
      v102 = 0;
      TlgWrite(v23, &unk_18013C4B6, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &v59);
    }
  }
  else
  {
    v5 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    if ( *(_DWORD *)v5 > 5u
      && (*((_QWORD *)v5 + 2) & 0xA00000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0xA00000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = &word_1800E10E4;
      v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v46 = a2[1];
      v104 = &v46;
      LODWORD(v8) = 0;
      v105 = 4LL;
      v9 = &word_1800E10E4;
      if ( v7 )
      {
        v9 = v7;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v7 + v8) );
      }
      v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v107 = v8 + 1;
      v109 = a2 + 14;
      LODWORD(v8) = 0;
      v106 = v9;
      v11 = &word_1800E10E4;
      v108 = 0;
      v110 = 4LL;
      if ( v10 )
      {
        v11 = v10;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v10 + v8) );
      }
      v12 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v13 = &Src;
      v111 = v11;
      v112 = v8 + 1;
      v14 = &Src;
      v47 = *a2;
      v114 = &v47;
      LODWORD(v8) = 0;
      v113 = 0;
      v115 = 4LL;
      if ( v12 )
      {
        v14 = v12;
        v8 = -1LL;
        do
          ++v8;
        while ( v12[v8] );
      }
      v15 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v117 = 2 * v8 + 2;
      v48 = a2[6];
      v119 = &v48;
      LODWORD(v8) = 0;
      v116 = v14;
      v16 = &word_1800E10E4;
      v118 = 0;
      v120 = 4LL;
      if ( v15 )
      {
        v16 = v15;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v15 + v8) );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v122 = v8 + 1;
      v49 = a2[18];
      v124 = &v49;
      LODWORD(v8) = 0;
      v121 = v16;
      v18 = &word_1800E10E4;
      v123 = 0;
      v125 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v17 + v8) );
      }
      v19 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v127 = v8 + 1;
      LODWORD(v8) = 0;
      v126 = v18;
      v20 = &Src;
      v128 = 0;
      if ( v19 )
      {
        v20 = v19;
        v8 = -1LL;
        do
          ++v8;
        while ( v19[v8] );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v130 = 2 * v8 + 2;
      v50 = a2[24];
      v132 = &v50;
      LODWORD(v8) = 0;
      v129 = v20;
      v131 = 0;
      v133 = 4LL;
      if ( v21 )
      {
        v6 = v21;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v21 + v8) );
      }
      v22 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v135 = v8 + 1;
      LODWORD(v8) = 0;
      v134 = v6;
      v136 = 0;
      if ( v22 )
      {
        v13 = v22;
        v8 = -1LL;
        do
          ++v8;
        while ( v22[v8] );
      }
      v137 = v13;
      v138 = 2 * v8 + 2;
      v139 = 0;
      TlgWrite(v5, &unk_18013C6FD, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v43 = *(_DWORD **)(a1 + 48);
  v44 = a2[1];
  if ( v44 != v43[21] && (v44 != v43[19] || (int)v43[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v43 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
