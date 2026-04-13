/*
 * XREFs of _Mtxlock @ 0x18009F7F4
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180097E54 (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
