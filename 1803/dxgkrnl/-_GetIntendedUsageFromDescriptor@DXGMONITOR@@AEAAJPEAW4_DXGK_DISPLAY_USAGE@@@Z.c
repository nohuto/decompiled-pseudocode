/*
 * XREFs of ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0235A50
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C00396A8 (DpiFdoGetChildDescriptor.c)
 *     ?DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z @ 0x1C00480A8 (-DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C023B2AC (-_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetIntendedUsageFromDescriptor(DXGMONITOR *this, enum _DXGK_DISPLAY_USAGE *a2)
{
  _QWORD *ChildDescriptor; // rax
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 v6; // rcx
  char v7; // al
  int v8; // ecx
  int PrimaryUseCase; // eax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  ChildDescriptor = DpiFdoGetChildDescriptor(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 192LL)
                                + 64LL),
                      *((_DWORD *)this + 11));
  v5 = ChildDescriptor;
  if ( ChildDescriptor && (v6 = ChildDescriptor[12]) != 0 )
  {
    v7 = *(_BYTE *)(v6 + 121);
    v8 = 0;
  }
  else
  {
    v7 = 0;
    if ( !v5 )
    {
      v8 = -1073741811;
      goto LABEL_8;
    }
    v8 = -1071841279;
  }
  if ( v8 >= 0 )
  {
LABEL_19:
    *(_BYTE *)a2 = v7;
    return (unsigned int)v8;
  }
LABEL_8:
  v11 = 0;
  if ( *(_QWORD *)(v4 + 168) )
  {
    PrimaryUseCase = DisplayID_GetPrimaryUseCase((struct DisplayIDObj *)(v4 + 168), (enum DISPLAY_USE_CASE *)&v11);
  }
  else
  {
    if ( !*(_DWORD *)(v4 + 128) )
      goto LABEL_13;
    PrimaryUseCase = DXGMONITOR::_ReadUsageFromEDIDForMsftVSDB((DXGMONITOR *)v4, (enum DISPLAY_USE_CASE *)&v11);
  }
  v8 = PrimaryUseCase;
LABEL_13:
  if ( v8 >= 0 )
  {
    if ( v11 == 7 )
    {
      v7 = 3;
    }
    else if ( v11 == 8 )
    {
      v7 = 2;
    }
    else
    {
      v7 = 1;
    }
    goto LABEL_19;
  }
  return (unsigned int)v8;
}
