/*
 * XREFs of ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01BF6F4
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C008B2C0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::DestroyPeriodicFrameNotification(DXGSYNCOBJECT *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 2312LL) + 504LL) + 8LL) + 848LL))();
    *((_QWORD *)this + 19) = 0LL;
  }
}
