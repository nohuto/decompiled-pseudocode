/*
 * XREFs of ReadAMDMsr @ 0x140188BC0
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1402053E8 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
