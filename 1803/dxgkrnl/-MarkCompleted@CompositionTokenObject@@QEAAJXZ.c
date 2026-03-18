/*
 * XREFs of ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C000DCA0
 * Callers:
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C000F9D8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011BB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionTokenObject::MarkCompleted(CompositionTokenObject *this)
{
  int v2; // ebx

  v2 = CPushLock::AcquireLockShared((CompositionTokenObject *)((char *)this + 64));
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32);
    else
      v2 = -1073741823;
    CPushLock::ReleaseLock((CompositionTokenObject *)((char *)this + 64));
  }
  return (unsigned int)v2;
}
