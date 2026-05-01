/*
 * XREFs of ?GetDesiredNavigationLevel@ViewWrapperBase@@UEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180052CB0
 * Callers:
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180034620 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180056E10 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::GetDesiredNavigationLevel(__int64 a1)
{
  __int64 v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = a1 - 8;
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 120LL);
  if ( (char *)v2 == (char *)UAPViewWrapper::v_GetDesiredNavigationLevel )
    return UAPViewWrapper::v_GetDesiredNavigationLevel(v1);
  else
    return v2();
}
