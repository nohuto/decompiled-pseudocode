/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140060580
 * Callers:
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1404CE830 (PsQueryProcessEnergyValues.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x14052FF14 (NtCreateJobObject.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140532D24 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140535430 (PspQueryProcessAccountingInformationCallback.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1405709E4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     PpmCheckReInit @ 0x14063F71C (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407474A4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
