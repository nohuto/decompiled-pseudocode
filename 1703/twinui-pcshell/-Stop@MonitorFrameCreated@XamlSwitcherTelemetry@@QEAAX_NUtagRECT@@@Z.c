/*
 * XREFs of ?Stop@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAX_NUtagRECT@@@Z @ 0x18012BAD8
 * Callers:
 *     _lambda_4d9498deded80cfab1ff9f78bf19bcab_::operator() @ 0x18012E08C (_lambda_4d9498deded80cfab1ff9f78bf19bcab_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@XamlSwitcherLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18012B3A8 (-Provider@XamlSwitcherLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall XamlSwitcherTelemetry::MonitorFrameCreated::Stop(
        XamlSwitcherTelemetry::MonitorFrameCreated *this,
        unsigned __int8 a2,
        struct tagRECT *a3)
{
  int *v3; // rbx
  int v7; // eax
  int *v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // rax
  const struct _TlgProvider_t *v11; // r10
  const wchar_t *v12; // r8
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rdx
  void *v18; // rcx
  void *v19; // r9
  void *v20; // rdx
  const wchar_t *v21; // rcx
  const wchar_t *v22; // rdx
  const wchar_t *v23; // rcx
  const wchar_t *v24; // rdx
  void *v25; // rcx
  void *v26; // rdx
  const wchar_t *v27; // rcx
  void *v28; // rcx
  const struct _TlgProvider_t *v29; // rax
  const struct _TlgProvider_t *v30; // rbx
  int v31; // ecx
  DWORD CurrentThreadId; // eax
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v34; // [rsp+34h] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  const wchar_t *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  int *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  const wchar_t *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  int *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  void *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  const wchar_t *v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  const wchar_t *v62; // [rsp+100h] [rbp+0h]
  int v63; // [rsp+108h] [rbp+8h]
  int v64; // [rsp+10Ch] [rbp+Ch]
  void *v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+118h] [rbp+18h]
  int v67; // [rsp+11Ch] [rbp+1Ch]
  DWORD *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  const wchar_t *v70; // [rsp+130h] [rbp+30h]
  int v71; // [rsp+138h] [rbp+38h]
  int v72; // [rsp+13Ch] [rbp+3Ch]
  void *v73; // [rsp+140h] [rbp+40h]
  int v74; // [rsp+148h] [rbp+48h]
  int v75; // [rsp+14Ch] [rbp+4Ch]
  PSRWLOCK *p_SRWLock; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  struct tagRECT *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  LONG *p_top; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  LONG *p_right; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]
  LONG *p_bottom; // [rsp+190h] [rbp+90h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v86; // [rsp+1B0h] [rbp+B0h] BYREF
  PSRWLOCK *v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1D8h] [rbp+D8h]
  DWORD *v89; // [rsp+1E0h] [rbp+E0h]
  __int64 v90; // [rsp+1E8h] [rbp+E8h]
  int *v91; // [rsp+1F0h] [rbp+F0h]
  __int64 v92; // [rsp+1F8h] [rbp+F8h]
  struct tagRECT *v93; // [rsp+200h] [rbp+100h]
  __int64 v94; // [rsp+208h] [rbp+108h]
  LONG *v95; // [rsp+210h] [rbp+110h]
  __int64 v96; // [rsp+218h] [rbp+118h]
  LONG *v97; // [rsp+220h] [rbp+120h]
  __int64 v98; // [rsp+228h] [rbp+128h]
  LONG *v99; // [rsp+230h] [rbp+130h]
  __int64 v100; // [rsp+238h] [rbp+138h]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
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
    v10 = XamlSwitcherLogging::Provider();
    v11 = v10;
    if ( *(_DWORD *)v10 > 5u
      && (*((_QWORD *)v10 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x400000000000LL) == *((_QWORD *)v10 + 3) )
    {
      v12 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v13 = (const wchar_t *)*((_QWORD *)v8 + 6);
      v36 = v8[1];
      v40 = &v36;
      LODWORD(v14) = 0;
      v41 = 4LL;
      v15 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      if ( v13 )
      {
        v15 = v13;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v13 + v14) );
      }
      v16 = (const wchar_t *)*((_QWORD *)v8 + 15);
      v43 = v14 + 1;
      v45 = v8 + 14;
      LODWORD(v14) = 0;
      v42 = v15;
      v17 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v44 = 0;
      v46 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v16 + v14) );
      }
      v18 = (void *)*((_QWORD *)v8 + 2);
      v19 = &unk_1801C6ABC;
      v47 = v17;
      v48 = v14 + 1;
      v20 = &unk_1801C6ABC;
      v37 = *v8;
      v50 = &v37;
      LODWORD(v14) = 0;
      v49 = 0;
      v51 = 4LL;
      if ( v18 )
      {
        v20 = v18;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v18 + v14) );
      }
      v21 = (const wchar_t *)*((_QWORD *)v8 + 8);
      v53 = 2 * v14 + 2;
      v38 = v8[6];
      v55 = &v38;
      LODWORD(v14) = 0;
      v52 = v20;
      v22 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v54 = 0;
      v56 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v21 + v14) );
      }
      v23 = (const wchar_t *)*((_QWORD *)v8 + 10);
      v58 = v14 + 1;
      v33 = v8[18];
      v60 = &v33;
      LODWORD(v14) = 0;
      v57 = v22;
      v24 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v59 = 0;
      v61 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v23 + v14) );
      }
      v25 = (void *)*((_QWORD *)v8 + 11);
      v63 = v14 + 1;
      LODWORD(v14) = 0;
      v62 = v24;
      v26 = &unk_1801C6ABC;
      v64 = 0;
      if ( v25 )
      {
        v26 = v25;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v25 + v14) );
      }
      v27 = (const wchar_t *)*((_QWORD *)v8 + 13);
      v66 = 2 * v14 + 2;
      v34 = v8[24];
      v68 = &v34;
      LODWORD(v14) = 0;
      v65 = v26;
      v67 = 0;
      v69 = 4LL;
      if ( v27 )
      {
        v12 = v27;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v27 + v14) );
      }
      v28 = (void *)*((_QWORD *)v8 + 14);
      v71 = v14 + 1;
      LODWORD(v14) = 0;
      v70 = v12;
      v72 = 0;
      if ( v28 )
      {
        v19 = v28;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v28 + v14) );
      }
      v73 = v19;
      v74 = 2 * v14 + 2;
      LODWORD(SRWLock) = a2;
      p_SRWLock = &SRWLock;
      p_top = &a3->top;
      p_right = &a3->right;
      p_bottom = &a3->bottom;
      v75 = 0;
      v77 = 4LL;
      v78 = a3;
      v79 = 4LL;
      v81 = 4LL;
      v83 = 4LL;
      v85 = 4LL;
      TlgWrite(v11, &unk_1802010EB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v29 = XamlSwitcherLogging::Provider();
    v30 = v29;
    if ( *(_DWORD *)v29 > 5u
      && (*((_QWORD *)v29 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v29 + 3) & 0x400000000000LL) == *((_QWORD *)v29 + 3) )
    {
      v31 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v87 = &SRWLock;
      LODWORD(SRWLock) = v31;
      v88 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v90 = 4LL;
      v34 = CurrentThreadId;
      v92 = 4LL;
      v89 = &v34;
      v33 = a2;
      v91 = &v33;
      v95 = &a3->top;
      v97 = &a3->right;
      v99 = &a3->bottom;
      v93 = a3;
      v94 = 4LL;
      v96 = 4LL;
      v98 = 4LL;
      v100 = 4LL;
      TlgWrite(v30, &unk_180201237, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 9u, &v86);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((XamlSwitcherTelemetry::MonitorFrameCreated *)((char *)this + 8));
}
