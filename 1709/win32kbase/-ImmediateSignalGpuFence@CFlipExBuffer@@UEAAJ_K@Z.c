/*
 * XREFs of ?ImmediateSignalGpuFence@CFlipExBuffer@@UEAAJ_K@Z @ 0x1C0039B60
 * Callers:
 *     <none>
 * Callees:
 *     GreDxgkImmediateSignalSynchronizationObjectByReference @ 0x1C0096B10 (GreDxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::ImmediateSignalGpuFence(CFlipExBuffer *this)
{
  __int64 result; // rax

  result = 3221225659LL;
  if ( *((_QWORD *)this + 39) )
    return GreDxgkImmediateSignalSynchronizationObjectByReference();
  return result;
}
