/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020F40
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180006D9C (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180020EF0 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800229E0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180022C44 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022D78 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002328C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800795AC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x18008DDC0 (_lambda_9b37f3d03e1ad1f523dfdba086665a20_--operator().c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180021CC0 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180023224 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x1800278DC (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180035C7C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B6BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(unsigned __int64 this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  char v5; // r11
  char v6; // r11
  CTopLevelWindow *v7; // rcx
  int v8; // eax
  CLivePreview *v10; // rcx
  bool v11; // al
  __int64 v12; // rcx
  char v13; // cl
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  bool v19; // al
  int v20; // ecx
  void (__fastcall *v21)(CVisual *, int); // rax
  int v22; // eax
  _QWORD v23[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(this + 360) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(this, &UdwmAnimation_Stop, *(unsigned int *)(this + 368));
    CTopLevelWindow3D::GetScenarioGuid(this, *(unsigned int *)(this + 368), v23);
    v12 = v23[0] - *(_QWORD *)&GUID_NULL.Data1;
    if ( v23[0] == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = v23[1] - *(_QWORD *)GUID_NULL.Data4;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD, _QWORD *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 4)
                                                                 + 232LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
        v23,
        this | 0xD100000000000000uLL);
    v13 = CDesktopManager::s_fTimelineDirty;
    v14 = (__int64 *)(this + 376);
    v15 = 10LL;
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        v17 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v17 )
          v13 = 1;
        *v14 = 0LL;
        CDesktopManager::s_fTimelineDirty = v13;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    v18 = *(_QWORD *)(this + 360);
    if ( v18 )
    {
      v17 = (*(_DWORD *)(v18 + 8))-- == 1;
      v19 = v13;
      if ( v17 )
        v19 = 1;
      *(_QWORD *)(this + 360) = 0LL;
      CDesktopManager::s_fTimelineDirty = v19;
    }
    if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
      --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
    v20 = *(_DWORD *)(this + 368);
    if ( v20 == 9 && !*(_BYTE *)(this + 288) || *(_DWORD *)(this + 372) && (unsigned int)(v20 - 7) > 2 )
      *(_OWORD *)(this + 308) = *(_OWORD *)(*(_QWORD *)(this + 328) + 48LL);
    if ( (unsigned int)(v20 - 7) > 2 )
      *(_DWORD *)(this + 372) = 0;
    *(_DWORD *)(this + 368) = 0;
  }
  else if ( *(_BYTE *)(this + 480) && CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
  {
    *(_BYTE *)(this + 480) = 0;
  }
  v2 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x522u);
  }
  else
  {
    CTopLevelWindow3D::ReleaseSceneObjects((CTopLevelWindow3D *)this);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(double *)(this + 184) - 1.0)) & _xmm) > 0.0000011920929 )
    {
      *(_QWORD *)(this + 184) = 0x3FF0000000000000LL;
      v21 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
      if ( v21 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags((CVisual *)this, 32);
      else
        v21((CVisual *)this, 32);
    }
    v4 = *(_QWORD *)(this + 328);
    v5 = *(_BYTE *)(v4 + 592);
    if ( (v5 & 4) != 0 )
    {
      v22 = CWindowList::QueueDestroySprite(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
              (struct CWindowData *)v4);
      v3 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x538u);
    }
    else
    {
      v6 = v5 & 1;
      if ( !v6
        || ((v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60), !*((_BYTE *)v10 + 280))
         || !v4
          ? (v11 = 0)
          : (v11 = CLivePreview::_IsInLivePreview(v10, (const struct CWindowData *)v4)),
            !v11) )
      {
        v7 = *(CTopLevelWindow **)(v4 + 400);
        if ( v7 )
        {
          v8 = CTopLevelWindow::ShowWindow(v7, v6);
          v3 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x533u);
        }
      }
    }
  }
  return v3;
}
