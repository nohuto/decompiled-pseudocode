/*
 * XREFs of ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C004DE24
 * Callers:
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x1C004E830 (NtFlipObjectConsumerBeginProcessPresent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C004FFD8 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerBeginProcessPresent(
        FlipManagerObject *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int v6; // ebx

  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( v6 >= 0 )
  {
    v6 = CFlipManager::ConsumerBeginProcessPresent((FlipManagerObject *)((char *)this + 24), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 32));
  }
  return (unsigned int)v6;
}
