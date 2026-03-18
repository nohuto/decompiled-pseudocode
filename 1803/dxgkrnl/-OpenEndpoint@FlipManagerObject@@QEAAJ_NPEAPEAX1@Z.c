/*
 * XREFs of ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C004DFE0
 * Callers:
 *     NtFlipObjectOpen @ 0x1C004EF80 (NtFlipObjectOpen.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00471D0 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1C0050808 (-OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::OpenEndpoint(FlipManagerObject *this, unsigned __int8 a2, void **a3, void **a4)
{
  NTSTATUS Handle; // ebx
  __int64 v9; // r8

  Handle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( Handle >= 0 )
  {
    Handle = DxgkCompositionObject::CreateHandle(this, 0x10000000u, v9, 0, a3);
    if ( Handle >= 0 )
      Handle = CFlipManager::OpenEndpoint((FlipManagerObject *)((char *)this + 24), a2, a4);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 32));
  }
  return (unsigned int)Handle;
}
