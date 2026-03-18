/*
 * XREFs of KeSelectIdealProcessor @ 0x14006B868
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x14006B7D8 (KiSetIdealNodeProcessByGroup.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     ExpNodeCreateSystemThread @ 0x14052B848 (ExpNodeCreateSystemThread.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     ExpWorkQueueManagerInitialize @ 0x1406476EC (ExpWorkQueueManagerInitialize.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x1400406BC (KiSelectIdealProcessor.c)
 */

__int64 __fastcall KeSelectIdealProcessor(__int64 a1, __int64 a2, int *a3)
{
  int *v3; // rbx
  __int64 result; // rax

  v3 = a3;
  if ( !a3 )
    v3 = (int *)(a1 + 100);
  result = KiSelectIdealProcessor(a1, *v3, a2);
  *v3 = result;
  return result;
}
