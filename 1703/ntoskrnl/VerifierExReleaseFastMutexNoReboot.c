/*
 * XREFs of VerifierExReleaseFastMutexNoReboot @ 0x14077FD70
 * Callers:
 *     <none>
 * Callees:
 *     ViExReleaseFastMutexCommon @ 0x140780278 (ViExReleaseFastMutexCommon.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexNoReboot(__int64 a1)
{
  ViExReleaseFastMutexCommon();
  return ((__int64 (__fastcall *)(__int64))pXdvExReleaseFastMutex)(a1);
}
