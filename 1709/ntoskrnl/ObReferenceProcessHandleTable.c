/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140506A2C
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401FA8E0 (IoRevokeHandlesForProcess.c)
 *     PspApplyMitigationOptions @ 0x14048B80C (PspApplyMitigationOptions.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     ObGetProcessHandleCount @ 0x14050523C (ObGetProcessHandleCount.c)
 *     ObFindHandleForObject @ 0x140506270 (ObFindHandleForObject.c)
 *     ObCompleteObjectDuplication @ 0x140506594 (ObCompleteObjectDuplication.c)
 *     ObCaptureObjectStateForDuplication @ 0x140506A7C (ObCaptureObjectStateForDuplication.c)
 *     ObInitProcess @ 0x14053923C (ObInitProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406B9408 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1406C0E2C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x140716424 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14074D884 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 95;
  Count = 0LL;
  if ( ExAcquireRundownProtection_0(a1 + 95) )
  {
    Count = a1[131].Count;
    if ( !Count )
      ExReleaseRundownProtection_0(v1);
  }
  return Count;
}
