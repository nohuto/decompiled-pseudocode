/*
 * XREFs of ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01C07DC
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F9720 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::DestroyPeriodicFrameNotification(DXGSYNCOBJECT *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 2464LL) + 520LL) + 8LL) + 960LL))();
    *((_QWORD *)this + 20) = 0LL;
  }
}
