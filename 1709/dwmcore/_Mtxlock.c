/*
 * XREFs of _Mtxlock @ 0x1800C2AFC
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800C2A28 (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
