/*
 * XREFs of _Mtxinit @ 0x18009F7E4
 * Callers:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x180097E08 (--0_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall Mtxinit(struct _RTL_CRITICAL_SECTION *a1)
{
  return _crtInitializeCriticalSectionEx(a1, 0xFA0u, 0);
}
