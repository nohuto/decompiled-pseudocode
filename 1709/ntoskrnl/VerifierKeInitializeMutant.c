/*
 * XREFs of VerifierKeInitializeMutant @ 0x1407B8F80
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutantCommon @ 0x1407BA23C (ViKeInitializeMutantCommon.c)
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1407BB52C (VfDeadlockInitializeResource.c)
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
