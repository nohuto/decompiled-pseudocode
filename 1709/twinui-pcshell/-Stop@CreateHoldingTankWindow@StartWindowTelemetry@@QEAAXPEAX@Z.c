/*
 * XREFs of ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x18018F61C
 * Callers:
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x180190474 (--0FocusHoldingTank@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18017CBDC (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall StartWindowTelemetry::CreateHoldingTankWindow::Stop(
        StartWindowTelemetry::CreateHoldingTankWindow *this,
        void *a2)
{
  int *v2; // rbx
  int v4; // eax
  int *v5; // rbx
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // r10
  const wchar_t *v8; // r8
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rdx
  __int64 v11; // rax
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rdx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // r9
  const WCHAR *v16; // rdx
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rdx
  const wchar_t *v19; // rcx
  const wchar_t *v20; // rdx
  const WCHAR *v21; // rcx
  const WCHAR *v22; // rdx
  const wchar_t *v23; // rcx
  const wchar_t *v24; // rdx
  const WCHAR *v25; // rcx
  const wchar_t *v26; // rcx
  const struct _TlgProvider_t *v27; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  int v33; // [rsp+50h] [rbp-B8h] BYREF
  int v34; // [rsp+54h] [rbp-B4h] BYREF
  int v35; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  const wchar_t *v39; // [rsp+98h] [rbp-70h]
  int v40; // [rsp+A0h] [rbp-68h]
  int v41; // [rsp+A4h] [rbp-64h]
  int *v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  const wchar_t *v44; // [rsp+B8h] [rbp-50h]
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  int *v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  const WCHAR *v49; // [rsp+D8h] [rbp-30h]
  int v50; // [rsp+E0h] [rbp-28h]
  int v51; // [rsp+E4h] [rbp-24h]
  int *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  const wchar_t *v54; // [rsp+F8h] [rbp-10h]
  int v55; // [rsp+100h] [rbp-8h]
  int v56; // [rsp+104h] [rbp-4h]
  int *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  const wchar_t *v59; // [rsp+118h] [rbp+10h]
  int v60; // [rsp+120h] [rbp+18h]
  int v61; // [rsp+124h] [rbp+1Ch]
  const WCHAR *v62; // [rsp+128h] [rbp+20h]
  int v63; // [rsp+130h] [rbp+28h]
  int v64; // [rsp+134h] [rbp+2Ch]
  int *v65; // [rsp+138h] [rbp+30h]
  __int64 v66; // [rsp+140h] [rbp+38h]
  const wchar_t *v67; // [rsp+148h] [rbp+40h]
  int v68; // [rsp+150h] [rbp+48h]
  int v69; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v70; // [rsp+158h] [rbp+50h]
  int v71; // [rsp+160h] [rbp+58h]
  int v72; // [rsp+164h] [rbp+5Ch]
  __int64 *v73; // [rsp+168h] [rbp+60h]
  __int64 v74; // [rsp+170h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+178h] [rbp+70h]
  __int64 v76; // [rsp+180h] [rbp+78h]
  const wchar_t *v77; // [rsp+188h] [rbp+80h]
  int v78; // [rsp+190h] [rbp+88h]
  int v79; // [rsp+194h] [rbp+8Ch]
  void **v80; // [rsp+198h] [rbp+90h]
  __int64 v81; // [rsp+1A0h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v82; // [rsp+1A8h] [rbp+A0h] BYREF
  PSRWLOCK *v83; // [rsp+1C8h] [rbp+C0h]
  __int64 v84; // [rsp+1D0h] [rbp+C8h]
  __int64 *v85; // [rsp+1D8h] [rbp+D0h]
  __int64 v86; // [rsp+1E0h] [rbp+D8h]
  void **v87; // [rsp+1E8h] [rbp+E0h]
  __int64 v88; // [rsp+1F0h] [rbp+E8h]
  void *v89; // [rsp+230h] [rbp+128h] BYREF

  v89 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v6 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v5 )
  {
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    v7 = CommonStartTelemetryLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v31 = v5[1];
      v8 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v9 = (const wchar_t *)*((_QWORD *)v5 + 6);
      v37 = &v31;
      v10 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v38 = 4LL;
      LODWORD(v11) = 0;
      if ( v9 )
      {
        v10 = v9;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v9 + v11) );
      }
      v12 = (const wchar_t *)*((_QWORD *)v5 + 15);
      v40 = v11 + 1;
      v42 = v5 + 14;
      LODWORD(v11) = 0;
      v39 = v10;
      v13 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v41 = 0;
      v43 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v12 + v11) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v15 = &word_18021F3A8;
      v44 = v13;
      v45 = v11 + 1;
      v16 = &word_18021F3A8;
      v32 = *v5;
      v47 = &v32;
      LODWORD(v11) = 0;
      v46 = 0;
      v48 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v11 = -1LL;
        do
          ++v11;
        while ( v14[v11] );
      }
      v17 = (const wchar_t *)*((_QWORD *)v5 + 8);
      v50 = 2 * v11 + 2;
      v33 = v5[6];
      v52 = &v33;
      LODWORD(v11) = 0;
      v49 = v16;
      v18 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v51 = 0;
      v53 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v17 + v11) );
      }
      v19 = (const wchar_t *)*((_QWORD *)v5 + 10);
      v55 = v11 + 1;
      v34 = v5[18];
      v57 = &v34;
      LODWORD(v11) = 0;
      v54 = v18;
      v20 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v56 = 0;
      v58 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v19 + v11) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v5 + 11);
      v60 = v11 + 1;
      LODWORD(v11) = 0;
      v59 = v20;
      v22 = &word_18021F3A8;
      v61 = 0;
      if ( v21 )
      {
        v22 = v21;
        v11 = -1LL;
        do
          ++v11;
        while ( v21[v11] );
      }
      v23 = (const wchar_t *)*((_QWORD *)v5 + 13);
      v63 = 2 * v11 + 2;
      v35 = v5[24];
      v65 = &v35;
      LODWORD(v11) = 0;
      v62 = v22;
      v24 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v64 = 0;
      v66 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v23 + v11) );
      }
      v25 = (const WCHAR *)*((_QWORD *)v5 + 14);
      v68 = v11 + 1;
      LODWORD(v11) = 0;
      v67 = v24;
      v69 = 0;
      if ( v25 )
      {
        v15 = v25;
        v11 = -1LL;
        do
          ++v11;
        while ( v25[v11] );
      }
      v26 = (const wchar_t *)*((_QWORD *)v5 + 5);
      v71 = 2 * v11 + 2;
      LODWORD(v29) = v5[2];
      v73 = &v29;
      LODWORD(SRWLock) = v5[15];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v70 = v15;
      v72 = 0;
      v74 = 4LL;
      v76 = 4LL;
      if ( v26 )
      {
        v8 = v26;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v26 + v11) );
      }
      v77 = v8;
      v78 = v11 + 1;
      v79 = 0;
      v80 = &v89;
      v81 = 8LL;
      TlgWrite(v7, &unk_180266E22, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    v27 = CommonStartTelemetryLogging::Provider();
    if ( *(_DWORD *)v27 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v83 = &SRWLock;
      v84 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v86 = 4LL;
      LODWORD(v29) = CurrentThreadId;
      v88 = 8LL;
      v85 = &v29;
      v87 = &v89;
      TlgWrite(v27, &unk_180266F5A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v82);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((StartWindowTelemetry::CreateHoldingTankWindow *)((char *)this + 8));
}
