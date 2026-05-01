/*
 * XREFs of ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800679C0
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800794C0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800797F0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Uncloak@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180065EB0 (-Uncloak@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800674D4 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Uncloak(CortanaSharedExperienceManager *this)
{
  __int64 (__fastcall *v1)(CortanaDesktopExperienceView *); // rax
  unsigned int v2; // eax
  unsigned int v3; // ebx
  CortanaDesktopExperienceView *v5; // [rsp+48h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::TryGetDesktopViewIfActive((__int64)this, &v5);
  if ( v5 )
  {
    v1 = *(__int64 (__fastcall **)(CortanaDesktopExperienceView *))(*(_QWORD *)v5 + 104LL);
    if ( v1 == CortanaDesktopExperienceView::Uncloak )
      v2 = CortanaDesktopExperienceView::Uncloak(v5);
    else
      v2 = v1(v5);
    v3 = v2;
  }
  else
  {
    v3 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return v3;
}
