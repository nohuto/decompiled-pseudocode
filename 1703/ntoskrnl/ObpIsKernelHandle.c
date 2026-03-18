/*
 * XREFs of ObpIsKernelHandle @ 0x14008BBC0
 * Callers:
 *     ObIsKernelHandle @ 0x14013DF00 (ObIsKernelHandle.c)
 *     ObQueryObjectAuditingByHandle @ 0x140428870 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14043EA90 (ObSetHandleAttributes.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x1404F9CCC (ObpCloseHandle.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObNormalizeHandleValue @ 0x1406C11C4 (ObNormalizeHandleValue.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
