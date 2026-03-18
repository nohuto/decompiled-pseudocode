/*
 * XREFs of AcpiDiagTraceActiveCoolingConstraint @ 0x1C0041258
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x1C0022328 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0028F58 (ACPIThermalAssocaiteConstraint.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0042148 (AcpiDiagTraceThermalZoneRundown.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00582F0 (ACPIThermalReleaseCoolingInterfaces.c)
 *     AcpiThermalDestroyContraints @ 0x1C00587E4 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C004159C (AcpiDiagTraceConstraintEvent.c)
 */

__int64 __fastcall AcpiDiagTraceActiveCoolingConstraint(__int64 a1, __int64 a2, char a3, char a4)
{
  void *v4; // rax
  __int16 v6; // [rsp+30h] [rbp-88h] BYREF
  __int16 *v7; // [rsp+80h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp-30h]

  v4 = &ACPI_ETW_EVENT_ACTIVE_CONSTRAINT_CHANGE;
  if ( a3 )
    v4 = &ACPI_ETW_EVENT_ACTIVE_CONSTRAINT_RUNDOWN;
  v6 = a4 != 0;
  v8 = 2LL;
  v7 = &v6;
  return AcpiDiagTraceConstraintEvent(a1, a2, v4);
}
