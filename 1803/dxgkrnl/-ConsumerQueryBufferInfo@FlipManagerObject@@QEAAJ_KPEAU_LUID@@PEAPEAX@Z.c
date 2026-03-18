/*
 * XREFs of ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C004DE94
 * Callers:
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x1C004EB80 (NtFlipObjectConsumerQueryBufferInfo.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00501D0 (-ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerQueryBufferInfo(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  int BufferInfo; // ebx

  BufferInfo = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( BufferInfo >= 0 )
  {
    BufferInfo = CFlipManager::ConsumerQueryBufferInfo((FlipManagerObject *)((char *)this + 24), a2, a3, a4);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 32));
  }
  return (unsigned int)BufferInfo;
}
