/*
 * XREFs of ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180034620
 * Callers:
 *     ?RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z @ 0x1800342B0 (-RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x1800F06F4 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 *     _lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_::operator() @ 0x1801C9430 (_lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_--operator().c)
 * Callees:
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?GetViewInstanceId@ViewWrapperBase@@UEAAIXZ @ 0x1800514C0 (-GetViewInstanceId@ViewWrapperBase@@UEAAIXZ.c)
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x180052A90 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180052CA0 (-HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?GetDesiredNavigationLevel@ViewWrapperBase@@UEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180052CB0 (-GetDesiredNavigationLevel@ViewWrapperBase@@UEAA-AW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?GetHostViewStateOverrides@ViewWrapperBase@@UEAA?AUHostViewStateOverrides@@XZ @ 0x180052CE0 (-GetHostViewStateOverrides@ViewWrapperBase@@UEAA-AUHostViewStateOverrides@@XZ.c)
 *     ?SetHostViewInstanceId@ViewWrapperBase@@UEAAXI@Z @ 0x1800530C0 (-SetHostViewInstanceId@ViewWrapperBase@@UEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::_PropagateNewRegistration(
        ViewEventDispatcher *this,
        struct IViewWrapperInternal *a2,
        struct IViewWrapperInternal *a3)
{
  unsigned int (__fastcall *v6)(ViewWrapperBase *__hidden); // rax
  unsigned int ViewInstanceId; // eax
  __int64 v8; // rdx
  void (__fastcall *v9)(ViewWrapperBase *__hidden, unsigned int); // rax
  __int64 (__fastcall *v10)(struct IViewWrapperInternal *); // rax
  unsigned int DesiredNavigationLevel; // eax
  __int64 v12; // rdx
  void (__fastcall *v13)(struct IViewWrapperInternal *, __int64); // rax
  __int64 (__fastcall *v14)(struct IViewWrapperInternal *, char *); // rax
  __int64 HostViewStateOverrides; // rax
  const struct HostViewStateOverrides *v16; // rdx
  void (__fastcall *v17)(ViewWrapperBase *__hidden, const struct HostViewStateOverrides *); // rax
  char v18; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)a2 + 592LL);
    if ( v6 == ViewWrapperBase::GetViewInstanceId )
      ViewInstanceId = ViewWrapperBase::GetViewInstanceId(a2);
    else
      ViewInstanceId = v6(a2);
    v8 = ViewInstanceId;
    v9 = *(void (__fastcall **)(ViewWrapperBase *__hidden, unsigned int))(*(_QWORD *)a3 + 768LL);
    if ( v9 == ViewWrapperBase::SetHostViewInstanceId )
      ViewWrapperBase::SetHostViewInstanceId(a3, v8);
    else
      v9(a3, v8);
    v10 = *(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 816LL);
    if ( (char *)v10 == (char *)ViewWrapperBase::GetDesiredNavigationLevel )
      DesiredNavigationLevel = ViewWrapperBase::GetDesiredNavigationLevel(a2);
    else
      DesiredNavigationLevel = v10(a2);
    v12 = DesiredNavigationLevel;
    v13 = *(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)a3 + 792LL);
    if ( (char *)v13 == (char *)ViewWrapperBase::HostNavigationLevelChanged )
      ViewWrapperBase::HostNavigationLevelChanged(a3, v12);
    else
      v13(a3, v12);
    v14 = *(__int64 (__fastcall **)(struct IViewWrapperInternal *, char *))(*(_QWORD *)a2 + 808LL);
    if ( (char *)v14 == (char *)ViewWrapperBase::GetHostViewStateOverrides )
      HostViewStateOverrides = ViewWrapperBase::GetHostViewStateOverrides(a2, &v18);
    else
      HostViewStateOverrides = v14(a2, &v18);
    v16 = (const struct HostViewStateOverrides *)HostViewStateOverrides;
    v17 = *(void (__fastcall **)(ViewWrapperBase *__hidden, const struct HostViewStateOverrides *))(*(_QWORD *)a3 + 800LL);
    if ( v17 == ViewWrapperBase::HostViewStateOverridesChanged )
      ViewWrapperBase::HostViewStateOverridesChanged(a3, v16);
    else
      v17(a3, v16);
  }
  ViewEventDispatcher::_HostChanged(this, a3);
}
