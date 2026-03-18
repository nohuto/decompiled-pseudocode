/*
 * XREFs of KeSelectIdealProcessor @ 0x1400654C0
 * Callers:
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KiSetIdealNodeProcessByGroup @ 0x140065434 (KiSetIdealNodeProcessByGroup.c)
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 *     ExpWorkerHotAddProcessor @ 0x14041B120 (ExpWorkerHotAddProcessor.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     ExpCreateSystemThreadForNode @ 0x140567898 (ExpCreateSystemThreadForNode.c)
 *     ExpWorkerInitialization @ 0x14081E950 (ExpWorkerInitialization.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x140114150 (KiSelectIdealProcessor.c)
 */

__int64 __fastcall KeSelectIdealProcessor(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax

  v3 = a3;
  if ( !a3 )
    v3 = (_DWORD *)(a1 + 92);
  result = KiSelectIdealProcessor(a1, (unsigned int)*v3, a2);
  *v3 = result;
  return result;
}
