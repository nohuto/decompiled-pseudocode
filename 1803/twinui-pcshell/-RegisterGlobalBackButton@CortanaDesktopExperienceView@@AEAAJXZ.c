/*
 * XREFs of ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800646A0
 * Callers:
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064920 (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180065EE0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800648B8 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::RegisterGlobalBackButton(CortanaDesktopExperienceView *this)
{
  int v2; // esi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_DWORD)this + 220;
  if ( *((_DWORD *)this + 55) )
    return 0LL;
  v3 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3,
      v9);
  }
  else
  {
    v11 = 0LL;
    v5 = *((_QWORD *)this + 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v6 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &SID_ShellTargetingTracker,
           &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
           &v11);
    v4 = v6;
    if ( v6 < 0 )
    {
      v8 = 1497LL;
    }
    else
    {
      v9 = v2;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v11 + 24LL))(
             v11,
             3LL,
             1LL,
             (char *)this + 48);
      v4 = v6;
      if ( v6 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        return 0LL;
      }
      v8 = 1499LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return v4;
}
