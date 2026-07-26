/*
 * XREFs of ndisRequestDevicePowerD0 @ 0x1C001FE9C
 * Callers:
 *     ndisGenericWaitWakeCallback @ 0x1C001F1E0 (ndisGenericWaitWakeCallback.c)
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C001FE00 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisMediaDisconnectComplete @ 0x1C0065720 (ndisMediaDisconnectComplete.c)
 *     ndisRequestPowerResume @ 0x1C00708F4 (ndisRequestPowerResume.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0072A80 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0073EE0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisWakeUpDevice @ 0x1C00E1F20 (ndisWakeUpDevice.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     McTemplateK0jqx @ 0x1C00652B8 (McTemplateK0jqx.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0065A10 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00725E0 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
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
  *(_DWORD *)(a1 + 1856) = 1708920;
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
        if ( (unsigned __int8)byte_1C0098755 >= 2u )
          WPP_SF_dq(144LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v9, a1);
        ndisScheduleD0CompleteSignalWorkItem(a1, v10);
      }
    }
    v11 = *(struct _NDIS_MINIPORT_AOAC **)(a1 + 4488);
    if ( v11 )
      ndisAoAcResumeRefTimeAccumulation(v11);
    return v10;
  }
}
