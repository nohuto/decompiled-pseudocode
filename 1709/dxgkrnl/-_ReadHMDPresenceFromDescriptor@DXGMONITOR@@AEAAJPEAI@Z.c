/*
 * XREFs of ?_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C01096B0
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z @ 0x1C00371EC (-DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadHMDPresenceFromDescriptor(DXGMONITOR *this, unsigned int *a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // r8d
  __int64 v4; // r9
  struct DisplayIDObj *v5; // rcx
  int PrimaryUseCase; // r9d
  char v8; // al
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 936LL) + 96LL);
  if ( v4 )
  {
    v8 = *(_BYTE *)(v4 + 121);
    PrimaryUseCase = 0;
LABEL_11:
    LOBYTE(v3) = (unsigned __int8)(v8 - 2) <= 1u;
    *v2 = v3;
    return (unsigned int)PrimaryUseCase;
  }
  v5 = (DXGMONITOR *)((char *)this + 152);
  PrimaryUseCase = -1071841279;
  if ( *(_QWORD *)v5 )
  {
    v9 = 0;
    PrimaryUseCase = DisplayID_GetPrimaryUseCase(v5, (enum DISPLAY_USE_CASE *)&v9);
    if ( PrimaryUseCase >= 0 )
    {
      if ( v9 == 7 )
      {
        v8 = 3;
      }
      else if ( v9 == 8 )
      {
        v8 = 2;
      }
      else
      {
        v8 = 1;
      }
      goto LABEL_11;
    }
  }
  return (unsigned int)PrimaryUseCase;
}
