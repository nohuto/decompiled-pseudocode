/*
 * XREFs of ObpIsKernelHandle @ 0x14003EC88
 * Callers:
 *     ObIsKernelHandle @ 0x14014D7E0 (ObIsKernelHandle.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x1404B5E0C (ObpCloseHandle.c)
 *     ObQueryObjectAuditingByHandle @ 0x1404B8520 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x140560C10 (ObSetHandleAttributes.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     ObNormalizeHandleValue @ 0x140759094 (ObNormalizeHandleValue.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
