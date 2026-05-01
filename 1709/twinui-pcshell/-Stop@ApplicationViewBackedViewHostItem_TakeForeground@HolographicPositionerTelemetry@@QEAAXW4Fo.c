/*
 * XREFs of ?Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18010BFBC
 * Callers:
 *     ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18010F3B0 (-TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableSh.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::Stop(
        __int64 a1,
        int a2)
{
  int *v2; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // r10
  const wchar_t *v9; // rdx
  const wchar_t *v10; // r9
  const wchar_t *v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  const wchar_t *v14; // rcx
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  const WCHAR *v17; // rcx
  const WCHAR *v18; // r8
  const WCHAR *v19; // rdx
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rdx
  const wchar_t *v22; // rcx
  const wchar_t *v23; // rdx
  const WCHAR *v24; // rcx
  const WCHAR *v25; // rdx
  const wchar_t *v26; // rcx
  const wchar_t *v27; // rdx
  const WCHAR *v28; // rcx
  const wchar_t *v29; // rcx
  const struct _TlgProvider_t *v30; // rbx
  DWORD CurrentThreadId; // eax
  int v32; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v33; // [rsp+3Ch] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v35; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+4Ch] [rbp-BCh] BYREF
  int v37; // [rsp+50h] [rbp-B8h] BYREF
  int v38; // [rsp+54h] [rbp-B4h] BYREF
  int v39; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v41; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  const wchar_t *v43; // [rsp+98h] [rbp-70h]
  int v44; // [rsp+A0h] [rbp-68h]
  int v45; // [rsp+A4h] [rbp-64h]
  int *v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  const wchar_t *v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-48h]
  int v50; // [rsp+C4h] [rbp-44h]
  int *v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  const WCHAR *v53; // [rsp+D8h] [rbp-30h]
  int v54; // [rsp+E0h] [rbp-28h]
  int v55; // [rsp+E4h] [rbp-24h]
  int *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  const wchar_t *v58; // [rsp+F8h] [rbp-10h]
  int v59; // [rsp+100h] [rbp-8h]
  int v60; // [rsp+104h] [rbp-4h]
  int *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  const wchar_t *v63; // [rsp+118h] [rbp+10h]
  int v64; // [rsp+120h] [rbp+18h]
  int v65; // [rsp+124h] [rbp+1Ch]
  const WCHAR *v66; // [rsp+128h] [rbp+20h]
  int v67; // [rsp+130h] [rbp+28h]
  int v68; // [rsp+134h] [rbp+2Ch]
  int *v69; // [rsp+138h] [rbp+30h]
  __int64 v70; // [rsp+140h] [rbp+38h]
  const wchar_t *v71; // [rsp+148h] [rbp+40h]
  int v72; // [rsp+150h] [rbp+48h]
  int v73; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v74; // [rsp+158h] [rbp+50h]
  int v75; // [rsp+160h] [rbp+58h]
  int v76; // [rsp+164h] [rbp+5Ch]
  int *v77; // [rsp+168h] [rbp+60h]
  __int64 v78; // [rsp+170h] [rbp+68h]
  DWORD *v79; // [rsp+178h] [rbp+70h]
  __int64 v80; // [rsp+180h] [rbp+78h]
  const wchar_t *v81; // [rsp+188h] [rbp+80h]
  int v82; // [rsp+190h] [rbp+88h]
  int v83; // [rsp+194h] [rbp+8Ch]
  PSRWLOCK *p_SRWLock; // [rsp+198h] [rbp+90h]
  __int64 v85; // [rsp+1A0h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v86; // [rsp+1A8h] [rbp+A0h] BYREF
  PSRWLOCK *v87; // [rsp+1C8h] [rbp+C0h]
  __int64 v88; // [rsp+1D0h] [rbp+C8h]
  DWORD *v89; // [rsp+1D8h] [rbp+D0h]
  __int64 v90; // [rsp+1E0h] [rbp+D8h]
  int *v91; // [rsp+1E8h] [rbp+E0h]
  __int64 v92; // [rsp+1F0h] [rbp+E8h]

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v7 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v6 )
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v8 = HolographicPositionerProvider::Provider();
    if ( *(_DWORD *)v8 > 4u )
    {
      v9 = (const wchar_t *)*((_QWORD *)v6 + 6);
      v10 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v35 = v6[1];
      v41 = &v35;
      v11 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v42 = 4LL;
      LODWORD(v12) = 0;
      if ( v9 )
      {
        v11 = v9;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v9 + v12) );
      }
      v13 = v12 + 1;
      v43 = v11;
      v14 = (const wchar_t *)*((_QWORD *)v6 + 15);
      v15 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v44 = v13;
      v46 = v6 + 14;
      LODWORD(v16) = 0;
      v45 = 0;
      v47 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v16 = -1LL;
        do
          ++v16;
        while ( *((_BYTE *)v14 + v16) );
      }
      v17 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v18 = &word_18021F3A8;
      v48 = v15;
      v49 = v16 + 1;
      v19 = &word_18021F3A8;
      v36 = *v6;
      v51 = &v36;
      LODWORD(v16) = 0;
      v50 = 0;
      v52 = 4LL;
      if ( v17 )
      {
        v19 = v17;
        v16 = -1LL;
        do
          ++v16;
        while ( v17[v16] );
      }
      v20 = (const wchar_t *)*((_QWORD *)v6 + 8);
      v54 = 2 * v16 + 2;
      v37 = v6[6];
      v56 = &v37;
      LODWORD(v16) = 0;
      v53 = v19;
      v21 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v55 = 0;
      v57 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v16 = -1LL;
        do
          ++v16;
        while ( *((_BYTE *)v20 + v16) );
      }
      v22 = (const wchar_t *)*((_QWORD *)v6 + 10);
      v59 = v16 + 1;
      v38 = v6[18];
      v61 = &v38;
      LODWORD(v16) = 0;
      v58 = v21;
      v23 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v60 = 0;
      v62 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v16 = -1LL;
        do
          ++v16;
        while ( *((_BYTE *)v22 + v16) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v64 = v16 + 1;
      LODWORD(v16) = 0;
      v63 = v23;
      v25 = &word_18021F3A8;
      v65 = 0;
      if ( v24 )
      {
        v25 = v24;
        v16 = -1LL;
        do
          ++v16;
        while ( v24[v16] );
      }
      v26 = (const wchar_t *)*((_QWORD *)v6 + 13);
      v67 = 2 * v16 + 2;
      v39 = v6[24];
      v69 = &v39;
      LODWORD(v16) = 0;
      v66 = v25;
      v27 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v68 = 0;
      v70 = 4LL;
      if ( v26 )
      {
        v27 = v26;
        v16 = -1LL;
        do
          ++v16;
        while ( *((_BYTE *)v26 + v16) );
      }
      v28 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v72 = v16 + 1;
      LODWORD(v16) = 0;
      v71 = v27;
      v73 = 0;
      if ( v28 )
      {
        v18 = v28;
        v16 = -1LL;
        do
          ++v16;
        while ( v28[v16] );
      }
      v29 = (const wchar_t *)*((_QWORD *)v6 + 5);
      v75 = 2 * v16 + 2;
      v32 = v6[2];
      v77 = &v32;
      v33 = v6[15];
      v79 = &v33;
      LODWORD(v16) = 0;
      v74 = v18;
      v76 = 0;
      v78 = 4LL;
      v80 = 4LL;
      if ( v29 )
      {
        v10 = v29;
        v16 = -1LL;
        do
          ++v16;
        while ( *((_BYTE *)v29 + v16) );
      }
      v81 = v10;
      v82 = v16 + 1;
      v83 = 0;
      p_SRWLock = &SRWLock;
      LODWORD(SRWLock) = a2;
      v85 = 4LL;
      TlgWrite(v8, &unk_18025FEE2, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v30 = HolographicPositionerProvider::Provider();
    if ( *(_DWORD *)v30 > 4u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v87 = &SRWLock;
      v88 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v90 = 4LL;
      v33 = CurrentThreadId;
      v32 = a2;
      v89 = &v33;
      v91 = &v32;
      v92 = 4LL;
      TlgWrite(v30, &unk_180260035, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &v86);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
