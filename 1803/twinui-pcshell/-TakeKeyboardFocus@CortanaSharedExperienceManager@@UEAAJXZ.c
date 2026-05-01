/*
 * XREFs of ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180067A20
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180078B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TakeKeyboardFocus@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180065E70 (-TakeKeyboardFocus@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800674D4 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::TakeKeyboardFocus(CortanaSharedExperienceManager *this)
{
  __int64 (__fastcall *v1)(CortanaDesktopExperienceView *); // rax
  unsigned int v2; // eax
  unsigned int v3; // ebx
  CortanaDesktopExperienceView *v5; // [rsp+48h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::TryGetDesktopViewIfActive((__int64)this, &v5);
  if ( v5 )
  {
    v1 = *(__int64 (__fastcall **)(CortanaDesktopExperienceView *))(*(_QWORD *)v5 + 96LL);
    if ( v1 == CortanaDesktopExperienceView::TakeKeyboardFocus )
      v2 = CortanaDesktopExperienceView::TakeKeyboardFocus(v5);
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
