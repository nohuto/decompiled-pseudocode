/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180044A74 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180044C0C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x180044F8C (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800450B8 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x18005F3A8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180062824 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C7F24 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800CAC94 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800D74B8 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800D780C (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180158240 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRenderTargets(CDesktopRenderTarget *this, bool *a2)
{
  bool v3; // zf
  int v4; // esi
  __int64 v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // rbx
  struct CDisplay *v8; // r14
  unsigned int v9; // r8d
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  struct CDisplay *v13; // rbx
  bool v14; // r14
  bool v15; // dl
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // r12
  int *v19; // r14
  __int64 (__fastcall *v20)(CHwndRenderTarget *__hidden); // rax
  int v21; // eax
  int *v22; // r14
  int v23; // r8d
  int v24; // r9d
  BOOL v25; // ecx
  int v26; // edx
  BOOL v27; // eax
  void *v28; // rcx
  CDisplaySet *v29; // rsi
  int CurrentDisplaySet; // eax
  int RenderTargets; // eax
  __int64 v33; // r15
  CHwndRenderTarget *v34; // r14
  __int64 v35; // rcx
  unsigned int v36; // r8d
  unsigned int v37; // eax
  struct CRenderTarget *v38; // rdx
  __int64 v39; // rdx
  int inited; // eax
  int v41; // eax
  int v42; // eax
  struct CRenderTarget **v43; // rax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  unsigned int v47; // [rsp+20h] [rbp-49h]
  unsigned int v48; // [rsp+20h] [rbp-49h]
  char v49; // [rsp+28h] [rbp-41h]
  char v50; // [rsp+28h] [rbp-41h]
  char v51; // [rsp+30h] [rbp-39h]
  char v52; // [rsp+30h] [rbp-39h]
  char v53; // [rsp+40h] [rbp-29h]
  bool v54; // [rsp+41h] [rbp-28h]
  char v55; // [rsp+42h] [rbp-27h]
  int v56; // [rsp+44h] [rbp-25h]
  int v57; // [rsp+48h] [rbp-21h]
  int v58; // [rsp+4Ch] [rbp-1Dh]
  int v59; // [rsp+50h] [rbp-19h]
  struct CRenderTarget *v60; // [rsp+58h] [rbp-11h] BYREF
  CDisplaySet *v61; // [rsp+60h] [rbp-9h] BYREF
  bool *v62; // [rsp+68h] [rbp-1h]
  struct CDisplay *v63[2]; // [rsp+70h] [rbp+7h] BYREF

  v61 = 0LL;
  v57 = 0;
  v58 = 0;
  v56 = 0;
  v59 = 0;
  v3 = *((_BYTE *)this + 104) == 0;
  v62 = a2;
  v54 = 0;
  v55 = 0;
  v53 = 0;
  if ( !v3 )
  {
    *((_BYTE *)this + 104) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 168));
    v17 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, RenderTargets, 0x400u);
      return v17;
    }
    v54 = *((_DWORD *)this + 8) != 0;
  }
  v4 = *((_DWORD *)this + 20) - 1;
  if ( v4 >= 0 )
  {
    v33 = 8LL * v4;
    do
    {
      v34 = *(CHwndRenderTarget **)(v33 + *((_QWORD *)this + 7));
      if ( CDesktopRenderTarget::FindDisplayNoRef((CDesktopRenderTarget *)((char *)this - 168), v34) )
      {
        v51 = *((_BYTE *)this + 161);
        v49 = *((_BYTE *)this + 144);
        v47 = *((_DWORD *)this + 31);
        *(_OWORD *)v63 = *((_OWORD *)this + 8);
        inited = CHwndRenderTarget::InitFullScreen(v34, v47, v49, v51);
        v17 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, inited, 0x417u);
          return v17;
        }
        v41 = CDesktopRenderTarget::AddHwndRenderTarget((CDesktopRenderTarget *)((char *)this - 168), v34);
        v17 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v41, 0x419u);
          return v17;
        }
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt((char *)this + 56, (unsigned int)v4);
        ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v34);
        v53 = 1;
      }
      v33 -= 8LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  v5 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v5);
      v60 = (struct CRenderTarget *)v7;
      v8 = *(struct CDisplay **)(v7 + 168);
      if ( qword_1802D6428 )
      {
        v9 = *((_DWORD *)qword_1802D6428 + 18);
        v10 = 0LL;
        if ( v9 )
          break;
      }
LABEL_9:
      if ( *(_BYTE *)(*((_QWORD *)this - 19) + 1345LL)
        || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7) )
      {
        goto LABEL_56;
      }
      v11 = *(_DWORD *)(v7 + 512);
      v12 = (unsigned int)(*((_DWORD *)qword_1802D6428 + 18) - 1);
      if ( (int)v12 < 0 )
      {
LABEL_58:
        v13 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v13 = *(struct CDisplay **)(*((_QWORD *)qword_1802D6428 + 6) + 8 * v12);
          if ( *((_DWORD *)v13 + 66) == v11 )
            break;
          v12 = (unsigned int)(v12 - 1);
          if ( (int)v12 < 0 )
            goto LABEL_58;
        }
      }
LABEL_13:
      if ( v8 != v13 )
      {
        CDesktopRenderTarget::ResetRenderTarget((CDesktopRenderTarget *)((char *)this - 168), v60);
        v55 = 1;
        if ( v13 )
        {
          v52 = *((_BYTE *)this + 161);
          v50 = *((_BYTE *)this + 144);
          v48 = *((_DWORD *)this + 31);
          *(_OWORD *)v63 = *((_OWORD *)this + 8);
          v42 = CHwndRenderTarget::InitFullScreen(v60, v48, v50, v52);
          if ( v42 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v42, 0x437u);
        }
        else
        {
          v35 = *((unsigned int *)this + 20);
          v36 = 0;
          if ( (_DWORD)v35 )
          {
            v38 = v60;
            v43 = (struct CRenderTarget **)*((_QWORD *)this + 7);
            while ( v60 != *v43 )
            {
              ++v36;
              ++v43;
              if ( v36 >= (unsigned int)v35 )
                goto LABEL_61;
            }
          }
          else
          {
LABEL_61:
            v37 = v35 + 1;
            if ( (int)v35 + 1 >= (unsigned int)v35 )
              v6 = v35 + 1;
            v17 = v37 < (unsigned int)v35 ? 0x80070216 : 0;
            if ( v37 < (unsigned int)v35 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xB5u);
            }
            else if ( v6 > *((_DWORD *)this + 19) )
            {
              v44 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, &v60);
              v17 = v44;
              if ( v44 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v35) = v60;
              *((_DWORD *)this + 20) = v6;
            }
            if ( (v17 & 0x80000000) != 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v17, 0x441u);
              v29 = v61;
              goto LABEL_69;
            }
            v38 = v60;
          }
          CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this - 19) + 72LL), v38);
          DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 8, &v60);
          LODWORD(v5) = v5 - 1;
          v53 = 1;
        }
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)this + 8) )
        goto LABEL_15;
    }
    while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_1802D6428 + 6) + 8 * v10) + 232LL) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v9 )
        goto LABEL_9;
    }
LABEL_56:
    v63[0] = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(qword_1802D6428, *(HMONITOR *)(v7 + 520), v63);
    v13 = v63[0];
    goto LABEL_13;
  }
LABEL_15:
  v14 = v54;
  v15 = v54 || v53;
  v16 = CDesktopRenderTarget::ConfigureMitOuputRectangles((CDesktopRenderTarget *)((char *)this - 168), v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v16, 0x44Du);
    goto LABEL_106;
  }
  v18 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v19 = *(int **)(*((_QWORD *)this + 1) + 8 * v18);
      v20 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v19 + 232LL);
      v21 = v20 == CHwndRenderTarget::EnsureRenderTarget
          ? CHwndRenderTarget::EnsureRenderTarget((CHwndRenderTarget *)v19)
          : v20((CHwndRenderTarget *)v19);
      v17 = v21;
      if ( v21 < 0 )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v19 + 216LL))(v19)
        || *(_BYTE *)(*((_QWORD *)v19 + 2) + 1345LL) )
      {
        v22 = (int *)(*((_QWORD *)v19 + 21) + 120LL);
      }
      else
      {
        v22 = v19 + 117;
      }
      v23 = v58;
      v24 = v59;
      v25 = v58 <= v59 || v57 <= v56;
      v26 = v22[2];
      v27 = v26 <= *v22 || v22[3] <= v22[1];
      if ( v25 )
      {
        if ( v27 )
        {
          v57 = 0;
          v58 = 0;
          v56 = 0;
          v59 = 0;
        }
        else
        {
          *(_OWORD *)v63 = *(_OWORD *)v22;
          v57 = HIDWORD(v63[1]);
          v58 = (int)v63[1];
          v56 = HIDWORD(v63[0]);
          v59 = (int)v63[0];
        }
      }
      else if ( !v27 )
      {
        v45 = v56;
        if ( *v22 < v59 )
          v24 = *v22;
        v46 = v57;
        if ( v22[1] < v56 )
          v45 = v22[1];
        v59 = v24;
        if ( v26 > v58 )
          v23 = v22[2];
        v56 = v45;
        v58 = v23;
        if ( v22[3] > v57 )
          v46 = v22[3];
        v57 = v46;
      }
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= *((_DWORD *)this + 8) )
      {
        v14 = v54;
        goto LABEL_36;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v21, 0x453u);
    goto LABEL_106;
  }
LABEL_36:
  v28 = (void *)*((_QWORD *)this + 21);
  *((float *)this + 27) = (float)v59;
  *((float *)this + 28) = (float)v56;
  *((float *)this + 29) = (float)v58;
  *((float *)this + 30) = (float)v57;
  if ( v28 )
  {
    if ( !v14 )
      goto LABEL_38;
    SetEvent(v28);
  }
  if ( v14 )
    goto LABEL_48;
LABEL_38:
  if ( v53 )
  {
LABEL_48:
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)v28, &v61);
    v17 = CurrentDisplaySet;
    if ( CurrentDisplaySet >= 0 )
    {
      v29 = v61;
      CDXGIEnumeration::UpdateFeatureLevels(*((CDXGIEnumeration **)v61 + 2));
      goto LABEL_40;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, CurrentDisplaySet, 0x469u);
LABEL_106:
    v29 = v61;
    goto LABEL_41;
  }
  v29 = v61;
LABEL_40:
  *v62 = *((_BYTE *)this + 107);
  *((_BYTE *)this + 107) = 0;
LABEL_41:
  if ( v55 )
  {
LABEL_69:
    v39 = *(_QWORD *)(*((_QWORD *)this - 19) + 376LL);
    if ( v39 )
      *(_BYTE *)(v39 + 20) = 1;
  }
  if ( v29 )
    CDisplaySet::Release(v29);
  return v17;
}
