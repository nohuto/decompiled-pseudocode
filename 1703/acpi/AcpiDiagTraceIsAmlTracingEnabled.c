/*
 * XREFs of AcpiDiagTraceIsAmlTracingEnabled @ 0x1C0042088
 * Callers:
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00414A0 (AcpiDiagTraceAmlEvaluation.c)
 *     FreeContext @ 0x1C005EDD8 (FreeContext.c)
 * Callees:
 *     <none>
 */

BOOLEAN AcpiDiagTraceIsAmlTracingEnabled()
{
  if ( AcpiDiagHandle )
    return EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE);
  else
    return 0;
}
