/*
 * XREFs of ?StopActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@MEAAXXZ @ 0x18010BA80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::StopActivity(
        HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // r10
  const wchar_t *v7; // rdx
  const wchar_t *v8; // r9
  const wchar_t *v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  const WCHAR *v15; // rcx
  const WCHAR *v16; // r8
  const WCHAR *v17; // rdx
  const wchar_t *v18; // rcx
  const wchar_t *v19; // rdx
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rdx
  const WCHAR *v22; // rcx
  const WCHAR *v23; // rdx
  const wchar_t *v24; // rcx
  const wchar_t *v25; // rdx
  const WCHAR *v26; // rcx
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
  const WCHAR *v50; // [rsp+D0h] [rbp-30h]
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
  const WCHAR *v63; // [rsp+120h] [rbp+20h]
  int v64; // [rsp+128h] [rbp+28h]
  int v65; // [rsp+12Ch] [rbp+2Ch]
  int *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  const wchar_t *v68; // [rsp+140h] [rbp+40h]
  int v69; // [rsp+148h] [rbp+48h]
  int v70; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v71; // [rsp+150h] [rbp+50h]
  int v72; // [rsp+158h] [rbp+58h]
  int v73; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  const wchar_t *v78; // [rsp+180h] [rbp+80h]
  int v79; // [rsp+188h] [rbp+88h]
  int v80; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v81; // [rsp+190h] [rbp+90h] BYREF
  PSRWLOCK *v82; // [rsp+1B0h] [rbp+B0h]
  __int64 v83; // [rsp+1B8h] [rbp+B8h]
  DWORD *v84; // [rsp+1C0h] [rbp+C0h]
  __int64 v85; // [rsp+1C8h] [rbp+C8h]

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
    v6 = HolographicPositionerProvider::Provider();
    if ( *(_DWORD *)v6 > 4u )
    {
      v7 = (const wchar_t *)*((_QWORD *)v4 + 6);
      v8 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v32 = v4[1];
      v38 = &v32;
      v9 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v39 = 4LL;
      LODWORD(v10) = 0;
      if ( v7 )
      {
        v9 = v7;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v7 + v10) );
      }
      v11 = v10 + 1;
      v40 = v9;
      v12 = (const wchar_t *)*((_QWORD *)v4 + 15);
      v13 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v41 = v11;
      v43 = v4 + 14;
      LODWORD(v14) = 0;
      v42 = 0;
      v44 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v12 + v14) );
      }
      v15 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v16 = &word_18021F3A8;
      v45 = v13;
      v46 = v14 + 1;
      v17 = &word_18021F3A8;
      v33 = *v4;
      v48 = &v33;
      LODWORD(v14) = 0;
      v47 = 0;
      v49 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v14 = -1LL;
        do
          ++v14;
        while ( v15[v14] );
      }
      v18 = (const wchar_t *)*((_QWORD *)v4 + 8);
      v51 = 2 * v14 + 2;
      v34 = v4[6];
      v53 = &v34;
      LODWORD(v14) = 0;
      v50 = v17;
      v19 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v52 = 0;
      v54 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v18 + v14) );
      }
      v20 = (const wchar_t *)*((_QWORD *)v4 + 10);
      v56 = v14 + 1;
      v35 = v4[18];
      v58 = &v35;
      LODWORD(v14) = 0;
      v55 = v19;
      v21 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v57 = 0;
      v59 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v20 + v14) );
      }
      v22 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v61 = v14 + 1;
      LODWORD(v14) = 0;
      v60 = v21;
      v23 = &word_18021F3A8;
      v62 = 0;
      if ( v22 )
      {
        v23 = v22;
        v14 = -1LL;
        do
          ++v14;
        while ( v22[v14] );
      }
      v24 = (const wchar_t *)*((_QWORD *)v4 + 13);
      v64 = 2 * v14 + 2;
      v36 = v4[24];
      v66 = &v36;
      LODWORD(v14) = 0;
      v63 = v23;
      v25 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v65 = 0;
      v67 = 4LL;
      if ( v24 )
      {
        v25 = v24;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v24 + v14) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v69 = v14 + 1;
      LODWORD(v14) = 0;
      v68 = v25;
      v70 = 0;
      if ( v26 )
      {
        v16 = v26;
        v14 = -1LL;
        do
          ++v14;
        while ( v26[v14] );
      }
      v27 = (const wchar_t *)*((_QWORD *)v4 + 5);
      v72 = 2 * v14 + 2;
      v30 = v4[2];
      v74 = &v30;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v14) = 0;
      v71 = v16;
      v73 = 0;
      v75 = 4LL;
      v77 = 4LL;
      if ( v27 )
      {
        v8 = v27;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v27 + v14) );
      }
      v78 = v8;
      v79 = v14 + 1;
      v80 = 0;
      TlgWrite(v6, &unk_180260100, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v28 = HolographicPositionerProvider::Provider();
    if ( *(_DWORD *)v28 > 4u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v82 = &SRWLock;
      v83 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v85 = 4LL;
      v30 = CurrentThreadId;
      v84 = &v30;
      TlgWrite(v28, &unk_18026024B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v81);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground *)((char *)this + 8));
}
