/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013F90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0013D8C (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess @ 0x1C001434C (HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C00145C0 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C00148E0 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_DispatchWdmPnpPowerIrpSynchronously @ 0x1C0017A90 (HUBPDO_DispatchWdmPnpPowerIrpSynchronously.c)
 *     HUBIDLE_AddEvent @ 0x1C00354EC (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_PublishBillboardDetails @ 0x1C006AE28 (HUBPDO_PublishBillboardDetails.c)
 *     HUBPDO_PublishDualRoleFeaturesProperty @ 0x1C006B074 (HUBPDO_PublishDualRoleFeaturesProperty.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x1C006E518 (HUBMISC_ReportPnPFailureProblem.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x1C0072AE4 (HUBREG_UpdateSqmEnumerationFailureCode.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v3; // rbp
  int Status; // r15d
  int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v12; // edi
  unsigned int LowPart; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // edi
  _IO_STACK_LOCATION *v18; // rax
  _IO_STACK_LOCATION *v19; // rax
  __int64 v21; // [rsp+28h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  Status = a2->IoStatus.Status;
  v7 = 2;
  if ( CurrentStackLocation->MajorFunction == 22 )
  {
    if ( CurrentStackLocation->MinorFunction == 2 && CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         a1,
                         off_1C005B070)
                     + 24);
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart == 4 && *(_DWORD *)(v3 + 2460) == 3 )
      {
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v14 < 0 )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
            3u,
            5u,
            0x33u,
            (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
            v14);
        v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C005B070);
        HUBIDLE_AddEvent(v15 + 72, 6008LL, 0LL);
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      }
      LODWORD(v21) = LowPart;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        4u,
        5u,
        0x34u,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        v21);
      v16 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( v16 > 1 )
      {
        *(_DWORD *)(v3 + 2700) = v16;
        v16 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      }
      *(_DWORD *)(v3 + 2460) = v16;
      v7 = 1;
    }
    goto LABEL_39;
  }
  if ( CurrentStackLocation->MajorFunction != 27 )
    goto LABEL_39;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      goto LABEL_27;
    case 2u:
      *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C005B070)
                + 64) = 0LL;
      break;
    case 8u:
      return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess(a1);
    case 0xBu:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
LABEL_23:
      a2->IoStatus.Status = Status;
LABEL_28:
      v7 = 0;
      break;
    case 0xCu:
      return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(a1);
    case 0x13u:
      HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess(a1);
      break;
    case 0x14u:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      if ( a2->IoStatus.Information )
      {
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C005B070);
        v3 = *(_QWORD *)(v10 + 24);
        if ( *(_DWORD *)(v3 + 2432) )
        {
          HUBREG_UpdateSqmEnumerationFailureCode(*(_QWORD *)(v10 + 24));
          HUBMISC_ReportPnPFailureProblem(a1);
        }
        goto LABEL_28;
      }
      goto LABEL_23;
    case 0x17u:
LABEL_27:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      goto LABEL_28;
    case 0x19u:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      HUBPDO_QueryForD3ColdSupportInAcpi(a1);
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C005B070);
      v9 = *(_QWORD *)(v8 + 24);
      if ( *(_QWORD *)(v9 + 2640) )
      {
        HUBPDO_PublishBillboardDetails(v8);
        v9 = *(_QWORD *)(v8 + 24);
      }
      if ( (*(_DWORD *)(v9 + 1632) & 0x40000) != 0 )
        HUBPDO_PublishDualRoleFeaturesProperty(v8);
      a2->IoStatus.Status = 0;
      goto LABEL_28;
  }
LABEL_39:
  if ( !v7 )
  {
    v12 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v12;
  }
  v17 = v7 - 1;
  if ( v17 )
  {
    if ( v17 != 1 )
      return (unsigned int)-1073741823;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
  }
  else
  {
    v18 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
    *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
    v18[-1].FileObject = v18->FileObject;
    v18[-1].Control = 0;
    v19 = a2->Tail.Overlay.CurrentStackLocation;
    v19[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion;
    v19[-1].Context = (void *)v3;
    v19[-1].Control = -32;
  }
  return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01015 + 272))(
                         WdfDriverGlobals,
                         a1,
                         a2);
}
