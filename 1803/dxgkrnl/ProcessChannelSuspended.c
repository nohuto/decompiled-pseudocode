/*
 * XREFs of ProcessChannelSuspended @ 0x1C01E58D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C01E5358 (-NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall ProcessChannelSuspended(__int64 a1)
{
  struct _EX_RUNDOWN_REF *Pointer; // rax

  Pointer = (struct _EX_RUNDOWN_REF *)VmbChannelGetPointer(a1);
  if ( Pointer )
    DXGVMBUSCHANNEL::NotifyChannelSuspended(Pointer);
}
