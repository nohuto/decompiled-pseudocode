/*
 * XREFs of ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180075790
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IApplicationView *Ptr; // rdx
  PVOID v6; // rcx
  PVOID v7; // rdx

  v2 = this + 47;
  AcquireSRWLockExclusive(this + 47);
  Ptr = (struct IApplicationView *)this[52].Ptr;
  if ( a2 != Ptr || ((__int64)this[53].Ptr & 1) != 0 )
  {
    if ( Ptr && Ptr != a2 )
      CApplicationViewManager::RaiseApplicationViewChanged(this, Ptr, 9LL);
    if ( this[52].Ptr != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = this[52].Ptr;
      this[52].Ptr = a2;
      if ( v6 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
    }
    LODWORD(this[53].Ptr) &= ~1u;
    v7 = this[52].Ptr;
    if ( v7 )
      CApplicationViewManager::RaiseApplicationViewChanged(this, v7, 7LL);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
