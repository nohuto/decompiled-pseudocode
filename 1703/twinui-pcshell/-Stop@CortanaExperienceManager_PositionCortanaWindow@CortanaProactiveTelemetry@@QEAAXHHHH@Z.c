/*
 * XREFs of ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x1800996A8
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800C727C (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180098068 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3,
        int a4,
        char a5)
{
  int *v5; // rbx
  int v7; // eax
  int *v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // r10
  const wchar_t *v11; // r8
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  void *v17; // rcx
  void *v18; // r9
  void *v19; // rdx
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rdx
  const wchar_t *v22; // rcx
  const wchar_t *v23; // rdx
  void *v24; // rcx
  void *v25; // rdx
  const wchar_t *v26; // rcx
  const wchar_t *v27; // rdx
  void *v28; // rcx
  const wchar_t *v29; // rcx
  const struct _TlgProvider_t *v30; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+54h] [rbp-B4h] BYREF
  int v38; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v40; // [rsp+88h] [rbp-80h]
  __int64 v41; // [rsp+90h] [rbp-78h]
  const wchar_t *v42; // [rsp+98h] [rbp-70h]
  int v43; // [rsp+A0h] [rbp-68h]
  int v44; // [rsp+A4h] [rbp-64h]
  int *v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  const wchar_t *v47; // [rsp+B8h] [rbp-50h]
  int v48; // [rsp+C0h] [rbp-48h]
  int v49; // [rsp+C4h] [rbp-44h]
  int *v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D0h] [rbp-38h]
  void *v52; // [rsp+D8h] [rbp-30h]
  int v53; // [rsp+E0h] [rbp-28h]
  int v54; // [rsp+E4h] [rbp-24h]
  int *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  const wchar_t *v57; // [rsp+F8h] [rbp-10h]
  int v58; // [rsp+100h] [rbp-8h]
  int v59; // [rsp+104h] [rbp-4h]
  int *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  const wchar_t *v62; // [rsp+118h] [rbp+10h]
  int v63; // [rsp+120h] [rbp+18h]
  int v64; // [rsp+124h] [rbp+1Ch]
  void *v65; // [rsp+128h] [rbp+20h]
  int v66; // [rsp+130h] [rbp+28h]
  int v67; // [rsp+134h] [rbp+2Ch]
  int *v68; // [rsp+138h] [rbp+30h]
  __int64 v69; // [rsp+140h] [rbp+38h]
  const wchar_t *v70; // [rsp+148h] [rbp+40h]
  int v71; // [rsp+150h] [rbp+48h]
  int v72; // [rsp+154h] [rbp+4Ch]
  void *v73; // [rsp+158h] [rbp+50h]
  int v74; // [rsp+160h] [rbp+58h]
  int v75; // [rsp+164h] [rbp+5Ch]
  __int64 *v76; // [rsp+168h] [rbp+60h]
  __int64 v77; // [rsp+170h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+178h] [rbp+70h]
  __int64 v79; // [rsp+180h] [rbp+78h]
  const wchar_t *v80; // [rsp+188h] [rbp+80h]
  int v81; // [rsp+190h] [rbp+88h]
  int v82; // [rsp+194h] [rbp+8Ch]
  int *v83; // [rsp+198h] [rbp+90h]
  __int64 v84; // [rsp+1A0h] [rbp+98h]
  int *v85; // [rsp+1A8h] [rbp+A0h]
  __int64 v86; // [rsp+1B0h] [rbp+A8h]
  int *v87; // [rsp+1B8h] [rbp+B0h]
  __int64 v88; // [rsp+1C0h] [rbp+B8h]
  char *v89; // [rsp+1C8h] [rbp+C0h]
  __int64 v90; // [rsp+1D0h] [rbp+C8h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+1E8h] [rbp+E0h] BYREF
  PSRWLOCK *v92; // [rsp+208h] [rbp+100h]
  __int64 v93; // [rsp+210h] [rbp+108h]
  __int64 *v94; // [rsp+218h] [rbp+110h]
  __int64 v95; // [rsp+220h] [rbp+118h]
  int *v96; // [rsp+228h] [rbp+120h]
  __int64 v97; // [rsp+230h] [rbp+128h]
  int *v98; // [rsp+238h] [rbp+130h]
  __int64 v99; // [rsp+240h] [rbp+138h]
  int *v100; // [rsp+248h] [rbp+140h]
  __int64 v101; // [rsp+250h] [rbp+148h]
  char *v102; // [rsp+258h] [rbp+150h]
  __int64 v103; // [rsp+260h] [rbp+158h]
  int v104; // [rsp+2C0h] [rbp+1B8h] BYREF
  int v105; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v106; // [rsp+2D0h] [rbp+1C8h] BYREF

  v106 = a4;
  v105 = a3;
  v104 = a2;
  v5 = (int *)*((_QWORD *)this + 6);
  v7 = v5[19];
  if ( v7 < 0 && v7 == v5[21] )
    v8 = v5 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v9 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v8 )
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v10 = CortanaProactiveLogging::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      v34 = v8[1];
      v11 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v12 = (const wchar_t *)*((_QWORD *)v8 + 6);
      v40 = &v34;
      v13 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v41 = 4LL;
      LODWORD(v14) = 0;
      if ( v12 )
      {
        v13 = v12;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v12 + v14) );
      }
      v15 = (const wchar_t *)*((_QWORD *)v8 + 15);
      v43 = v14 + 1;
      v45 = v8 + 14;
      LODWORD(v14) = 0;
      v42 = v13;
      v16 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v44 = 0;
      v46 = 4LL;
      if ( v15 )
      {
        v16 = v15;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v15 + v14) );
      }
      v17 = (void *)*((_QWORD *)v8 + 2);
      v18 = &unk_1801C6ABC;
      v47 = v16;
      v48 = v14 + 1;
      v19 = &unk_1801C6ABC;
      v35 = *v8;
      v50 = &v35;
      LODWORD(v14) = 0;
      v49 = 0;
      v51 = 4LL;
      if ( v17 )
      {
        v19 = v17;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v17 + v14) );
      }
      v20 = (const wchar_t *)*((_QWORD *)v8 + 8);
      v53 = 2 * v14 + 2;
      v36 = v8[6];
      v55 = &v36;
      LODWORD(v14) = 0;
      v52 = v19;
      v21 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v54 = 0;
      v56 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v20 + v14) );
      }
      v22 = (const wchar_t *)*((_QWORD *)v8 + 10);
      v58 = v14 + 1;
      v37 = v8[18];
      v60 = &v37;
      LODWORD(v14) = 0;
      v57 = v21;
      v23 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v59 = 0;
      v61 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v22 + v14) );
      }
      v24 = (void *)*((_QWORD *)v8 + 11);
      v63 = v14 + 1;
      LODWORD(v14) = 0;
      v62 = v23;
      v25 = &unk_1801C6ABC;
      v64 = 0;
      if ( v24 )
      {
        v25 = v24;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v24 + v14) );
      }
      v26 = (const wchar_t *)*((_QWORD *)v8 + 13);
      v66 = 2 * v14 + 2;
      v38 = v8[24];
      v68 = &v38;
      LODWORD(v14) = 0;
      v65 = v25;
      v27 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v67 = 0;
      v69 = 4LL;
      if ( v26 )
      {
        v27 = v26;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v26 + v14) );
      }
      v28 = (void *)*((_QWORD *)v8 + 14);
      v71 = v14 + 1;
      LODWORD(v14) = 0;
      v70 = v27;
      v72 = 0;
      if ( v28 )
      {
        v18 = v28;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v28 + v14) );
      }
      v29 = (const wchar_t *)*((_QWORD *)v8 + 5);
      v74 = 2 * v14 + 2;
      LODWORD(v32) = v8[2];
      v76 = &v32;
      LODWORD(SRWLock) = v8[15];
      p_SRWLock = &SRWLock;
      LODWORD(v14) = 0;
      v73 = v18;
      v75 = 0;
      v77 = 4LL;
      v79 = 4LL;
      if ( v29 )
      {
        v11 = v29;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v29 + v14) );
      }
      v80 = v11;
      v81 = v14 + 1;
      v82 = 0;
      v83 = &v104;
      v84 = 4LL;
      v85 = &v105;
      v87 = &v106;
      v89 = &a5;
      v86 = 4LL;
      v88 = 4LL;
      v90 = 4LL;
      TlgWrite(v10, &unk_1801F916A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v30 = CortanaProactiveLogging::Provider();
    if ( *(_DWORD *)v30 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v92 = &SRWLock;
      v93 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v95 = 4LL;
      LODWORD(v32) = CurrentThreadId;
      v97 = 4LL;
      v94 = &v32;
      v96 = &v104;
      v98 = &v105;
      v100 = &v106;
      v102 = &a5;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 4LL;
      TlgWrite(v30, &unk_1801F92CD, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v91);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)((char *)this + 8));
}
