/*
 * XREFs of MmGetNextNode @ 0x14003AFD8
 * Callers:
 *     PoAllProcessorsDeepIdle @ 0x14003AF40 (PoAllProcessorsDeepIdle.c)
 *     ExpTryQueueWorkItem @ 0x14008F7AC (ExpTryQueueWorkItem.c)
 *     KiChooseTargetProcessor @ 0x1400FC8B0 (KiChooseTargetProcessor.c)
 *     PoIdle @ 0x14010B740 (PoIdle.c)
 *     PpmIdlePrepare @ 0x14010DF60 (PpmIdlePrepare.c)
 *     ExpQueueWorkItem @ 0x140125F10 (ExpQueueWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)qword_1403CB6A0 + *a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1);
}
