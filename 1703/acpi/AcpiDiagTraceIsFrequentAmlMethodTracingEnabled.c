/*
 * XREFs of AcpiDiagTraceIsFrequentAmlMethodTracingEnabled @ 0x1C00420AC
 * Callers:
 *     AcpiDiagTraceFrequentAmlEvaluation @ 0x1C0041EE4 (AcpiDiagTraceFrequentAmlEvaluation.c)
 * Callees:
 *     <none>
 */

BOOLEAN AcpiDiagTraceIsFrequentAmlMethodTracingEnabled()
{
  if ( AcpiDiagHandle )
    return EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD);
  else
    return 0;
}
