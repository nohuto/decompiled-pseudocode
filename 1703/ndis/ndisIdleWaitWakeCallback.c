/*
 * XREFs of ndisIdleWaitWakeCallback @ 0x1C006E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001D998 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_qZ @ 0x1C004AB78 (WPP_SF_qZ.c)
 *     WPP_SF_dq @ 0x1C004D4F4 (WPP_SF_dq.c)
 *     Template_jqx @ 0x1C0064C70 (Template_jqx.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006CDF4 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0077B00 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
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
      NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)Context, 0x5B2u, Status);
      *(_WORD *)(v6 + 626) = *(_WORD *)(v6 + 624);
      *(_WORD *)(v6 + 624) = 1458;
      if ( (unsigned __int8)byte_1C0092616 >= 2u )
        WPP_SF_dq(0x19u, &WPP_3059abd58ba5345e836db04510415190_Traceguids, IoStatus->Status, Context);
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
        Template_jqx(
          v9,
          &DeviceWaitWakeComplete,
          (const GUID *)Context + 252,
          (unsigned __int64)Context + 4032,
          *((_DWORD *)Context + 1020),
          *((_QWORD *)Context + 506));
      if ( (unsigned __int8)byte_1C0092610 >= 4u )
        WPP_SF_qZ(
          0x18u,
          &WPP_3059abd58ba5345e836db04510415190_Traceguids,
          (__int64)Context,
          *((const wchar_t **)Context + 485));
      ndisScheduleWorkItemInternal(v6 + 376);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v8);
  }
  ndisCompleteWaitWake((__int64)Context);
}
