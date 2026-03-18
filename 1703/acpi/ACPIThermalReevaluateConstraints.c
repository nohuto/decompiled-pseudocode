/*
 * XREFs of ACPIThermalReevaluateConstraints @ 0x1C0028FEC
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x1C0022328 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0028F58 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00582F0 (ACPIThermalReleaseCoolingInterfaces.c)
 *     AcpiThermalDestroyContraints @ 0x1C00587E4 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIThermalReevaluateConstraints(PVOID Context)
{
  bool v1; // zf

  v1 = *((_BYTE *)Context + 45) == 0;
  *((_BYTE *)Context + 44) = 1;
  if ( v1 )
  {
    IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 6), ACPIThermalReevaluateConstraintsWorker, DelayedWorkQueue, Context);
    *((_BYTE *)Context + 45) = 1;
  }
}
