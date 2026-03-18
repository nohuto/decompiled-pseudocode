/*
 * XREFs of ACPIThermalUpdateConstraints @ 0x1C0022328
 * Callers:
 *     ACPIThermalWorker @ 0x1C0090A20 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0028FEC (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0041258 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C00412EC (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C00420D0 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

void __fastcall ACPIThermalUpdateConstraints(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r9
  KIRQL v3; // r15
  __int64 *i; // rbx
  char v5; // bp
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  char v10; // r14
  __int64 v11; // rdx

  v1 = *(_QWORD *)(a1 + 200);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  for ( i = *(__int64 **)(v1 + 176); i != (__int64 *)(v1 + 176); i = (__int64 *)*i )
  {
    v5 = 0;
    if ( *((_BYTE *)i + 52) )
    {
      if ( *((unsigned __int8 *)i + 53) != *(_DWORD *)(v1 + 96) )
      {
        v7 = i[5];
        v5 = 1;
        *((_BYTE *)i + 53) = *(_BYTE *)(v1 + 96);
        if ( v7 )
          AcpiDiagTracePassiveCoolingConstraint(i[4], v7, 0LL);
      }
    }
    else
    {
      v8 = *((unsigned __int8 *)i + 54);
      v9 = *(_DWORD *)(v1 + 92);
      v10 = v8 >= v9;
      if ( *((_BYTE *)i + 55) )
      {
        if ( v8 >= v9 )
          goto LABEL_5;
      }
      else if ( v8 < v9 )
      {
        goto LABEL_5;
      }
      v11 = i[5];
      v5 = 1;
      *((_BYTE *)i + 55) = v10;
      if ( v11 )
      {
        LOBYTE(v2) = v8 >= v9;
        AcpiDiagTraceActiveCoolingConstraint(i[4], v11, 0LL, v2);
        AcpiDiagTraceActiveCoolingDevicePower(i[4], i[5], *((unsigned __int8 *)i + 54), *((_DWORD *)i + 12), v10);
      }
    }
LABEL_5:
    v6 = i[5];
    if ( v6 )
    {
      if ( v5 )
        ACPIThermalReevaluateConstraints(*(PVOID *)(v6 + 608));
    }
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
}
