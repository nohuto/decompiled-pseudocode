/*
 * XREFs of VerifierKeInitializeMutex @ 0x1407B9000
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x1407BA278 (ViKeInitializeMutexCommon.c)
 *     VfDeadlockInitializeResource @ 0x1407BB52C (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(__int64 a1)
{
  __int64 v2; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1, v2, retaddr);
}
