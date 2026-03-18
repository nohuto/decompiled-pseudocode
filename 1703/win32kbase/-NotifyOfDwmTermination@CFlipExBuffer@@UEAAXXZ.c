/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C0151C00
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C0011EEC (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0011FB0 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CRegion **this)
{
  CFlipExBuffer::SignalMaxGpuFence((CFlipExBuffer *)this);
  CFlipExBuffer::ReleasePendingPresentLimits((CFlipExBuffer *)this);
  CRegion::SetFullRegion(this[31]);
}
