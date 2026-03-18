/*
 * XREFs of KeSelectIdealProcessor @ 0x140019804
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x140019778 (KiSetIdealNodeProcessByGroup.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     ExpNodeCreateSystemThread @ 0x140554884 (ExpNodeCreateSystemThread.c)
 *     ExpWorkQueueManagerInitialize @ 0x1405DE038 (ExpWorkQueueManagerInitialize.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x1400A9210 (KiSelectIdealProcessor.c)
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
