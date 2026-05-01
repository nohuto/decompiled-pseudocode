/*
 * XREFs of ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x1802E9800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1802E8B20 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z @ 0x1802E8F4C (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z.c)
 *     ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1802E909C (-GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1802E9F24 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1802E9FEC (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowBorderEnter(JointResize *this, HWND a2, int a3, char a4)
{
  int GhostDivider; // eax
  tagCURSORINFO pci; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationView *v10; // [rsp+60h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 136) )
    goto LABEL_10;
  if ( (a4 & 2) != 0 )
    goto LABEL_10;
  pci.cbSize = 24;
  memset(&pci.flags, 0, 20);
  if ( GetCursorInfo(&pci) )
  {
    if ( (pci.flags & 1) == 0 )
      goto LABEL_10;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  if ( (int)JointResize::GetViewForWindow((JointResize *)((char *)this - 88), a2, &v10) < 0
    || (int)JointResize::CalculateSecondaryView(
              (JointResize *)((char *)this - 88),
              (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v10,
              a3) < 0 )
  {
LABEL_9:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
LABEL_10:
    (*(void (__fastcall **)(JointResize *))(*(_QWORD *)this + 32LL))(this);
    return;
  }
  GhostDivider = JointResize::CreateGhostDivider((_QWORD *)this - 11, 1u, a3 != 10);
  if ( GhostDivider < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      182LL,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)GhostDivider);
    goto LABEL_9;
  }
  JointResize::RegisterRawInput((JointResize *)((char *)this - 88), 1);
  JointResize::RegisterViewChanges((JointResize *)((char *)this - 88), 1);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
}
