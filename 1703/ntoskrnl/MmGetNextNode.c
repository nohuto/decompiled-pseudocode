/*
 * XREFs of MmGetNextNode @ 0x140067EB0
 * Callers:
 *     PoAllProcessorsDeepIdle @ 0x140067DF8 (PoAllProcessorsDeepIdle.c)
 *     ExTryQueueWorkItem @ 0x1400688A0 (ExTryQueueWorkItem.c)
 *     PoIdle @ 0x1400F4340 (PoIdle.c)
 *     ExpQueueWorkItem @ 0x1400FD5D0 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x140130680 (ExTryQueueWorkItemFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)qword_14036C1C0 + *a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1);
}
