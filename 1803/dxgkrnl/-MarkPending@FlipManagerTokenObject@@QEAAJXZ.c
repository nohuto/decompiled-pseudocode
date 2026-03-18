/*
 * XREFs of ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C004BC58
 * Callers:
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BCB8 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011BB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlipManagerTokenObject::MarkPending(FlipManagerTokenObject *this)
{
  int v2; // ebx

  v2 = CPushLock::AcquireLockShared((FlipManagerTokenObject *)((char *)this + 64));
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 14) )
      v2 = -1073741823;
    else
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 16LL))((char *)this + 32);
    CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 64));
  }
  return (unsigned int)v2;
}
