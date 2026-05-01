/*
 * XREFs of ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800643E4
 * Callers:
 *     ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180066130 (-Hide@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1801854A0 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180185FB0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800648B8 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::UnregisterGlobalBackButton(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 55) )
    return 0LL;
  v2 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E4,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2,
      v8);
  }
  else
  {
    v10 = 0LL;
    v4 = *((_QWORD *)this + 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v5 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &SID_ShellTargetingTracker,
           &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
           &v10);
    v3 = v5;
    if ( v5 < 0 )
    {
      v7 = 1511LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, *((unsigned int *)this + 55));
      v3 = v5;
      if ( v5 >= 0 )
      {
        *((_DWORD *)this + 55) = 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        return 0LL;
      }
      v7 = 1513LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v5,
      v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  return v3;
}
