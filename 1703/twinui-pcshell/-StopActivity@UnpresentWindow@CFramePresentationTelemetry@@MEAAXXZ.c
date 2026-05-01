/*
 * XREFs of ?StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x18006E470
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall CFramePresentationTelemetry::UnpresentWindow::StopActivity(
        CFramePresentationTelemetry::UnpresentWindow *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // r10
  const wchar_t *v7; // r8
  const wchar_t *v8; // rcx
  const wchar_t *v9; // rdx
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rdx
  void *v13; // rcx
  void *v14; // r9
  void *v15; // rdx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rdx
  const wchar_t *v18; // rcx
  const wchar_t *v19; // rdx
  void *v20; // rcx
  void *v21; // rdx
  const wchar_t *v22; // rcx
  const wchar_t *v23; // rdx
  void *v24; // rcx
  const wchar_t *v25; // rcx
  const struct _TlgProvider_t *v26; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v28; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  const wchar_t *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  int *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  const wchar_t *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  int *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  void *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  int *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  const wchar_t *v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+FCh] [rbp-4h]
  int *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  const wchar_t *v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]
  void *v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+128h] [rbp+28h]
  int v63; // [rsp+12Ch] [rbp+2Ch]
  int *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  const wchar_t *v66; // [rsp+140h] [rbp+40h]
  int v67; // [rsp+148h] [rbp+48h]
  int v68; // [rsp+14Ch] [rbp+4Ch]
  void *v69; // [rsp+150h] [rbp+50h]
  int v70; // [rsp+158h] [rbp+58h]
  int v71; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v75; // [rsp+178h] [rbp+78h]
  const wchar_t *v76; // [rsp+180h] [rbp+80h]
  int v77; // [rsp+188h] [rbp+88h]
  int v78; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v79; // [rsp+1A0h] [rbp+A0h] BYREF
  PSRWLOCK *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  DWORD *v82; // [rsp+1D0h] [rbp+D0h]
  __int64 v83; // [rsp+1D8h] [rbp+D8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = CAppManagerLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      v30 = v4[1];
      v7 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v8 = (const wchar_t *)*((_QWORD *)v4 + 6);
      v36 = &v30;
      v9 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v37 = 4LL;
      LODWORD(v10) = 0;
      if ( v8 )
      {
        v9 = v8;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v8 + v10) );
      }
      v11 = (const wchar_t *)*((_QWORD *)v4 + 15);
      v39 = v10 + 1;
      v41 = v4 + 14;
      LODWORD(v10) = 0;
      v38 = v9;
      v12 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v40 = 0;
      v42 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v11 + v10) );
      }
      v13 = (void *)*((_QWORD *)v4 + 2);
      v14 = &unk_1801C6ABC;
      v43 = v12;
      v44 = v10 + 1;
      v15 = &unk_1801C6ABC;
      v31 = *v4;
      v46 = &v31;
      LODWORD(v10) = 0;
      v45 = 0;
      v47 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v13 + v10) );
      }
      v16 = (const wchar_t *)*((_QWORD *)v4 + 8);
      v49 = 2 * v10 + 2;
      v32 = v4[6];
      v51 = &v32;
      LODWORD(v10) = 0;
      v48 = v15;
      v17 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v50 = 0;
      v52 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v16 + v10) );
      }
      v18 = (const wchar_t *)*((_QWORD *)v4 + 10);
      v54 = v10 + 1;
      v33 = v4[18];
      v56 = &v33;
      LODWORD(v10) = 0;
      v53 = v17;
      v19 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v55 = 0;
      v57 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v18 + v10) );
      }
      v20 = (void *)*((_QWORD *)v4 + 11);
      v59 = v10 + 1;
      LODWORD(v10) = 0;
      v58 = v19;
      v21 = &unk_1801C6ABC;
      v60 = 0;
      if ( v20 )
      {
        v21 = v20;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v20 + v10) );
      }
      v22 = (const wchar_t *)*((_QWORD *)v4 + 13);
      v62 = 2 * v10 + 2;
      v34 = v4[24];
      v64 = &v34;
      LODWORD(v10) = 0;
      v61 = v21;
      v23 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v63 = 0;
      v65 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v22 + v10) );
      }
      v24 = (void *)*((_QWORD *)v4 + 14);
      v67 = v10 + 1;
      LODWORD(v10) = 0;
      v66 = v23;
      v68 = 0;
      if ( v24 )
      {
        v14 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v24 + v10) );
      }
      v25 = (const wchar_t *)*((_QWORD *)v4 + 5);
      v70 = 2 * v10 + 2;
      v28 = v4[2];
      v72 = &v28;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v69 = v14;
      v71 = 0;
      v73 = 4LL;
      v75 = 4LL;
      if ( v25 )
      {
        v7 = v25;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v25 + v10) );
      }
      v76 = v7;
      v77 = v10 + 1;
      v78 = 0;
      TlgWrite(v6, &unk_1801F63B8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v26 = CAppManagerLogging::Provider();
    if ( *(_DWORD *)v26 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v80 = &SRWLock;
      v81 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v83 = 4LL;
      v28 = CurrentThreadId;
      v82 = &v28;
      TlgWrite(v26, &unk_1801F64E2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v79);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::UnpresentWindow *)((char *)this + 8));
}
