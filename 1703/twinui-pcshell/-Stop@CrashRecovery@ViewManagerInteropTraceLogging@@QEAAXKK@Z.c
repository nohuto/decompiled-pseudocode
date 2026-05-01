/*
 * XREFs of ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1800EE078
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1800F9508 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::Stop(
        ViewManagerInteropTraceLogging::CrashRecovery *this,
        int a2,
        int a3)
{
  int *v3; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // r10
  const wchar_t *v9; // r8
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rdx
  __int64 v12; // rax
  const wchar_t *v13; // rcx
  const wchar_t *v14; // rdx
  void *v15; // rcx
  void *v16; // r9
  void *v17; // rdx
  const wchar_t *v18; // rcx
  const wchar_t *v19; // rdx
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rdx
  void *v22; // rcx
  void *v23; // rdx
  const wchar_t *v24; // rcx
  const wchar_t *v25; // rdx
  void *v26; // rcx
  const wchar_t *v27; // rcx
  const struct _TlgProvider_t *v28; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v30; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+4Ch] [rbp-B4h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  const wchar_t *v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  int *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  const wchar_t *v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+BCh] [rbp-44h]
  int *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  void *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  int *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  const wchar_t *v55; // [rsp+F0h] [rbp-10h]
  int v56; // [rsp+F8h] [rbp-8h]
  int v57; // [rsp+FCh] [rbp-4h]
  int *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  const wchar_t *v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+118h] [rbp+18h]
  int v62; // [rsp+11Ch] [rbp+1Ch]
  void *v63; // [rsp+120h] [rbp+20h]
  int v64; // [rsp+128h] [rbp+28h]
  int v65; // [rsp+12Ch] [rbp+2Ch]
  int *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  const wchar_t *v68; // [rsp+140h] [rbp+40h]
  int v69; // [rsp+148h] [rbp+48h]
  int v70; // [rsp+14Ch] [rbp+4Ch]
  void *v71; // [rsp+150h] [rbp+50h]
  int v72; // [rsp+158h] [rbp+58h]
  int v73; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  const wchar_t *v78; // [rsp+180h] [rbp+80h]
  int v79; // [rsp+188h] [rbp+88h]
  int v80; // [rsp+18Ch] [rbp+8Ch]
  int *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  int *v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  EVENT_DATA_DESCRIPTOR v85; // [rsp+1C0h] [rbp+C0h] BYREF
  PSRWLOCK *v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]
  DWORD *v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  int *v90; // [rsp+200h] [rbp+100h]
  __int64 v91; // [rsp+208h] [rbp+108h]
  int *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  int v94; // [rsp+278h] [rbp+178h] BYREF
  int v95; // [rsp+280h] [rbp+180h] BYREF

  v95 = a3;
  v94 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v7 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v6 )
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v8 = ViewManagerInteropLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v32 = v6[1];
      v9 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v10 = (const wchar_t *)*((_QWORD *)v6 + 6);
      v38 = &v32;
      v11 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v39 = 4LL;
      LODWORD(v12) = 0;
      if ( v10 )
      {
        v11 = v10;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v10 + v12) );
      }
      v13 = (const wchar_t *)*((_QWORD *)v6 + 15);
      v41 = v12 + 1;
      v43 = v6 + 14;
      LODWORD(v12) = 0;
      v40 = v11;
      v14 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v42 = 0;
      v44 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v13 + v12) );
      }
      v15 = (void *)*((_QWORD *)v6 + 2);
      v16 = &unk_1801C6ABC;
      v45 = v14;
      v46 = v12 + 1;
      v17 = &unk_1801C6ABC;
      v33 = *v6;
      v48 = &v33;
      LODWORD(v12) = 0;
      v47 = 0;
      v49 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)v15 + v12) );
      }
      v18 = (const wchar_t *)*((_QWORD *)v6 + 8);
      v51 = 2 * v12 + 2;
      v34 = v6[6];
      v53 = &v34;
      LODWORD(v12) = 0;
      v50 = v17;
      v19 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v52 = 0;
      v54 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v18 + v12) );
      }
      v20 = (const wchar_t *)*((_QWORD *)v6 + 10);
      v56 = v12 + 1;
      v35 = v6[18];
      v58 = &v35;
      LODWORD(v12) = 0;
      v55 = v19;
      v21 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v57 = 0;
      v59 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v20 + v12) );
      }
      v22 = (void *)*((_QWORD *)v6 + 11);
      v61 = v12 + 1;
      LODWORD(v12) = 0;
      v60 = v21;
      v23 = &unk_1801C6ABC;
      v62 = 0;
      if ( v22 )
      {
        v23 = v22;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)v22 + v12) );
      }
      v24 = (const wchar_t *)*((_QWORD *)v6 + 13);
      v64 = 2 * v12 + 2;
      v36 = v6[24];
      v66 = &v36;
      LODWORD(v12) = 0;
      v63 = v23;
      v25 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v65 = 0;
      v67 = 4LL;
      if ( v24 )
      {
        v25 = v24;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v24 + v12) );
      }
      v26 = (void *)*((_QWORD *)v6 + 14);
      v69 = v12 + 1;
      LODWORD(v12) = 0;
      v68 = v25;
      v70 = 0;
      if ( v26 )
      {
        v16 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)v26 + v12) );
      }
      v27 = (const wchar_t *)*((_QWORD *)v6 + 5);
      v72 = 2 * v12 + 2;
      v30 = v6[2];
      v74 = &v30;
      LODWORD(SRWLock) = v6[15];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v71 = v16;
      v73 = 0;
      v75 = 4LL;
      v77 = 4LL;
      if ( v27 )
      {
        v9 = v27;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v27 + v12) );
      }
      v78 = v9;
      v79 = v12 + 1;
      v80 = 0;
      v81 = &v94;
      v82 = 4LL;
      v83 = &v95;
      v84 = 4LL;
      TlgWrite(v8, &unk_1801FDD65, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v28 = ViewManagerInteropLogging::Provider();
    if ( *(_DWORD *)v28 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v86 = &SRWLock;
      v87 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v89 = 4LL;
      v30 = CurrentThreadId;
      v91 = 4LL;
      v88 = &v30;
      v90 = &v94;
      v92 = &v95;
      v93 = 4LL;
      TlgWrite(v28, &unk_1801FDD06, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v85);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ViewManagerInteropTraceLogging::CrashRecovery *)((char *)this + 8));
}
