/*
 * XREFs of AcpiDiagTracePassiveCoolingConstraint @ 0x1C0041A90
 * Callers:
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C000129C (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalUpdateConstraints @ 0x1C0024C90 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0029BF8 (ACPIThermalAssocaiteConstraint.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0041C0C (AcpiDiagTraceThermalZoneRundown.c)
 *     AcpiThermalDestroyContraints @ 0x1C0059218 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C0041150 (AcpiDiagTraceConstraintEvent.c)
 */

void __fastcall AcpiDiagTracePassiveCoolingConstraint(__int64 a1, __int64 a2, char a3, char a4)
{
  const EVENT_DESCRIPTOR *v5; // r8
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-68h] BYREF
  char *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]
  char v10; // [rsp+B8h] [rbp+20h] BYREF

  v10 = a4;
  v7 = &v10;
  v5 = (const EVENT_DESCRIPTOR *)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_CHANGE;
  v9 = 0;
  v8 = 1;
  if ( a3 )
    v5 = (const EVENT_DESCRIPTOR *)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_RUNDOWN;
  AcpiDiagTraceConstraintEvent(a1, a2, v5, (int)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_RUNDOWN, &v6);
}
