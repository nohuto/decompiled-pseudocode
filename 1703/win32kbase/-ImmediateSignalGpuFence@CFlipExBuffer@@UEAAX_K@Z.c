/*
 * XREFs of ?ImmediateSignalGpuFence@CFlipExBuffer@@UEAAX_K@Z @ 0x1C0006B40
 * Callers:
 *     <none>
 * Callees:
 *     GreDxgkImmediateSignalSynchronizationObjectByReference @ 0x1C0004230 (GreDxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::ImmediateSignalGpuFence(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 39) )
    GreDxgkImmediateSignalSynchronizationObjectByReference();
}
