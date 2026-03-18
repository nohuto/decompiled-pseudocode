/*
 * XREFs of ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C004F9B4
 * Callers:
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FB2C (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOpe.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0050264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 */

__int64 __fastcall FlipManagerObject::CreatePresentUpdateForProducer(
        FlipManagerObject *this,
        unsigned __int64 a2,
        bool a3,
        struct CFlipPropertySet *a4,
        struct CFlipPresentUpdate **a5)
{
  int PresentUpdateForProducer; // ebx

  PresentUpdateForProducer = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( PresentUpdateForProducer >= 0 )
  {
    PresentUpdateForProducer = CFlipManager::CreatePresentUpdateForProducer(
                                 (FlipManagerObject *)((char *)this + 24),
                                 a2,
                                 a3,
                                 a4,
                                 a5);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 32));
  }
  return (unsigned int)PresentUpdateForProducer;
}
