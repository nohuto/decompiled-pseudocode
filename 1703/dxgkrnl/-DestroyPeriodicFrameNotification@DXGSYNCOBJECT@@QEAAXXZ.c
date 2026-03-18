/*
 * XREFs of ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01A5C10
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00D8724 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::DestroyPeriodicFrameNotification(DXGSYNCOBJECT *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 2288LL) + 408LL) + 8LL) + 848LL))();
    *((_QWORD *)this + 17) = 0LL;
  }
}
