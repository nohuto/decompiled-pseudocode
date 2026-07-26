/*
 * XREFs of ndisSetPowerResumeComplete @ 0x1C0071CE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0066528 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007A148 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisMiniportFatalError @ 0x1C00EDC6C (ndisMiniportFatalError.c)
 */

__int64 __fastcall ndisSetPowerResumeComplete(__int64 a1, _IRP *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  int Status; // ebp
  _NDIS_SELECTIVE_SUSPEND *v7; // rbx
  KIRQL v8; // al

  SelectiveSuspend = a3->SelectiveSuspend;
  Status = a2->IoStatus.Status;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, (__int64)a3, Status);
  ndisLogMiniportEvent((__int64)a3, 0xDu);
  if ( Status >= 0 )
  {
    SelectiveSuspend->ResumeWorkItem.Miniport = a3;
    SelectiveSuspend->ResumeWorkItem.Irp = a2;
    ExQueueWorkItem(&SelectiveSuspend->ResumeWorkItem.Item, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    return 3221225494LL;
  }
  else
  {
    v7 = a3->SelectiveSuspend;
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a3, 0x73Bu, Status);
    v7->LastUnexpectedFailureLine[1] = v7->LastUnexpectedFailureLine[0];
    v7->LastUnexpectedFailureLine[0] = 1851;
    if ( (unsigned __int8)byte_1C0099616 >= 2u )
      WPP_SF_dq(0x1Du, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, Status, a3);
    v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value &= ~0x20u;
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
    ndisMiniportFatalError(a3, 74LL);
    ndisScheduleD0CompleteSignalWorkItem((__int64)a3, Status);
    return 0LL;
  }
}
