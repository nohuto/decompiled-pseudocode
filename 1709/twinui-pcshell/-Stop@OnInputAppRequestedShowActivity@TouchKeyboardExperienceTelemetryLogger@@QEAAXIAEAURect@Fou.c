/*
 * XREFs of ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Foundation@Windows@@@Z @ 0x1801A9BF4
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1801A3610 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801A1334 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *this,
        int a2,
        struct Windows::Foundation::Rect *a3)
{
  int *v3; // rbx
  int v6; // eax
  int *v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  const struct _TlgProvider_t *v9; // rax
  const struct _TlgProvider_t *v10; // r10
  const wchar_t *v11; // r8
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  const WCHAR *v17; // rcx
  const WCHAR *v18; // r9
  const WCHAR *v19; // rdx
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rdx
  const wchar_t *v22; // rcx
  const wchar_t *v23; // rdx
  const WCHAR *v24; // rcx
  const WCHAR *v25; // rdx
  const wchar_t *v26; // rcx
  const WCHAR *v27; // rcx
  const struct _TlgProvider_t *v28; // rax
  const struct _TlgProvider_t *v29; // rbx
  int v30; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v32; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  const wchar_t *v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  int *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  const wchar_t *v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  int *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  const WCHAR *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  int *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  const wchar_t *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  DWORD *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  const wchar_t *v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+118h] [rbp+18h]
  int v65; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  const wchar_t *v68; // [rsp+130h] [rbp+30h]
  int v69; // [rsp+138h] [rbp+38h]
  int v70; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v71; // [rsp+140h] [rbp+40h]
  int v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+14Ch] [rbp+4Ch]
  int *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  struct Windows::Foundation::Rect *v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  char *v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  char *v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  char *v82; // [rsp+190h] [rbp+90h]
  __int64 v83; // [rsp+198h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v84; // [rsp+1A0h] [rbp+A0h] BYREF
  PSRWLOCK *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  DWORD *v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1D8h] [rbp+D8h]
  int *v89; // [rsp+1E0h] [rbp+E0h]
  __int64 v90; // [rsp+1E8h] [rbp+E8h]
  struct Windows::Foundation::Rect *v91; // [rsp+1F0h] [rbp+F0h]
  __int64 v92; // [rsp+1F8h] [rbp+F8h]
  char *v93; // [rsp+200h] [rbp+100h]
  __int64 v94; // [rsp+208h] [rbp+108h]
  char *v95; // [rsp+210h] [rbp+110h]
  __int64 v96; // [rsp+218h] [rbp+118h]
  char *v97; // [rsp+220h] [rbp+120h]
  __int64 v98; // [rsp+228h] [rbp+128h]
  int v99; // [rsp+278h] [rbp+178h] BYREF

  v99 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v6 = v3[19];
  if ( v6 < 0 && v6 == v3[21] )
    v7 = v3 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v7 )
  {
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v9 = TouchKeyboardExperienceTraceLogging::Provider();
    v10 = v9;
    if ( *(_DWORD *)v9 > 5u
      && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x400000000000LL) == *((_QWORD *)v9 + 3) )
    {
      v11 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v12 = (const wchar_t *)*((_QWORD *)v7 + 6);
      v34 = v7[1];
      v38 = &v34;
      LODWORD(v13) = 0;
      v39 = 4LL;
      v14 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      if ( v12 )
      {
        v14 = v12;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v12 + v13) );
      }
      v15 = (const wchar_t *)*((_QWORD *)v7 + 15);
      v41 = v13 + 1;
      v43 = v7 + 14;
      LODWORD(v13) = 0;
      v40 = v14;
      v16 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v42 = 0;
      v44 = 4LL;
      if ( v15 )
      {
        v16 = v15;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v15 + v13) );
      }
      v17 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v18 = &word_18021F3A8;
      v45 = v16;
      v46 = v13 + 1;
      v19 = &word_18021F3A8;
      v35 = *v7;
      v48 = &v35;
      LODWORD(v13) = 0;
      v47 = 0;
      v49 = 4LL;
      if ( v17 )
      {
        v19 = v17;
        v13 = -1LL;
        do
          ++v13;
        while ( v17[v13] );
      }
      v20 = (const wchar_t *)*((_QWORD *)v7 + 8);
      v51 = 2 * v13 + 2;
      v36 = v7[6];
      v53 = &v36;
      LODWORD(v13) = 0;
      v50 = v19;
      v21 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v52 = 0;
      v54 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v20 + v13) );
      }
      v22 = (const wchar_t *)*((_QWORD *)v7 + 10);
      v56 = v13 + 1;
      v32 = v7[18];
      v58 = &v32;
      LODWORD(v13) = 0;
      v55 = v21;
      v23 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v57 = 0;
      v59 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v22 + v13) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v7 + 11);
      v61 = v13 + 1;
      LODWORD(v13) = 0;
      v60 = v23;
      v25 = &word_18021F3A8;
      v62 = 0;
      if ( v24 )
      {
        v25 = v24;
        v13 = -1LL;
        do
          ++v13;
        while ( v24[v13] );
      }
      v26 = (const wchar_t *)*((_QWORD *)v7 + 13);
      v64 = 2 * v13 + 2;
      LODWORD(SRWLock) = v7[24];
      p_SRWLock = &SRWLock;
      LODWORD(v13) = 0;
      v63 = v25;
      v65 = 0;
      v67 = 4LL;
      if ( v26 )
      {
        v11 = v26;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v26 + v13) );
      }
      v27 = (const WCHAR *)*((_QWORD *)v7 + 14);
      v69 = v13 + 1;
      LODWORD(v13) = 0;
      v68 = v11;
      v70 = 0;
      if ( v27 )
      {
        v18 = v27;
        v13 = -1LL;
        do
          ++v13;
        while ( v27[v13] );
      }
      v71 = v18;
      v72 = 2 * v13 + 2;
      v73 = 0;
      v74 = &v99;
      v75 = 4LL;
      v78 = (char *)a3 + 4;
      v80 = (char *)a3 + 8;
      v82 = (char *)a3 + 12;
      v76 = a3;
      v77 = 4LL;
      v79 = 4LL;
      v81 = 4LL;
      v83 = 4LL;
      TlgWrite(v10, &unk_180268297, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v28 = TouchKeyboardExperienceTraceLogging::Provider();
    v29 = v28;
    if ( *(_DWORD *)v28 > 5u
      && (*((_QWORD *)v28 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v28 + 3) & 0x400000000000LL) == *((_QWORD *)v28 + 3) )
    {
      v30 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v85 = &SRWLock;
      LODWORD(SRWLock) = v30;
      v86 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v88 = 4LL;
      v32 = CurrentThreadId;
      v90 = 4LL;
      v87 = &v32;
      v89 = &v99;
      v93 = (char *)a3 + 4;
      v95 = (char *)a3 + 8;
      v97 = (char *)a3 + 12;
      v91 = a3;
      v92 = 4LL;
      v94 = 4LL;
      v96 = 4LL;
      v98 = 4LL;
      TlgWrite(v29, &unk_18026821F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 9u, &v84);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)((char *)this + 8));
}
