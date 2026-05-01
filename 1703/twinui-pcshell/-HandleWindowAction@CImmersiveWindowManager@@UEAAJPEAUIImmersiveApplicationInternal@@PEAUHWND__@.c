/*
 * XREFs of ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x18002EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18002EFAC (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 *     ?_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18002F0E0 (-_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEA.c)
 *     ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x18002F1A4 (-_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@P.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18002F398 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::HandleWindowAction(
        __int64 a1,
        IUnknown *a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        int a5,
        struct ITaskWindow *a6)
{
  __int64 v7; // r8
  unsigned int v8; // r11d

  v7 = 0LL;
  v8 = -2147024809;
  switch ( a5 )
  {
    case 0:
      return (unsigned int)CImmersiveWindowManager::_HandleApplicationCreation((IUnknown *)(a1 - 128), a2, a4, a6);
    case 1:
LABEL_9:
      if ( a5 != 1 )
      {
        switch ( a5 )
        {
          case 9:
            v7 = 1LL;
            break;
          case 10:
            v7 = 2LL;
            break;
          case 11:
            v7 = 3LL;
            break;
        }
      }
      return ((unsigned int (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, struct ITaskWindow *))a2->lpVtbl[2].QueryInterface)(
               a2,
               a4,
               v7,
               a6);
    case 2:
      return (unsigned int)CImmersiveWindowManager::_HandleApplicationActivation(
                             (CImmersiveWindowManager *)(a1 - 128),
                             (struct IImmersiveApplicationInternal *)a2,
                             a3);
    case 5:
      return ((unsigned int (__fastcall *)(IUnknown *, HWND, _QWORD, _QWORD))a2->lpVtbl[4].Release)(a2, a3, 0LL, 0LL);
    case 6:
      return (unsigned int)CImmersiveWindowManager::_RemoveApplication(
                             (CImmersiveWindowManager *)(a1 - 128),
                             (struct IImmersiveApplicationInternal *)a2);
    case 7:
      return ((unsigned int (__fastcall *)(IUnknown *, HWND, _QWORD))a2->lpVtbl[2].AddRef)(a2, a3, 0LL);
    case 8:
      return (unsigned int)CImmersiveWindowManager::_HandleApplicationPrecreation((IUnknown *)(a1 - 128), a2);
  }
  if ( (unsigned int)(a5 - 9) <= 2 )
    goto LABEL_9;
  return v8;
}
