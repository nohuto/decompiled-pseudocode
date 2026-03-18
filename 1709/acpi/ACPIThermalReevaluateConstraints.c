/*
 * XREFs of ACPIThermalReevaluateConstraints @ 0x1C0029C8C
 * Callers:
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C000129C (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalUpdateConstraints @ 0x1C0024C90 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0029BF8 (ACPIThermalAssocaiteConstraint.c)
 *     AcpiThermalDestroyContraints @ 0x1C0059218 (AcpiThermalDestroyContraints.c)
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
