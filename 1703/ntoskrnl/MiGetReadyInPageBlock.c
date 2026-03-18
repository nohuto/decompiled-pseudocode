/*
 * XREFs of MiGetReadyInPageBlock @ 0x1406B6334
 * Callers:
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1400FC010 (MiInitializeInPageSupport.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
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
