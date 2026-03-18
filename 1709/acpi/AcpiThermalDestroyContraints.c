/*
 * XREFs of AcpiThermalDestroyContraints @ 0x1C0059218
 * Callers:
 *     ACPIThermalStopZoneWorker @ 0x1C0059044 (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0029C8C (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0040CD8 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0041A90 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

void __fastcall AcpiThermalDestroyContraints(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // si
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // r9
  __int64 **v8; // rcx
  void **v9; // rdx
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 200);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v3 = (__int64 *)(v1 + 176);
  while ( 1 )
  {
    v4 = (__int64 *)*v3;
    if ( *(__int64 **)(*v3 + 8) != v3 || (v5 = *v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      break;
    v6 = v4[5];
    if ( v6 )
    {
      if ( *((_BYTE *)v4 + 52) )
      {
        v7 = *((_BYTE *)v4 + 53);
        if ( v7 != 100 )
          AcpiDiagTracePassiveCoolingConstraint(v4[4], v6, 0, v7);
      }
      else if ( *((_BYTE *)v4 + 55) )
      {
        AcpiDiagTraceActiveCoolingConstraint(v4[4], v6, 0, 0);
      }
    }
    v8 = (__int64 **)v4[2];
    if ( v8[1] != v4 + 2 || (v9 = (void **)v4[3], *v9 != v4 + 2) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = (__int64 *)v9;
    v10 = v4[5];
    if ( v10 )
      ACPIThermalReevaluateConstraints(*(PVOID *)(v10 + 608));
    ExFreePoolWithTag(v4, 0x54706341u);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}
