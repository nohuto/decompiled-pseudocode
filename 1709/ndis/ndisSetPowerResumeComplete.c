/*
 * XREFs of ndisSetPowerResumeComplete @ 0x1C0071460
 * Callers:
 *     <none>
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0065A10 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0079984 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisMiniportFatalError @ 0x1C00EB0CC (ndisMiniportFatalError.c)
 */

__int64 __fastcall ndisSetPowerResumeComplete(__int64 a1, _IRP *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  int Status; // ebp
  _NDIS_SELECTIVE_SUSPEND *v7; // rbx
  KIRQL v8; // al

  SelectiveSuspend = a3->SelectiveSuspend;
  Status = a2->IoStatus.Status;
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)a3, Status);
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
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a3, 0x71Cu, Status);
    v7->LastUnexpectedFailureLine[1] = v7->LastUnexpectedFailureLine[0];
    v7->LastUnexpectedFailureLine[0] = 1820;
    if ( (unsigned __int8)byte_1C0098756 >= 2u )
      WPP_SF_dq(0x1Du, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, Status, a3);
    v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value &= ~0x20u;
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
    ndisMiniportFatalError(a3, 74LL);
    ndisScheduleD0CompleteSignalWorkItem((__int64)a3, Status);
    return 0LL;
  }
}
