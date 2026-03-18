/*
 * XREFs of ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C004E0DC
 * Callers:
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C004F3E0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C004F540 (NtFlipObjectReadNextMessageToProducer.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0050C24 (-QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::QueryNextMessageToProducer(
        FlipManagerObject *this,
        bool a2,
        struct CFlipConsumerMessage **a3)
{
  int NextMessageToProducer; // ebx

  NextMessageToProducer = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( NextMessageToProducer >= 0 )
  {
    NextMessageToProducer = CFlipManager::QueryNextMessageToProducer((FlipManagerObject *)((char *)this + 24), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 32));
  }
  return (unsigned int)NextMessageToProducer;
}
