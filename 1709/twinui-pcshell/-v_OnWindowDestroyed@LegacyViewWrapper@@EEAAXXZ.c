/*
 * XREFs of ?v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x18013AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180141554 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnWindowDestroyed(LegacyViewWrapper *this)
{
  __int64 v2; // rdx

  if ( *((_DWORD *)this + 140) == 1 )
    ViewWrapperBase::NavigateInternal(this, 0LL);
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 22) + 520LL) + 152LL))(
      *(_QWORD *)(*((_QWORD *)this + 22) + 520LL),
      v2,
      *((unsigned int *)this + 66));
}
