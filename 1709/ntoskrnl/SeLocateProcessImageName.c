/*
 * XREFs of SeLocateProcessImageName @ 0x14057D360
 * Callers:
 *     <none>
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
