/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180016770 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180016908 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x180016C90 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016D30 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016E00 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18001B3A0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18008C290 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B734C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1801348A4 (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x18018EB40 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRenderTargets(CDesktopRenderTarget *this, bool *a2)
{
  CDisplaySet *v2; // r14
  char v3; // dl
  int v5; // r13d
  int v6; // edi
  unsigned int v7; // esi
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdi
  struct CDisplay *v11; // r15
  unsigned int v12; // r8d
  unsigned int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx
  struct CDisplay *v16; // rdi
  bool v17; // si
  bool v18; // dl
  int v19; // eax
  int v20; // edi
  unsigned int v21; // r15d
  int *v22; // rsi
  __int64 (__fastcall *v23)(CHwndRenderTarget *__hidden); // rax
  int v24; // eax
  int *v25; // rsi
  int v26; // r9d
  int v27; // ecx
  int v28; // r8d
  BOOL v29; // eax
  int v30; // eax
  void *v31; // rcx
  int RenderTargets; // eax
  unsigned int v34; // edi
  int CurrentDisplaySet; // eax
  __int64 v36; // r12
  CHwndRenderTarget *v37; // r15
  int inited; // esi
  HMONITOR v39; // rdx
  int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // r8d
  struct CRenderTarget *v43; // rdx
  struct CRenderTarget **v44; // rax
  unsigned int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  int v48; // ecx
  int v49; // edx
  unsigned int v50; // [rsp+20h] [rbp-49h]
  unsigned int v51; // [rsp+20h] [rbp-49h]
  unsigned int v52; // [rsp+20h] [rbp-49h]
  char v53; // [rsp+28h] [rbp-41h]
  char v54; // [rsp+28h] [rbp-41h]
  char v55; // [rsp+30h] [rbp-39h]
  char v56; // [rsp+30h] [rbp-39h]
  char v57; // [rsp+40h] [rbp-29h]
  bool v58; // [rsp+41h] [rbp-28h]
  char v59; // [rsp+42h] [rbp-27h]
  struct CDisplay *v60; // [rsp+44h] [rbp-25h]
  int v61; // [rsp+4Ch] [rbp-1Dh]
  struct CRenderTarget *v62; // [rsp+50h] [rbp-19h] BYREF
  int v63; // [rsp+58h] [rbp-11h]
  unsigned int v64; // [rsp+5Ch] [rbp-Dh]
  struct CDisplaySet *v65; // [rsp+60h] [rbp-9h] BYREF
  bool *v66; // [rsp+68h] [rbp-1h]
  struct CDisplay *v67[2]; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0LL;
  v66 = a2;
  v3 = 0;
  v65 = 0LL;
  v58 = 0;
  v5 = 0;
  v59 = 0;
  v57 = 0;
  v61 = 0;
  v63 = 0;
  v60 = 0LL;
  if ( *((_BYTE *)this + 200) )
  {
    *((_BYTE *)this + 200) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 112));
    v34 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, RenderTargets, 0x44Bu);
      return v34;
    }
    v3 = 0;
    v58 = *((_DWORD *)this + 8) != 0;
  }
  v6 = *((_DWORD *)this + 32) - 1;
  if ( v6 < 0 )
    goto LABEL_3;
  v36 = 8LL * v6;
  do
  {
    v37 = *(CHwndRenderTarget **)(v36 + *((_QWORD *)this + 13));
    if ( CDesktopRenderTarget::FindDisplayNoRef((CDesktopRenderTarget *)((char *)this - 112), v37) )
    {
      v55 = *((_BYTE *)this + 265);
      v53 = *((_BYTE *)this + 252);
      v50 = *((_DWORD *)this + 58);
      *(_OWORD *)v67 = *(_OWORD *)((char *)this + 236);
      inited = CHwndRenderTarget::InitFullScreen(v37, v50, v53, v55);
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, inited, 0x462u);
      }
      else
      {
        inited = CDesktopRenderTarget::AddRenderTarget((CDesktopRenderTarget *)((char *)this - 112), v37);
        if ( inited >= 0 )
        {
          DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt((char *)this + 104, (unsigned int)v6);
          ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v37);
          v3 = 1;
          v57 = 1;
          goto LABEL_62;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, inited, 0x464u);
      }
      return (unsigned int)inited;
    }
    v3 = v57;
LABEL_62:
    v36 -= 8LL;
    --v6;
  }
  while ( v6 >= 0 );
  v5 = v63;
LABEL_3:
  v7 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    v8 = v64;
    while ( 1 )
    {
      v9 = *((_QWORD *)this + 1);
      v64 = v8;
      v10 = *(_QWORD *)(v9 + 8LL * v7);
      v62 = (struct CRenderTarget *)v10;
      v11 = *(struct CDisplay **)(v10 + 112);
      if ( qword_18026EEA8 )
      {
        v12 = *((_DWORD *)qword_18026EEA8 + 18);
        v13 = 0;
        if ( v12 )
          break;
      }
LABEL_9:
      if ( *(_BYTE *)(*((_QWORD *)this - 12) + 1297LL)
        || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 192LL))(v10) )
      {
        goto LABEL_69;
      }
      v14 = *(_DWORD *)(v10 + 464);
      v15 = (unsigned int)(*((_DWORD *)qword_18026EEA8 + 18) - 1);
      if ( (int)v15 < 0 )
      {
LABEL_68:
        v16 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v16 = *(struct CDisplay **)(*((_QWORD *)qword_18026EEA8 + 6) + 8 * v15);
          if ( *((_DWORD *)v16 + 61) == v14 )
            break;
          v15 = (unsigned int)(v15 - 1);
          if ( (int)v15 < 0 )
            goto LABEL_68;
        }
      }
LABEL_13:
      if ( v11 == v16 )
        goto LABEL_14;
      CDesktopRenderTarget::ResetRenderTarget((CDesktopRenderTarget *)((char *)this - 112), v62);
      v59 = 1;
      if ( v16 )
      {
        v56 = *((_BYTE *)this + 265);
        v54 = *((_BYTE *)this + 252);
        v51 = *((_DWORD *)this + 58);
        *(_OWORD *)v67 = *(_OWORD *)((char *)this + 236);
        v40 = CHwndRenderTarget::InitFullScreen(v62, v51, v54, v56);
        if ( v40 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v40, 0x482u);
LABEL_14:
        v3 = v57;
        goto LABEL_15;
      }
      v41 = *((unsigned int *)this + 32);
      v42 = 0;
      if ( (_DWORD)v41 )
      {
        v43 = v62;
        v44 = (struct CRenderTarget **)*((_QWORD *)this + 13);
        while ( v62 != *v44 )
        {
          ++v42;
          ++v44;
          if ( v42 >= (unsigned int)v41 )
            goto LABEL_77;
        }
      }
      else
      {
LABEL_77:
        v45 = v41 + 1;
        v8 = v41 + 1;
        if ( (int)v41 + 1 < (unsigned int)v41 )
          v8 = v64;
        v20 = v45 < (unsigned int)v41 ? 0x80070216 : 0;
        if ( v45 < (unsigned int)v41 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xB5u);
        }
        else if ( v8 > *((_DWORD *)this + 31) )
        {
          v46 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 104, 8LL, 1LL, &v62);
          v20 = v46;
          if ( v46 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v41) = v62;
          *((_DWORD *)this + 32) = v8;
        }
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v20, 0x48Cu);
          goto LABEL_89;
        }
        v43 = v62;
      }
      CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this - 12) + 72LL), v43);
      DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 8, &v62);
      v3 = 1;
      --v7;
      v57 = 1;
LABEL_15:
      if ( ++v7 >= *((_DWORD *)this + 8) )
      {
        v5 = v63;
        goto LABEL_17;
      }
    }
    while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_18026EEA8 + 6) + 8LL * v13) + 208LL) )
    {
      if ( ++v13 >= v12 )
        goto LABEL_9;
    }
LABEL_69:
    v39 = *(HMONITOR *)(v10 + 472);
    v67[0] = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(qword_18026EEA8, v39, v67);
    v16 = v67[0];
    goto LABEL_13;
  }
LABEL_17:
  v17 = v58;
  v18 = v58 || v3;
  v19 = CDesktopRenderTarget::ConfigureMitOuputRectangles((CDesktopRenderTarget *)((char *)this - 112), v18);
  v20 = v19;
  if ( v19 < 0 )
  {
    v52 = 1176;
    goto LABEL_113;
  }
  v21 = 0;
  if ( !*((_DWORD *)this + 8) )
  {
    v30 = 0;
LABEL_39:
    *((float *)this + 52) = (float)SHIDWORD(v60);
    *((float *)this + 51) = (float)v30;
    *((float *)this + 53) = (float)v5;
    *((float *)this + 54) = (float)v61;
    v19 = CDesktopRenderTarget::EnsureRemoteAppRenderTargets((CDesktopRenderTarget *)((char *)this - 112));
    v20 = v19;
    if ( v19 >= 0 )
    {
      v31 = (void *)*((_QWORD *)this + 34);
      if ( v31 )
      {
        if ( !v17 )
          goto LABEL_42;
        SetEvent(v31);
      }
      if ( v17 )
      {
LABEL_53:
        CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)v31, &v65);
        v20 = CurrentDisplaySet;
        if ( CurrentDisplaySet < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, CurrentDisplaySet, 0x4BBu);
          v2 = v65;
          goto LABEL_44;
        }
        v2 = v65;
        CDXGIEnumeration::UpdateFeatureLevels(*((CDXGIEnumeration **)v65 + 2));
LABEL_43:
        *v66 = *((_BYTE *)this + 203);
        *((_BYTE *)this + 203) = 0;
        goto LABEL_44;
      }
LABEL_42:
      if ( !v57 )
        goto LABEL_43;
      goto LABEL_53;
    }
    v52 = 1197;
LABEL_113:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v19, v52);
    goto LABEL_44;
  }
  while ( 1 )
  {
    v22 = *(int **)(*((_QWORD *)this + 1) + 8LL * v21);
    v23 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v22 + 304LL);
    v24 = v23 == CHwndRenderTarget::EnsureRenderTarget
        ? CHwndRenderTarget::EnsureRenderTarget((CHwndRenderTarget *)v22)
        : ((__int64 (__fastcall *)(int *, __int64 (__fastcall *)(CHwndRenderTarget *__hidden)))v23)(
            v22,
            CHwndRenderTarget::EnsureRenderTarget);
    v20 = v24;
    if ( v24 < 0 )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v22 + 200LL))(v22)
      || (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v22 + 192LL))(v22)
      || *(_BYTE *)(*((_QWORD *)v22 + 2) + 1297LL) )
    {
      v25 = (int *)(*((_QWORD *)v22 + 14) + 96LL);
    }
    else
    {
      v25 = v22 + 103;
    }
    v26 = (int)v60;
    if ( v5 <= (int)v60 || (v27 = 0, v61 <= SHIDWORD(v60)) )
      v27 = 1;
    v28 = v25[2];
    v29 = v28 <= *v25 || v25[3] <= v25[1];
    if ( v27 )
    {
      if ( v29 )
      {
        v30 = 0;
        v61 = 0;
        v60 = 0LL;
        v5 = 0;
      }
      else
      {
        *(_OWORD *)v67 = *(_OWORD *)v25;
        v30 = (int)v67[0];
        v5 = (int)v67[1];
        v61 = HIDWORD(v67[1]);
        v60 = v67[0];
      }
    }
    else
    {
      if ( !v29 )
      {
        v48 = v61;
        if ( *v25 < (int)v60 )
          v26 = *v25;
        v49 = HIDWORD(v60);
        LODWORD(v60) = v26;
        if ( v25[1] < SHIDWORD(v60) )
          v49 = v25[1];
        HIDWORD(v60) = v49;
        if ( v28 > v5 )
          v5 = v25[2];
        if ( v25[3] > v61 )
          v48 = v25[3];
        v61 = v48;
      }
      v30 = (int)v60;
    }
    if ( ++v21 >= *((_DWORD *)this + 8) )
    {
      v17 = v58;
      goto LABEL_39;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v24, 0x49Eu);
LABEL_44:
  if ( v59 )
  {
LABEL_89:
    v47 = *(_QWORD *)(*((_QWORD *)this - 12) + 352LL);
    if ( v47 )
      *(_BYTE *)(v47 + 28) = 1;
  }
  if ( v2 )
    CDisplaySet::Release(v2);
  return (unsigned int)v20;
}
