/*
 * XREFs of ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800913C0
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800290D0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x180090434 (--1CScreenRotation@@MEAA@XZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18009046C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800908C0 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x180090CF0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x180090E10 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18002D530 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18002D7BC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18002DFB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030830 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800907C4 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

void __fastcall CScreenRotation::Stop(CScreenRotation *this, char a2)
{
  CAnimationEngine *v4; // rax
  __int64 v5; // rcx
  CAnimationEngine *v6; // rdi
  int v7; // edx
  int v8; // edx
  bool v9; // zf
  __int128 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  CScreenRotation::CleanupTimeline(this);
  v4 = CDesktopManager::AcquireAnimationEngine();
  v6 = v4;
  if ( v4 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(
      v4,
      (struct IAnimationListener *)(((unsigned __int64)this + 280) & -(__int64)(this != 0LL)));
    v7 = *((_DWORD *)this + 89);
    if ( v7 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v6, v7);
      *((_DWORD *)this + 89) = -1;
    }
    v8 = *((_DWORD *)this + 90);
    if ( v8 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v6, v8);
      *((_DWORD *)this + 90) = -1;
    }
    CAnimationEngine::Release(v6);
  }
  v9 = *((_BYTE *)this + 328) == 0;
  *((_BYTE *)this + 329) = 0;
  if ( !v9 )
  {
    v9 = *((_BYTE *)this + 380) == 0;
    *((_BYTE *)this + 328) = 0;
    if ( v9 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_14;
      v10 = (__int128 *)&UdwmScreenRotation_Animation_Stop;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_14;
      v10 = (__int128 *)&UdwmHardwareExpression_Animation_Stop;
    }
    McTemplateU0d(v5, v10, *((_DWORD *)this + 86));
  }
LABEL_14:
  VisualCollection::RemoveAll((CScreenRotation *)((char *)this + 32));
  CRenderDataVisual::ClearInstructions(this);
  if ( !a2 )
  {
    CRenderDataVisual::ClearInstructions(this);
    v11 = *((_QWORD *)this + 3);
    if ( v11 )
      VisualCollection::Remove((VisualCollection *)(v11 + 32), this);
    *((_WORD *)this + 165) = 0;
    *((_DWORD *)this + 85) = 0;
    v12 = *((_QWORD *)this + 39);
    if ( v12 )
    {
      CBaseObject::Release((CBaseObject *)(v12 + 8));
      *((_QWORD *)this + 39) = 0LL;
    }
  }
  v13 = *((_QWORD *)this + 40);
  if ( v13 )
  {
    CBaseObject::Release((CBaseObject *)(v13 + 8));
    *((_QWORD *)this + 40) = 0LL;
  }
}
