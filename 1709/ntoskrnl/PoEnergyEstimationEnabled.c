/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140025A00
 * Callers:
 *     KiInitializeBootStructures @ 0x1404270C0 (KiInitializeBootStructures.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PsQueryProcessEnergyValues @ 0x140493140 (PsQueryProcessEnergyValues.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     NtCreateJobObject @ 0x14050B45C (NtCreateJobObject.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14050CFF0 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140510AB0 (PspQueryProcessAccountingInformationCallback.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140573684 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406DC784 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
