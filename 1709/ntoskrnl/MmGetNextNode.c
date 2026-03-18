/*
 * XREFs of MmGetNextNode @ 0x14010F668
 * Callers:
 *     ExpTryQueueWorkItem @ 0x140021ACC (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 *     PoIdle @ 0x1400967A0 (PoIdle.c)
 *     PpmIdlePrepare @ 0x140099130 (PpmIdlePrepare.c)
 *     PoAllProcessorsDeepIdle @ 0x14010F5D4 (PoAllProcessorsDeepIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)qword_140388508 + *a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1);
}
