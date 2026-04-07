/*
 * XREFs of ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180032E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DF88 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007E074 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18007EB88 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18007EC14 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18007F24C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateCaptureControllerPropertiesFromDisplays(
        CProjectionBorderManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  HMONITOR v6; // rdx
  int updated; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 512), &RestartKey);
    v3 = v2;
    if ( !v2 )
    {
      v4 = 0;
      goto LABEL_4;
    }
    v11 = *v2;
    CProjectionBorderManager::_RemoveVisuals(v11, v2 + 3);
    v6 = (HMONITOR)v3[2];
    if ( v6 )
      CProjectionBorderManager::_AddProjectionBorderForDisplay(this, v6, (const struct DWM_CAPTURE_TOKEN *)&v11);
    else
      CProjectionBorderManager::_AddProjectionBorderForAllDisplays(this, (const struct DWM_CAPTURE_TOKEN *)&v11);
    updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(
                this,
                (HMONITOR)v3[2],
                *((_DWORD *)v3 + 2));
    v4 = updated;
    if ( updated < 0 )
      break;
    updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(
                this,
                (HMONITOR)v3[2],
                *((_DWORD *)v3 + 2));
    v4 = updated;
    if ( updated < 0 )
    {
      v8 = 548LL;
      goto LABEL_12;
    }
  }
  v8 = 547LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v9);
LABEL_4:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v4;
}
