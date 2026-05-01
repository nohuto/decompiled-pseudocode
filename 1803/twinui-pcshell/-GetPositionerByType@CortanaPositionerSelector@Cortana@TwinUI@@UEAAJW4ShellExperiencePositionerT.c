/*
 * XREFs of ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x180084E50
 * Callers:
 *     ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x18006743C (-GetDesktopView@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceView@Cortana@.c)
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180085020 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     ?GetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x180085170 (-GetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAPEAUIShellExperiencePosit.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004370 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180084DBC (-InternalRelease@-$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x180183E84 (-_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperi.c)
 *     ??$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18018495C (--$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType(
        __int64 *a1,
        int a2,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a3)
{
  int v5; // edx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  void (*v8)(void); // rax
  unsigned int HoloExperiencePositioner; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF
  __int64 v16; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        HoloExperiencePositioner = TwinUI::Cortana::CortanaPositionerSelector::_GetHoloExperiencePositioner(
                                     (TwinUI::Cortana::CortanaPositionerSelector *)a1,
                                     a3);
        if ( (HoloExperiencePositioner & 0x80000000) == 0 )
          return HoloExperiencePositioner;
        v11 = 42LL;
      }
      else
      {
        HoloExperiencePositioner = -2147024809;
        v11 = 48LL;
      }
    }
    else
    {
      v6 = a1 + 2;
      if ( a1[2]
        || (Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease(a1 + 2),
            v15 = a1[5],
            v12 = a1[4],
            *v6 = 0LL,
            v16 = v12,
            v13 = Microsoft::WRL::Details::MakeAndInitialize<CortanaDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IServiceProvider * &,TwinUI::Cortana::ICortanaExperienceManagerNotification * &>(
                    v6,
                    &v16,
                    &v15),
            HoloExperiencePositioner = v13,
            v13 >= 0) )
      {
        v7 = *v6;
        if ( *v6 )
        {
          v8 = *(void (**)(void))(*(_QWORD *)v7 + 8LL);
          if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::AddRef )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::AddRef(v7);
          else
            v8();
        }
        HoloExperiencePositioner = 0;
        *a3 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v6;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBD6,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v13);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x95,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
          (const char *)HoloExperiencePositioner);
      }
      if ( (HoloExperiencePositioner & 0x80000000) == 0 )
        return HoloExperiencePositioner;
      v11 = 39LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
      (const char *)HoloExperiencePositioner);
    return HoloExperiencePositioner;
  }
  return 0LL;
}
