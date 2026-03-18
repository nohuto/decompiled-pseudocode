/*
 * XREFs of ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C016F5D4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0022264 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0023D50 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1C01771C4 (-DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ.c)
 */

void __fastcall DXGADAPTER::StartRuntimePowerManagement(DXGADAPTER *this)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax

  if ( *((_QWORD *)this + 291) )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL);
    if ( *((int *)this + 486) >= 0x2000 && v2 >= 0x5006 )
      DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(this);
    if ( v2 >= 0x3008 )
    {
      *((_BYTE *)this + 2761) = 1;
      DXGADAPTER::DdiPowerRuntimeControlRequest(
        this,
        &GUID_DXGKDDI_POWER_MANAGEMENT_PREPARE_TO_START,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_BYTE *)this + 2760) )
    {
      v3 = *((_DWORD *)this + 617);
      if ( v3 != -1 )
        DXGADAPTER::SetPowerComponentActiveCBInternal(this, v3, 0, 0);
    }
    PoFxStartDevicePowerManagement(*((_QWORD *)this + 291));
    if ( v2 >= 0x3008 )
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STARTED, 0LL, 0LL, 0LL, 0LL, 0LL);
    v4 = PoRegisterPowerSettingCallback(
           *((PDEVICE_OBJECT *)this + 24),
           &GUID_MONITOR_POWER_ON,
           (PPOWER_SETTING_CALLBACK)DXGADAPTER::PowerSettingCallback,
           this,
           (PVOID *)this + 350);
    v7 = v4;
    if ( v4 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdError(v8);
    }
  }
}
