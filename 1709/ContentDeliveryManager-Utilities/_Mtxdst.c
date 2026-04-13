/*
 * XREFs of _Mtxdst @ 0x18009F7DC
 * Callers:
 *     ??1_Init_locks@std@@QEAA@XZ @ 0x180097E94 (--1_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
