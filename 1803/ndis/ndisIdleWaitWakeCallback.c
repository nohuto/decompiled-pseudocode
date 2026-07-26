/*
 * XREFs of ndisIdleWaitWakeCallback @ 0x1C00709A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCompleteWaitWake @ 0x1C0010704 (ndisCompleteWaitWake.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     McTemplateK0jqx @ 0x1C0065DD8 (McTemplateK0jqx.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006ECF4 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007A148 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisIdleWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  int Status; // r8d
  KIRQL v8; // si
  __int64 v9; // rcx

  v6 = *((_QWORD *)Context + 560);
  Status = IoStatus->Status;
  if ( IoStatus->Status < 0 )
  {
    if ( Status != -1073741536 )
    {
      NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)Context, 0x5C2u, Status);
      *(_WORD *)(v6 + 626) = *(_WORD *)(v6 + 624);
      *(_WORD *)(v6 + 624) = 1474;
      if ( (unsigned __int8)byte_1C0099616 >= 2u )
        WPP_SF_dq(0x19u, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, IoStatus->Status, Context);
    }
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 560));
    if ( (*(_DWORD *)(v6 + 504) & 0xC4) == 4 )
    {
      *(_DWORD *)(v6 + 504) |= 0x40u;
      ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v6, 1, 0x41u, 0);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        McTemplateK0jqx(
          v9,
          &DeviceWaitWakeComplete,
          (const GUID *)Context + 252,
          (__int64)Context + 4032,
          *((_DWORD *)Context + 1020),
          *((_QWORD *)Context + 506));
      if ( (unsigned __int8)byte_1C0099610 >= 4u )
        WPP_SF_qZ(
          0x18u,
          &WPP_250ba6082b573e143e643b46f787ca55_Traceguids,
          (__int64)Context,
          *((const wchar_t **)Context + 485));
      ndisScheduleWorkItemInternal(v6 + 376);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v8);
  }
  ndisCompleteWaitWake((__int64)Context);
}
