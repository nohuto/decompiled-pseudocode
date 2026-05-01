/*
 * XREFs of ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004EF0C
 * Callers:
 *     ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004FF50 (-ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x180052A90 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1801E7360 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PushDesiredBoundsToView(ViewWrapperBase *this, const struct APPLICATION_VIEW_DATA *a2)
{
  const struct tagRECT *v2; // r8
  struct IUnknown *v4; // rdx
  void (__fastcall *v5)(ViewManagerBridge *__hidden, struct IUnknown *, const struct tagRECT *, const struct APPLICATION_VIEW_DATA *); // rax
  ViewManagerBridge *v6; // rcx

  v2 = (const struct tagRECT *)((char *)this + 200);
  v4 = (struct IUnknown *)*((_QWORD *)this + 24);
  v5 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, const struct tagRECT *, const struct APPLICATION_VIEW_DATA *))(**(_QWORD **)(*((_QWORD *)this + 21) + 520LL) + 64LL);
  v6 = *(ViewManagerBridge **)(*((_QWORD *)this + 21) + 520LL);
  if ( v5 == ViewManagerBridge::SetBoundsForView )
    ViewManagerBridge::SetBoundsForView(v6, v4, v2, a2);
  else
    v5(v6, v4, v2, a2);
}
