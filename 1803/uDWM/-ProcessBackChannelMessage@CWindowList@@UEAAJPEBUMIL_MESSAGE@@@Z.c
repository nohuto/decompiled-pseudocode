/*
 * XREFs of ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002B270
 * Callers:
 *     <none>
 * Callees:
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800250C0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18003E7C0 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 */

__int64 __fastcall CWindowList::ProcessBackChannelMessage(CWindowList *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int *v4; // rdi
  int started; // eax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( *(_DWORD *)a2 == 8 )
  {
    v3 = *((_DWORD *)a2 + 2);
    v4 = (unsigned int *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59);
    if ( v3 == v4[144] )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Stop);
      v4[144] = -1;
    }
    else
    {
      if ( v3 != v4[145] )
      {
        started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
        v2 = started;
        if ( started >= 0 )
          return v2;
        v8 = 1315;
LABEL_18:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, v8);
        return v2;
      }
      if ( !GetSystemMetrics(8193) && (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
        McTemplateU0d(v7, &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info, v4[74]);
      v4[145] = -1;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 != 5 )
    {
      v2 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x52Cu);
      return v2;
    }
    started = CWindowList::ProcessDeviceStateChangeNotification(this, *((unsigned int *)a2 + 3));
    v2 = started;
    if ( started < 0 )
    {
      v8 = 1320;
      goto LABEL_18;
    }
  }
  return v2;
}
