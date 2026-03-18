/*
 * XREFs of ObpIsKernelHandle @ 0x1400A5DF0
 * Callers:
 *     ObIsKernelHandle @ 0x1402391A0 (ObIsKernelHandle.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x1404D4BEC (ObpCloseHandle.c)
 *     ObSetHandleAttributes @ 0x140571D00 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140572530 (ObQueryObjectAuditingByHandle.c)
 *     ObNormalizeHandleValue @ 0x1406EFC08 (ObNormalizeHandleValue.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
