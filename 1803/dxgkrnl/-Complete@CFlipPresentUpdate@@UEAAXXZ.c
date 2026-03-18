/*
 * XREFs of ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0052480
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00508E8 (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipPresentUpdate::Complete(CFlipPresentUpdate *this)
{
  PRKEVENT *v1; // rbx

  v1 = (PRKEVENT *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 4)) >= 0 )
  {
    CFlipManager::ProcessCompletedProducerPresentUpdate(v1 + 3, this);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 4));
  }
  ObfDereferenceObject(v1);
}
