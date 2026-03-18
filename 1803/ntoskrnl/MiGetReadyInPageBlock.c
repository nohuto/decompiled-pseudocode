/*
 * XREFs of MiGetReadyInPageBlock @ 0x14074D190
 * Callers:
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiInitializeInPageSupport @ 0x140127F00 (MiInitializeInPageSupport.c)
 */

ULONG_PTR __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 **VadEvent; // rsi
  ULONG_PTR v2; // rbx
  __int64 *v3; // rdi

  VadEvent = MiLocateVadEvent(a1, 8);
  v2 = (ULONG_PTR)VadEvent[1];
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = (__int64 *)MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      MiFreeInPageSupportBlock((char *)v2);
      VadEvent[1] = v3;
      v2 = (ULONG_PTR)v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0);
  return v2;
}
