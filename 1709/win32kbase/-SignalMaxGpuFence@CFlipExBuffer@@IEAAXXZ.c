/*
 * XREFs of ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C00394E4
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003A124 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C0153080 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipExBuffer::SignalMaxGpuFence(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 40) )
    (*(void (__fastcall **)(CFlipExBuffer *))(*(_QWORD *)this + 96LL))(this);
}
