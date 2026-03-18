/*
 * XREFs of ReadAMDMsr @ 0x1401B2320
 * Callers:
 *     KiDisableCacheErrataSource @ 0x140249B54 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
