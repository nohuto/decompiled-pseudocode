/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180009AFC (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x18002C9D0 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002E2A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E490 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18002E6F4 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002E828 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002ED4C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003461C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180081AD8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x180091D60 (_lambda_9b37f3d03e1ad1f523dfdba086665a20_--operator().c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800196E0 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18002D790 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x18002ECE4 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x1800351A0 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800763BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     Template_qp @ 0x180077E2C (Template_qp.c)
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
  __int64 v12; // rax
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
      Template_qp(this, &UdwmAnimation_Stop, *(unsigned int *)(this + 368));
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x522u);
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
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
              (struct CWindowData *)v4);
      v3 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x538u);
    }
    else
    {
      v6 = v5 & 1;
      if ( !v6
        || ((v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54), !*((_BYTE *)v10 + 280))
         || !v4
          ? (v11 = 0)
          : (v11 = CLivePreview::_IsInLivePreview(v10, (const struct CWindowData *)v4)),
            !v11) )
      {
        v7 = *(CTopLevelWindow **)(v4 + 400);
        if ( v7 )
        {
          LOBYTE(v4) = v6;
          v8 = CTopLevelWindow::ShowWindow(v7, v4);
          v3 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x533u);
        }
      }
    }
  }
  return v3;
}
