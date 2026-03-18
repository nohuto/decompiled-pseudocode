/*
 * XREFs of ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C004DC98
 * Callers:
 *     NtFlipObjectAddPoolBuffer @ 0x1C004E440 (NtFlipObjectAddPoolBuffer.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C004FE48 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::AddPoolBuffer(
        FlipManagerObject *this,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5)
{
  int v9; // ebx

  v9 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( v9 >= 0 )
  {
    v9 = CFlipManager::AddPoolBuffer((FlipManagerObject *)((char *)this + 24), a2, a3, a4, a5);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 32));
  }
  return (unsigned int)v9;
}
