/*
 * XREFs of ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18000A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x180009730 (-_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18002E5C0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006D604 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::IsViewPresentedOnActivationVirtualDesktop(
        IUnknown **this,
        HWND a2,
        unsigned __int64 a3,
        bool *a4)
{
  int GlomForWindow; // ebx
  CApplicationViewManager *Ptr; // rbx
  __int64 (__fastcall *v10)(CApplicationViewManager *__hidden, struct IImmersiveApplication *, struct IApplicationView **); // rax
  int ViewForApplication; // eax
  struct IVirtualDesktop *v13; // [rsp+20h] [rbp-20h] BYREF
  struct IImmersiveApplication *v14; // [rsp+28h] [rbp-18h] BYREF
  struct IImmersiveApplicationInternal *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationView *v17; // [rsp+88h] [rbp+48h] BYREF

  v15[1] = (struct IImmersiveApplicationInternal *)-2LL;
  *a4 = 1;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  GlomForWindow = CAppViewManager::_GetGlomForWindow((CAppViewManager *)(this - 4), a2, v15, (bool *)&v16);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow >= 0 )
  {
    if ( (_BYTE)v16 )
    {
      v14 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(v15, &v14) >= 0 )
      {
        v17 = 0LL;
        Ptr = (CApplicationViewManager *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
        v10 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, struct IImmersiveApplication *, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
        if ( v10 == CApplicationViewManager::GetViewForApplication )
          ViewForApplication = CApplicationViewManager::GetViewForApplication(Ptr, v14, &v17);
        else
          ViewForApplication = v10(Ptr, v14, &v17);
        GlomForWindow = ViewForApplication;
        if ( ViewForApplication >= 0 )
        {
          v13 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
          if ( (int)CAppViewManager::_GetVirtualDesktopForPendingActivation(this - 4, a3, &v13) < 0 )
          {
            GlomForWindow = 0;
          }
          else
          {
            GlomForWindow = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, struct IApplicationView *, int *))(*(_QWORD *)v13 + 24LL))(
                              v13,
                              v17,
                              &v16);
            if ( GlomForWindow >= 0 )
              *a4 = v16 != 0;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    }
    else
    {
      *a4 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  return (unsigned int)GlomForWindow;
}
