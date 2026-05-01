/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18009B970
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800033C4 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v4; // edx
  bool v5; // zf
  const struct _TlgProvider_t *v6; // r10
  const wchar_t *v7; // r11
  const wchar_t *v8; // rdx
  __int64 v9; // rax
  const wchar_t *v10; // r8
  const wchar_t *v11; // rdx
  const wchar_t *v12; // r8
  const WCHAR *v13; // rdx
  const WCHAR *v14; // rdi
  const WCHAR *v15; // r8
  const wchar_t *v16; // rdx
  const wchar_t *v17; // r8
  const wchar_t *v18; // rdx
  const wchar_t *v19; // r8
  const WCHAR *v20; // rdx
  const WCHAR *v21; // r8
  const wchar_t *v22; // rdx
  const WCHAR *v23; // rdx
  const struct _TlgProvider_t *v24; // r10
  const wchar_t *v25; // r11
  const wchar_t *v26; // rdx
  __int64 v27; // rax
  const wchar_t *v28; // r8
  const wchar_t *v29; // rdx
  const wchar_t *v30; // r8
  const WCHAR *v31; // rdx
  const WCHAR *v32; // rdi
  const WCHAR *v33; // r8
  const wchar_t *v34; // rdx
  const wchar_t *v35; // r8
  const wchar_t *v36; // rdx
  const wchar_t *v37; // r8
  const WCHAR *v38; // rdx
  const WCHAR *v39; // r8
  const wchar_t *v40; // rdx
  const wchar_t *v41; // r8
  const WCHAR *v42; // rdx
  const wchar_t *v43; // rdx
  _DWORD *v44; // rcx
  int v45; // eax
  int v47; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h] BYREF
  int v50; // [rsp+3Ch] [rbp-C4h] BYREF
  int v51; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+44h] [rbp-BCh] BYREF
  int v53; // [rsp+48h] [rbp-B8h] BYREF
  int v54; // [rsp+4Ch] [rbp-B4h] BYREF
  int v55; // [rsp+50h] [rbp-B0h] BYREF
  int v56; // [rsp+54h] [rbp-ACh] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v60; // [rsp+70h] [rbp-90h] BYREF
  int *v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  const wchar_t *v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+A8h] [rbp-58h]
  int v65; // [rsp+ACh] [rbp-54h]
  int *v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  const wchar_t *v68; // [rsp+C0h] [rbp-40h]
  int v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+CCh] [rbp-34h]
  int *v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  const WCHAR *v73; // [rsp+E0h] [rbp-20h]
  int v74; // [rsp+E8h] [rbp-18h]
  int v75; // [rsp+ECh] [rbp-14h]
  int *v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  const wchar_t *v78; // [rsp+100h] [rbp+0h]
  int v79; // [rsp+108h] [rbp+8h]
  int v80; // [rsp+10Ch] [rbp+Ch]
  int *v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  const wchar_t *v83; // [rsp+120h] [rbp+20h]
  int v84; // [rsp+128h] [rbp+28h]
  int v85; // [rsp+12Ch] [rbp+2Ch]
  const WCHAR *v86; // [rsp+130h] [rbp+30h]
  int v87; // [rsp+138h] [rbp+38h]
  int v88; // [rsp+13Ch] [rbp+3Ch]
  int *v89; // [rsp+140h] [rbp+40h]
  __int64 v90; // [rsp+148h] [rbp+48h]
  const wchar_t *v91; // [rsp+150h] [rbp+50h]
  int v92; // [rsp+158h] [rbp+58h]
  int v93; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v94; // [rsp+160h] [rbp+60h]
  int v95; // [rsp+168h] [rbp+68h]
  int v96; // [rsp+16Ch] [rbp+6Ch]
  int *v97; // [rsp+170h] [rbp+70h]
  __int64 v98; // [rsp+178h] [rbp+78h]
  int *v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]
  const wchar_t *v101; // [rsp+190h] [rbp+90h]
  int v102; // [rsp+198h] [rbp+98h]
  int v103; // [rsp+19Ch] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v105; // [rsp+1C0h] [rbp+C0h]
  __int64 v106; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v107; // [rsp+1D0h] [rbp+D0h]
  int v108; // [rsp+1D8h] [rbp+D8h]
  int v109; // [rsp+1DCh] [rbp+DCh]
  int *v110; // [rsp+1E0h] [rbp+E0h]
  __int64 v111; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v112; // [rsp+1F0h] [rbp+F0h]
  int v113; // [rsp+1F8h] [rbp+F8h]
  int v114; // [rsp+1FCh] [rbp+FCh]
  int *v115; // [rsp+200h] [rbp+100h]
  __int64 v116; // [rsp+208h] [rbp+108h]
  const WCHAR *v117; // [rsp+210h] [rbp+110h]
  int v118; // [rsp+218h] [rbp+118h]
  int v119; // [rsp+21Ch] [rbp+11Ch]
  int *v120; // [rsp+220h] [rbp+120h]
  __int64 v121; // [rsp+228h] [rbp+128h]
  const wchar_t *v122; // [rsp+230h] [rbp+130h]
  int v123; // [rsp+238h] [rbp+138h]
  int v124; // [rsp+23Ch] [rbp+13Ch]
  int *v125; // [rsp+240h] [rbp+140h]
  __int64 v126; // [rsp+248h] [rbp+148h]
  const wchar_t *v127; // [rsp+250h] [rbp+150h]
  int v128; // [rsp+258h] [rbp+158h]
  int v129; // [rsp+25Ch] [rbp+15Ch]
  const WCHAR *v130; // [rsp+260h] [rbp+160h]
  int v131; // [rsp+268h] [rbp+168h]
  int v132; // [rsp+26Ch] [rbp+16Ch]
  int *v133; // [rsp+270h] [rbp+170h]
  __int64 v134; // [rsp+278h] [rbp+178h]
  const wchar_t *v135; // [rsp+280h] [rbp+180h]
  int v136; // [rsp+288h] [rbp+188h]
  int v137; // [rsp+28Ch] [rbp+18Ch]
  const WCHAR *v138; // [rsp+290h] [rbp+190h]
  int v139; // [rsp+298h] [rbp+198h]
  int v140; // [rsp+29Ch] [rbp+19Ch]

  v4 = a2[2];
  v5 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == v4;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = v4;
  if ( v5 )
  {
    v24 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v24 > 5u
      && (*((_QWORD *)v24 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v24 + 3) & 0x400000000000LL) == *((_QWORD *)v24 + 3) )
    {
      v25 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v26 = (const wchar_t *)*((_QWORD *)a2 + 6);
      v52 = a2[1];
      v61 = &v52;
      LODWORD(v27) = 0;
      v62 = 4LL;
      v28 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      if ( v26 )
      {
        v28 = v26;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v26 + v27) );
      }
      v29 = (const wchar_t *)*((_QWORD *)a2 + 15);
      v64 = v27 + 1;
      v66 = a2 + 14;
      LODWORD(v27) = 0;
      v63 = v28;
      v30 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v65 = 0;
      v67 = 4LL;
      if ( v29 )
      {
        v30 = v29;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v29 + v27) );
      }
      v31 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v32 = &word_18021F3A8;
      v68 = v30;
      v69 = v27 + 1;
      v33 = &word_18021F3A8;
      v53 = *a2;
      v71 = &v53;
      LODWORD(v27) = 0;
      v70 = 0;
      v72 = 4LL;
      if ( v31 )
      {
        v33 = v31;
        v27 = -1LL;
        do
          ++v27;
        while ( v31[v27] );
      }
      v34 = (const wchar_t *)*((_QWORD *)a2 + 8);
      v74 = 2 * v27 + 2;
      v54 = a2[6];
      v76 = &v54;
      LODWORD(v27) = 0;
      v73 = v33;
      v35 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v75 = 0;
      v77 = 4LL;
      if ( v34 )
      {
        v35 = v34;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v34 + v27) );
      }
      v36 = (const wchar_t *)*((_QWORD *)a2 + 10);
      v79 = v27 + 1;
      v55 = a2[18];
      v81 = &v55;
      LODWORD(v27) = 0;
      v78 = v35;
      v37 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v80 = 0;
      v82 = 4LL;
      if ( v36 )
      {
        v37 = v36;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v36 + v27) );
      }
      v38 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v84 = v27 + 1;
      LODWORD(v27) = 0;
      v83 = v37;
      v39 = &word_18021F3A8;
      v85 = 0;
      if ( v38 )
      {
        v39 = v38;
        v27 = -1LL;
        do
          ++v27;
        while ( v38[v27] );
      }
      v40 = (const wchar_t *)*((_QWORD *)a2 + 13);
      v87 = 2 * v27 + 2;
      v56 = a2[24];
      v89 = &v56;
      LODWORD(v27) = 0;
      v86 = v39;
      v41 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v88 = 0;
      v90 = 4LL;
      if ( v40 )
      {
        v41 = v40;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v40 + v27) );
      }
      v42 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v92 = v27 + 1;
      LODWORD(v27) = 0;
      v91 = v41;
      v93 = 0;
      if ( v42 )
      {
        v32 = v42;
        v27 = -1LL;
        do
          ++v27;
        while ( v42[v27] );
      }
      v43 = (const wchar_t *)*((_QWORD *)a2 + 5);
      v95 = 2 * v27 + 2;
      v57 = a2[2];
      v97 = &v57;
      v58 = a2[15];
      v99 = &v58;
      LODWORD(v27) = 0;
      v94 = v32;
      v96 = 0;
      v98 = 4LL;
      v100 = 4LL;
      if ( v43 )
      {
        v25 = v43;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v43 + v27) );
      }
      v101 = v25;
      v102 = v27 + 1;
      v103 = 0;
      TlgWrite(v24, &unk_180264608, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &v60);
    }
  }
  else
  {
    v6 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x600000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x600000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v7 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v8 = (const wchar_t *)*((_QWORD *)a2 + 6);
      v47 = a2[1];
      v105 = &v47;
      LODWORD(v9) = 0;
      v106 = 4LL;
      v10 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      if ( v8 )
      {
        v10 = v8;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v8 + v9) );
      }
      v11 = (const wchar_t *)*((_QWORD *)a2 + 15);
      v108 = v9 + 1;
      v110 = a2 + 14;
      LODWORD(v9) = 0;
      v107 = v10;
      v12 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v109 = 0;
      v111 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v11 + v9) );
      }
      v13 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v14 = &word_18021F3A8;
      v112 = v12;
      v113 = v9 + 1;
      v15 = &word_18021F3A8;
      v48 = *a2;
      v115 = &v48;
      LODWORD(v9) = 0;
      v114 = 0;
      v116 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( v13[v9] );
      }
      v16 = (const wchar_t *)*((_QWORD *)a2 + 8);
      v118 = 2 * v9 + 2;
      v49 = a2[6];
      v120 = &v49;
      LODWORD(v9) = 0;
      v117 = v15;
      v17 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v119 = 0;
      v121 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const wchar_t *)*((_QWORD *)a2 + 10);
      v123 = v9 + 1;
      v50 = a2[18];
      v125 = &v50;
      LODWORD(v9) = 0;
      v122 = v17;
      v19 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v124 = 0;
      v126 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v128 = v9 + 1;
      LODWORD(v9) = 0;
      v127 = v19;
      v21 = &word_18021F3A8;
      v129 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( v20[v9] );
      }
      v22 = (const wchar_t *)*((_QWORD *)a2 + 13);
      v131 = 2 * v9 + 2;
      v51 = a2[24];
      v133 = &v51;
      LODWORD(v9) = 0;
      v130 = v21;
      v132 = 0;
      v134 = 4LL;
      if ( v22 )
      {
        v7 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v23 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v136 = v9 + 1;
      LODWORD(v9) = 0;
      v135 = v7;
      v137 = 0;
      if ( v23 )
      {
        v14 = v23;
        v9 = -1LL;
        do
          ++v9;
        while ( v23[v9] );
      }
      v138 = v14;
      v139 = 2 * v9 + 2;
      v140 = 0;
      TlgWrite(v6, &unk_180264730, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v44 = *(_DWORD **)(a1 + 48);
  v45 = a2[1];
  if ( v45 != v44[21] && (v45 != v44[19] || (int)v44[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v44 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
