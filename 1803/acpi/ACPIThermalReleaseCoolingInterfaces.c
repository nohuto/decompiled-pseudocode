/*
 * XREFs of ACPIThermalReleaseCoolingInterfaces @ 0x1C003D8A4
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIFanStopDevice @ 0x1C0024420 (ACPIFanStopDevice.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0025034 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C0077BA0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C0087F60 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 * Callees:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C00068EC (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C00076A4 (AcpiDiagTracePassiveCoolingConstraint.c)
 *     ACPIThermalReevaluateConstraints @ 0x1C003D720 (ACPIThermalReevaluateConstraints.c)
 */

__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // bp
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *i; // r14
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  bool v10; // zf
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v3 = *(_QWORD **)(a1 + 608);
  v4 = v2;
  *(_BYTE *)(a1 + 616) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 608) = 0LL;
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    for ( i = (_QWORD *)v3[2]; i != v3 + 2; qword_1C00669B8 = (__int64)v9 )
    {
      v8 = i - 2;
      v9 = i;
      v10 = *((_BYTE *)i + 36) == 0;
      i = (_QWORD *)*i;
      if ( v10 )
      {
        if ( *((_BYTE *)v8 + 55) )
          AcpiDiagTraceActiveCoolingConstraint(v8[4], v8[5], 0, 0);
      }
      else if ( *((_BYTE *)v8 + 53) != 100 )
      {
        AcpiDiagTracePassiveCoolingConstraint(v8[4], v8[5], 0, 100);
      }
      v8[5] = 0LL;
      v11 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v12 = (_QWORD *)v9[1], (_QWORD *)*v12 != v9) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v13 = (_QWORD *)qword_1C00669B8;
      if ( *(__int64 **)qword_1C00669B8 != &AcpiThermalUnclaimedConstraintList )
        __fastfail(3u);
      *v9 = &AcpiThermalUnclaimedConstraintList;
      v9[1] = v13;
      *v13 = v9;
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
