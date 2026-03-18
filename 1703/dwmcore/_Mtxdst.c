/*
 * XREFs of _Mtxdst @ 0x1800D2E1C
 * Callers:
 *     ??1_Init_locks@std@@QEAA@XZ @ 0x1800D2DA0 (--1_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
