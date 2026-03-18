/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C0153080
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C00394E4 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0039600 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C003A804 (-SetFullRegion@CRegion@@QEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CRegion **this)
{
  CFlipExBuffer::SignalMaxGpuFence((CFlipExBuffer *)this);
  CFlipExBuffer::ReleasePendingPresentLimits((CFlipExBuffer *)this);
  CRegion::SetFullRegion(this[31]);
}
