/*
 * XREFs of SeLocateProcessImageName @ 0x14050E910
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1404E14B0 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14050E924 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
