/*
 * XREFs of ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C004E06C
 * Callers:
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1C004F180 (NtFlipObjectQueryBufferAvailableEvent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z @ 0x1C0050BC0 (-QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::QueryBufferAvailableEvent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        void **a3)
{
  int BufferAvailableEvent; // ebx

  BufferAvailableEvent = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( BufferAvailableEvent >= 0 )
  {
    BufferAvailableEvent = CFlipManager::QueryBufferAvailableEvent((FlipManagerObject *)((char *)this + 24), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 32));
  }
  return (unsigned int)BufferAvailableEvent;
}
