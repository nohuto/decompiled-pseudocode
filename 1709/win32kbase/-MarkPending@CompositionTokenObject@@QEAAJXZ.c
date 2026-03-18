/*
 * XREFs of ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C005B2CC
 * Callers:
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B034 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00387DC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionTokenObject::MarkPending(CompositionTokenObject *this)
{
  int v2; // ebx

  v2 = CPushLock::AcquireLockShared((CompositionTokenObject *)((char *)this + 64));
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 14) )
      v2 = -1073741823;
    else
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 16LL))((char *)this + 32);
    CPushLock::ReleaseLock((CompositionTokenObject *)((char *)this + 64));
  }
  return (unsigned int)v2;
}
