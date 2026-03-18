/*
 * XREFs of ACPIThermalReleaseCoolingInterfaces @ 0x1C00582F0
 * Callers:
 *     ACPIDispatchIrp @ 0x1C00010A0 (ACPIDispatchIrp.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0013214 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFanStopDevice @ 0x1C004E39C (ACPIFanStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C009D620 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C009D790 (ACPIBusIrpStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00A3DC0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0028FEC (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0041258 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C00420D0 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdi
  KIRQL v4; // bp
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *i; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v3 = *(_QWORD **)(a1 + 608);
  v4 = v2;
  *(_BYTE *)(a1 + 616) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 608) = 0LL;
    v5 = *v3;
    v6 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v6 != v3 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    for ( i = (_QWORD *)v3[2]; i != v3 + 2; qword_1C0076918 = (__int64)v9 )
    {
      v8 = i - 2;
      i = (_QWORD *)*i;
      if ( *((_BYTE *)v8 + 52) )
      {
        if ( *((_BYTE *)v8 + 53) != 100 )
          AcpiDiagTracePassiveCoolingConstraint(v8[4], v8[5], 0, 100);
      }
      else if ( *((_BYTE *)v8 + 55) )
      {
        AcpiDiagTraceActiveCoolingConstraint(v8[4], v8[5], 0, 0);
      }
      v8[5] = 0LL;
      v9 = v8 + 2;
      v10 = *v9;
      v11 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      v12 = (_QWORD *)qword_1C0076918;
      if ( *(__int64 **)qword_1C0076918 != &AcpiThermalUnclaimedConstraintList )
        __fastfail(3u);
      *v9 = &AcpiThermalUnclaimedConstraintList;
      v9[1] = v12;
      *v12 = v9;
    }
    ACPIThermalReevaluateConstraints(v3);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v3[7] = &Event;
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PoDeleteThermalRequest(v3[8]);
    IoFreeWorkItem((PIO_WORKITEM)v3[6]);
    ExFreePoolWithTag(v3, 0x54706341u);
  }
  else
  {
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  }
  return 0LL;
}
