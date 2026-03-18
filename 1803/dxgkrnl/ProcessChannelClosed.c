/*
 * XREFs of ProcessChannelClosed @ 0x1C01E5870
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C01E5268 (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall ProcessChannelClosed(__int64 a1)
{
  DXGVMBUSCHANNEL *Pointer; // rax

  Pointer = (DXGVMBUSCHANNEL *)VmbChannelGetPointer(a1);
  if ( Pointer )
    DXGVMBUSCHANNEL::NotifyChannelClosed(Pointer);
}
