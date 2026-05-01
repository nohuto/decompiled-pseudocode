/*
 * XREFs of ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801172D0
 * Callers:
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x1801148D0 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180117028 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 * Callees:
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800F8B48 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
        ViewWrapperBase *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  int v3; // edx
  ViewEventDispatcher *v4; // rcx
  _QWORD *v5; // rdx
  _DWORD v6[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v7[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v8; // [rsp+68h] [rbp-20h]

  if ( *((_DWORD *)a2 + 6) != *((_DWORD *)a3 + 6) )
  {
    v3 = *((_DWORD *)this + 33);
    v4 = (ViewEventDispatcher *)*((_QWORD *)this + 19);
    v6[1] = *((_DWORD *)a3 + 6);
    v7[0] = off_1801B4610;
    v7[1] = v6;
    v8 = v7;
    v6[0] = 1;
    ViewEventDispatcher::_ForEachComponent(v4, v3, (__int64)v7);
    if ( v8 )
    {
      v5 = v7;
      LOBYTE(v5) = v8 != v7;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v5);
    }
  }
}
