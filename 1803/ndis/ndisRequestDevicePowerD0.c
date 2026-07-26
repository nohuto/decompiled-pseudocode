/*
 * XREFs of ndisRequestDevicePowerD0 @ 0x1C000FCCC
 * Callers:
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000FC30 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0010690 (ndisGenericWaitWakeCallback.c)
 *     ndisMediaDisconnectComplete @ 0x1C0066250 (ndisMediaDisconnectComplete.c)
 *     ndisRequestPowerResume @ 0x1C0071150 (ndisRequestPowerResume.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00732F0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0074750 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisWakeUpDevice @ 0x1C00E35E0 (ndisWakeUpDevice.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     McTemplateK0jqx @ 0x1C0065DD8 (McTemplateK0jqx.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0066528 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072E5C (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(__int64 a1, unsigned __int16 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // al
  KIRQL v6; // bp
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // esi
  struct _NDIS_MINIPORT_AOAC *v11; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 96);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = v5;
  v7 = *(_DWORD *)(a1 + 4448);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1709008;
  if ( (v7 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock(v2, v5);
    return 259LL;
  }
  else
  {
    *(_WORD *)(a1 + 4276) = a2;
    *(_DWORD *)(a1 + 4448) = v7 | 2;
    KeClearEvent((PRKEVENT)(a1 + 4248));
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock(v2, v6);
    ndisLogMiniportEvent(a1, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0jqx(
        v8,
        (unsigned int)&DevicePowerOnRequested,
        a1 + 4032,
        a1 + 4032,
        *(_DWORD *)(a1 + 4080),
        *(_QWORD *)(a1 + 4048));
    _InterlockedOr((volatile signed __int32 *)(a1 + 4456), 2u);
    if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v9 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 3856), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      v10 = v9;
      if ( v9 != 259 )
      {
        if ( (unsigned __int8)byte_1C0099615 >= 2u )
          WPP_SF_dq(147LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v9, a1);
        ndisScheduleD0CompleteSignalWorkItem(a1, v10);
      }
    }
    v11 = *(struct _NDIS_MINIPORT_AOAC **)(a1 + 4488);
    if ( v11 )
      ndisAoAcResumeRefTimeAccumulation(v11);
    return v10;
  }
}
