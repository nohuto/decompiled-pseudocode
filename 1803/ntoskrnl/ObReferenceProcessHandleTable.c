/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1404B7304
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140237700 (IoRevokeHandlesForProcess.c)
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     ObInitProcess @ 0x1404EAAEC (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x1404EF46C (PspApplyMitigationOptions.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     ObFindHandleForObject @ 0x14054B780 (ObFindHandleForObject.c)
 *     ObCompleteObjectDuplication @ 0x14055DE6C (ObCompleteObjectDuplication.c)
 *     ObCaptureObjectStateForDuplication @ 0x140560818 (ObCaptureObjectStateForDuplication.c)
 *     ObGetProcessHandleCount @ 0x14056588C (ObGetProcessHandleCount.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     IopQueryProcessIdsUsingFile @ 0x14071E3A8 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140726B0C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x14077A4B8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1407AF0F4 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
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
