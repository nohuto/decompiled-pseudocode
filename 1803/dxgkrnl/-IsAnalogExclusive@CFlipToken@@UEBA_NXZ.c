/*
 * XREFs of ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C000E920
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlipToken::IsAnalogExclusive(CFlipToken *this)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // rcx
  char v5; // bp

  v1 = *((_QWORD *)this + 4);
  v2 = v1 + 40;
  v3 = 0;
  if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v1 + 40))(v1 + 40) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v1 + 48, 0LL);
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))v2)(v1 + 40) )
    {
      v4 = v1 + 48;
      v5 = *(_BYTE *)(v1 + 120);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v2 + 16) )
      {
        *(_QWORD *)(v2 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v4, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v4, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v5 )
        return 1;
    }
    else
    {
      CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
    }
  }
  return v3;
}
