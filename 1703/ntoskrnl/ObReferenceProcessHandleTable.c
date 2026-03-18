/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140517F9C
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401F4B00 (IoRevokeHandlesForProcess.c)
 *     ObFindHandleForObject @ 0x140428580 (ObFindHandleForObject.c)
 *     ObGetProcessHandleCount @ 0x140441B10 (ObGetProcessHandleCount.c)
 *     ObInitProcess @ 0x14049CA68 (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x1404A0710 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     ObCompleteObjectDuplication @ 0x140516CFC (ObCompleteObjectDuplication.c)
 *     ObCaptureObjectStateForDuplication @ 0x1405171E0 (ObCaptureObjectStateForDuplication.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x14068D72C (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140695064 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1406DFE10 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1407107A0 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 95;
  Count = 0LL;
  if ( ExAcquireRundownProtection(a1 + 95) )
  {
    Count = a1[131].Count;
    if ( !Count )
      ExReleaseRundownProtection(v1);
  }
  return Count;
}
