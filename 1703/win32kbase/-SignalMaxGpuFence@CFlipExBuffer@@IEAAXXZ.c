/*
 * XREFs of ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C0011EEC
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C00125A8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C0151C00 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SignalMaxGpuFence(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 40) )
    (*(void (__fastcall **)(CFlipExBuffer *))(*(_QWORD *)this + 88LL))(this);
}
