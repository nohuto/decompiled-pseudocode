/*
 * XREFs of ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1801320D4
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18012F450 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18013FAE0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180141830 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180133084 (-Provider@WindowManagementLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::Stop(__int64 a1, int a2)
{
  int *v2; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r10
  const wchar_t *v10; // r8
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rcx
  const wchar_t *v15; // rdx
  void *v16; // rcx
  void *v17; // r9
  void *v18; // rdx
  const wchar_t *v19; // rcx
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rcx
  const wchar_t *v22; // rdx
  void *v23; // rcx
  void *v24; // rdx
  const wchar_t *v25; // rcx
  void *v26; // rcx
  const struct _TlgProvider_t *v27; // rax
  const struct _TlgProvider_t *v28; // rbx
  int v29; // ecx
  DWORD CurrentThreadId; // eax
  int v31; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v32; // [rsp+3Ch] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h]
  const wchar_t *v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+94h] [rbp-74h]
  int *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  const wchar_t *v45; // [rsp+A8h] [rbp-60h]
  int v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B4h] [rbp-54h]
  int *v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  void *v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+D0h] [rbp-38h]
  int v52; // [rsp+D4h] [rbp-34h]
  int *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  const wchar_t *v55; // [rsp+E8h] [rbp-20h]
  int v56; // [rsp+F0h] [rbp-18h]
  int v57; // [rsp+F4h] [rbp-14h]
  int *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  const wchar_t *v60; // [rsp+108h] [rbp+0h]
  int v61; // [rsp+110h] [rbp+8h]
  int v62; // [rsp+114h] [rbp+Ch]
  void *v63; // [rsp+118h] [rbp+10h]
  int v64; // [rsp+120h] [rbp+18h]
  int v65; // [rsp+124h] [rbp+1Ch]
  DWORD *v66; // [rsp+128h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+28h]
  const wchar_t *v68; // [rsp+138h] [rbp+30h]
  int v69; // [rsp+140h] [rbp+38h]
  int v70; // [rsp+144h] [rbp+3Ch]
  void *v71; // [rsp+148h] [rbp+40h]
  int v72; // [rsp+150h] [rbp+48h]
  int v73; // [rsp+154h] [rbp+4Ch]
  PSRWLOCK *p_SRWLock; // [rsp+158h] [rbp+50h]
  __int64 v75; // [rsp+160h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v76; // [rsp+178h] [rbp+70h] BYREF
  PSRWLOCK *v77; // [rsp+198h] [rbp+90h]
  __int64 v78; // [rsp+1A0h] [rbp+98h]
  DWORD *v79; // [rsp+1A8h] [rbp+A0h]
  __int64 v80; // [rsp+1B0h] [rbp+A8h]
  int *v81; // [rsp+1B8h] [rbp+B0h]
  __int64 v82; // [rsp+1C0h] [rbp+B8h]

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
    v8 = WindowManagementLogging::Provider();
    v9 = v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v10 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v11 = (const wchar_t *)*((_QWORD *)v6 + 6);
      v34 = v6[1];
      v38 = &v34;
      LODWORD(v12) = 0;
      v39 = 4LL;
      v13 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      if ( v11 )
      {
        v13 = v11;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v11 + v12) );
      }
      v14 = (const wchar_t *)*((_QWORD *)v6 + 15);
      v41 = v12 + 1;
      v43 = v6 + 14;
      LODWORD(v12) = 0;
      v40 = v13;
      v15 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v42 = 0;
      v44 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v14 + v12) );
      }
      v16 = (void *)*((_QWORD *)v6 + 2);
      v17 = &unk_1801C6ABC;
      v45 = v15;
      v46 = v12 + 1;
      v18 = &unk_1801C6ABC;
      v35 = *v6;
      v48 = &v35;
      LODWORD(v12) = 0;
      v47 = 0;
      v49 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)v16 + v12) );
      }
      v19 = (const wchar_t *)*((_QWORD *)v6 + 8);
      v51 = 2 * v12 + 2;
      v36 = v6[6];
      v53 = &v36;
      LODWORD(v12) = 0;
      v50 = v18;
      v20 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v52 = 0;
      v54 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v19 + v12) );
      }
      v21 = (const wchar_t *)*((_QWORD *)v6 + 10);
      v56 = v12 + 1;
      v31 = v6[18];
      v58 = &v31;
      LODWORD(v12) = 0;
      v55 = v20;
      v22 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v57 = 0;
      v59 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v21 + v12) );
      }
      v23 = (void *)*((_QWORD *)v6 + 11);
      v61 = v12 + 1;
      LODWORD(v12) = 0;
      v60 = v22;
      v24 = &unk_1801C6ABC;
      v62 = 0;
      if ( v23 )
      {
        v24 = v23;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)v23 + v12) );
      }
      v25 = (const wchar_t *)*((_QWORD *)v6 + 13);
      v64 = 2 * v12 + 2;
      v32 = v6[24];
      v66 = &v32;
      LODWORD(v12) = 0;
      v63 = v24;
      v65 = 0;
      v67 = 4LL;
      if ( v25 )
      {
        v10 = v25;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v25 + v12) );
      }
      v26 = (void *)*((_QWORD *)v6 + 14);
      v69 = v12 + 1;
      LODWORD(v12) = 0;
      v68 = v10;
      v70 = 0;
      if ( v26 )
      {
        v17 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)v26 + v12) );
      }
      v71 = v17;
      v72 = 2 * v12 + 2;
      v73 = 0;
      p_SRWLock = &SRWLock;
      LODWORD(SRWLock) = a2;
      v75 = 4LL;
      TlgWrite(v9, &unk_18020148F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v27 = WindowManagementLogging::Provider();
    v28 = v27;
    if ( *(_DWORD *)v27 > 5u
      && (*((_QWORD *)v27 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v27 + 3) & 0x400000000000LL) == *((_QWORD *)v27 + 3) )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v77 = &SRWLock;
      LODWORD(SRWLock) = v29;
      v78 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v80 = 4LL;
      v32 = CurrentThreadId;
      v31 = a2;
      v79 = &v32;
      v81 = &v31;
      v82 = 4LL;
      TlgWrite(v28, &unk_1802015A8, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &v76);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
