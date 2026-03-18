/*
 * XREFs of VerifierKeInitializeMutant @ 0x140826230
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutantCommon @ 0x1408275A4 (ViKeInitializeMutantCommon.c)
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1408288DC (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutant(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViKeInitializeMutantCommon();
  result = VfDeadlockInitializeResource(a1, v4, retaddr);
  if ( a2 )
    return VfDeadlockAcquireResource(a1, 1, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return result;
}
