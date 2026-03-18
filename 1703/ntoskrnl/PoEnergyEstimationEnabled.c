/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140110540
 * Callers:
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140445FC4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140475080 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140547818 (PspFoldProcessAccountingIntoJob.c)
 *     NtCreateJobObject @ 0x14054C614 (NtCreateJobObject.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406B1A68 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

bool PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationDisabled == 0;
}
