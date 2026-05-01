/*
 * XREFs of ?_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x1800308EC
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x1800302C0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationCreation(
        IUnknown *punkSite,
        IUnknown *punk,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a3,
        struct ITaskWindow *a4)
{
  int v8; // ebx
  IUnknown *v9; // rcx
  IUnknown *v11; // [rsp+48h] [rbp+10h] BYREF

  IUnknown_SetSite(punk, punkSite);
  v8 = ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct ITaskWindow *))punk->lpVtbl[1].AddRef)(
         punk,
         a3,
         a4);
  if ( v8 >= 0 )
  {
    v11 = punk;
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
    v8 = ((__int64 (__fastcall *)(IUnknown *, IUnknown **))punkSite[27].lpVtbl->AddRef)(&punkSite[27], &v11);
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
    }
    if ( v8 < 0 )
      IUnknown_SetSite(punk, 0LL);
  }
  return (unsigned int)v8;
}
