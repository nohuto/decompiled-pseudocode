/*
 * XREFs of ?get_LockCurtainShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180067880
 * Callers:
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get_LockCurtainShowing@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180066220 (-get_LockCurtainShowing@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x18006743C (-GetDesktopView@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceView@Cortana@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::get_LockCurtainShowing(
        CortanaSharedExperienceManager *this,
        unsigned __int8 *a2)
{
  __int64 (__fastcall *v3)(CortanaDesktopExperienceView *, unsigned __int8 *); // rax
  unsigned int LockCurtainShowing; // eax
  unsigned int v5; // ebx
  CortanaDesktopExperienceView *v7; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  CortanaSharedExperienceManager::GetDesktopView((__int64)this, &v7);
  if ( v7 )
  {
    v3 = *(__int64 (__fastcall **)(CortanaDesktopExperienceView *, unsigned __int8 *))(*(_QWORD *)v7 + 32LL);
    if ( v3 == CortanaDesktopExperienceView::get_LockCurtainShowing )
      LockCurtainShowing = CortanaDesktopExperienceView::get_LockCurtainShowing(v7, a2);
    else
      LockCurtainShowing = v3(v7, a2);
    v5 = LockCurtainShowing;
  }
  else
  {
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v5;
}
