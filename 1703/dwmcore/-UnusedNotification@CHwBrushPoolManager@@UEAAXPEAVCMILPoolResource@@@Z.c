/*
 * XREFs of ?UnusedNotification@CHwBrushPoolManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1801A28D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBrushPoolManager::UnusedNotification(CHwBrushPoolManager *this, struct CMILPoolResource *a2)
{
  __int64 v4; // rdx

  v4 = (__int64)a2 + 40;
  if ( !a2 )
    v4 = 48LL;
  InterlockedPushEntrySList((PSLIST_HEADER)this + 1, (PSLIST_ENTRY)v4);
  if ( _InterlockedDecrement((volatile signed __int32 *)this + 18) == -1 )
  {
    if ( this )
      (*(void (__fastcall **)(CHwBrushPoolManager *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  }
}
