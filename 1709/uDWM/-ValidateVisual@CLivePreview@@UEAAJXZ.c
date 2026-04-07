/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180069C00
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180016BC0 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180018C40 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180035C7C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x18006A478 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18006A534 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18006A5EC (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x18006B7AC (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x18006CFB8 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  CBaseObject *v6; // rcx
  int v7; // eax
  int v8; // eax
  unsigned int i; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax

  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x695u);
    return v3;
  }
  if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
  {
    if ( !*((_DWORD *)this + 141)
      && *((_DWORD *)this + 146) == 3
      && (unsigned __int8)EtwEventEnabled(
                            Microsoft_Windows_Dwm_Udwm_Provider_Context,
                            &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info)
      && !GetSystemMetrics(8193) )
    {
      CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 145);
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 58) + 72LL) )
    {
      if ( *((_DWORD *)this + 82)
        && (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Stop) )
      {
        CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 144);
      }
      if ( *((_DWORD *)this + 146) == 4 )
      {
        CLivePreview::_ClearAnimatedVisuals(this);
        v4 = CLivePreview::_CleanupClonedVisualTree(this);
        v3 = v4;
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x6ACu);
          return v3;
        }
        v5 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
        v3 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6ADu);
          return v3;
        }
        CLivePreview::_ReleasePerMonitorResources(this);
        v6 = (CBaseObject *)*((_QWORD *)this + 69);
        if ( v6 )
        {
          CBaseObject::Release(v6);
          *((_QWORD *)this + 69) = 0LL;
        }
        v7 = CRenderDataVisual::ClearInstructions(this);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x6B2u);
          return v3;
        }
      }
      *((_DWORD *)this + 141) = 0;
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    }
    else
    {
      ++*((_DWORD *)this + 141);
    }
    CLivePreviewTimeline::GetCurrentOpacity(*((CLivePreviewTimeline **)this + 58));
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 59) + 16LL) + 296LL))(
           *(_QWORD *)(*((_QWORD *)this + 59) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 59) + 24LL));
    v3 = v8;
    if ( v8 >= 0 )
    {
      if ( *((_BYTE *)this + 281) )
      {
        for ( i = 0; i < *((_DWORD *)this + 114); ++i )
        {
          v10 = *((_QWORD *)this + 54);
          v11 = 32LL * i;
          if ( *(_BYTE *)(v11 + v10 + 24) )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + v10) + 88LL))(*(_QWORD *)(v11 + v10));
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 88LL))(*((_QWORD *)this + 65));
        CVisual::RenderRecursive(*((CVisual **)this + 63));
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 60) + 16LL) + 296LL))(
              *(_QWORD *)(*((_QWORD *)this + 60) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 60) + 24LL));
      v3 = v12;
      if ( v12 >= 0 )
        *((_DWORD *)this + 20) &= ~0x2000u;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x6D6u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6C1u);
    }
  }
  return v3;
}
