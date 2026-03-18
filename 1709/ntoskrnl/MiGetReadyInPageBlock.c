/*
 * XREFs of MiGetReadyInPageBlock @ 0x1406E2624
 * Callers:
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x14002AA00 (MiInitializeInPageSupport.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 */

ULONG_PTR __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 **VadEvent; // rsi
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // rdx
  __int64 *v4; // rdi

  VadEvent = MiLocateVadEvent(a1, 8);
  v2 = (ULONG_PTR)VadEvent[1];
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v4 = (__int64 *)MiGetInPageSupportBlock(0);
    if ( v4 )
    {
      MiFreeInPageSupportBlock((char *)v2, v3);
      VadEvent[1] = v4;
      v2 = (ULONG_PTR)v4;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0);
  return v2;
}
