/*
 * XREFs of ACPIThermalReleaseCoolingInterfaces @ 0x1C000129C
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0004020 (ACPIDispatchIrp.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0010698 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFanStopDevice @ 0x1C004E00C (ACPIFanStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C0085C20 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00A05F0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0029C8C (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0040CD8 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0041A90 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r9
  _QWORD *v4; // rdi
  KIRQL v5; // bp
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *i; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v4 = *(_QWORD **)(a1 + 608);
  v5 = v2;
  *(_BYTE *)(a1 + 616) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 608) = 0LL;
    v7 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    for ( i = (_QWORD *)v4[2]; i != v4 + 2; qword_1C00789D8 = (__int64)v11 )
    {
      v10 = i - 2;
      i = (_QWORD *)*i;
      if ( *((_BYTE *)v10 + 52) )
      {
        if ( *((_BYTE *)v10 + 53) != 100 )
        {
          LOBYTE(v3) = 100;
          AcpiDiagTracePassiveCoolingConstraint(v10[4], v10[5], 0LL, v3);
        }
      }
      else if ( *((_BYTE *)v10 + 55) )
      {
        AcpiDiagTraceActiveCoolingConstraint(v10[4], v10[5], 0LL, 0LL);
      }
      v10[5] = 0LL;
      v11 = v10 + 2;
      v12 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v14 = (_QWORD *)qword_1C00789D8;
      if ( *(__int64 **)qword_1C00789D8 != &AcpiThermalUnclaimedConstraintList )
        __fastfail(3u);
      *v11 = &AcpiThermalUnclaimedConstraintList;
      v11[1] = v14;
      *v14 = v11;
    }
    ACPIThermalReevaluateConstraints(v4);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4[7] = &Event;
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v5);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PoDeleteThermalRequest(v4[8]);
    IoFreeWorkItem((PIO_WORKITEM)v4[6]);
    ExFreePoolWithTag(v4, 0x54706341u);
  }
  else
  {
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  }
  return 0LL;
}
