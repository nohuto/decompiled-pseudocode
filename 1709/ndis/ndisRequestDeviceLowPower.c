/*
 * XREFs of ndisRequestDeviceLowPower @ 0x1C00C6A7C
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C006F3F0 (NdisMIdleNotificationConfirm.c)
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 *     ndisMediaDisconnectWorker @ 0x1C00EBCC0 (ndisMediaDisconnectWorker.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F3E24 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     McTemplateK0jqx @ 0x1C00652B8 (McTemplateK0jqx.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072500 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisRequestDeviceLowPower(
        __int64 a1,
        POWER_STATE a2,
        REQUEST_POWER_COMPLETE *a3,
        void *a4,
        unsigned __int16 a5)
{
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  unsigned int v11; // edi
  struct _NDIS_MINIPORT_AOAC *v12; // rcx

  ndisLogMiniportEvent(a1, a5);
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    McTemplateK0jqx(
      v9,
      &DevicePowerDownRequested,
      (const GUID *)(a1 + 4032),
      a1 + 4032,
      *(_DWORD *)(a1 + 4080),
      *(_QWORD *)(a1 + 4048));
  _InterlockedOr((volatile signed __int32 *)(a1 + 4456), 4u);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    v11 = 259;
  }
  else
  {
    v10 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 3856), 2u, a2, a3, a4, 0LL);
    v11 = v10;
    if ( v10 != 259 && (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_dq(0x93u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v10, a1);
  }
  v12 = *(struct _NDIS_MINIPORT_AOAC **)(a1 + 4488);
  if ( v12 )
    ndisAoAcPauseRefTimeAccumulation(v12);
  return v11;
}
