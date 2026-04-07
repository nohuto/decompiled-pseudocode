/*
 * XREFs of ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180075348
 * Callers:
 *     ?CheckInteropDCompDevice@CDesktopManager@@AEAAJXZ @ 0x1800255C0 (-CheckInteropDCompDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180047C10 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18003BB50 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800702A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void CDesktopManager::HandleInteropDeviceLost(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rcx
  CDesktopManager *v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    v0 = CDesktopManager::s_pDesktopManagerInstance;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26) = 0LL;
  }
  v2 = (CDesktopManager *)*((_QWORD *)v0 + 27);
  if ( v2 )
  {
    (*(void (__fastcall **)(CDesktopManager *))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27) = 0LL;
  }
  v3 = CDesktopManager::EnsureDCompositionInteropDevice(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC8A,
      (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v3);
}
