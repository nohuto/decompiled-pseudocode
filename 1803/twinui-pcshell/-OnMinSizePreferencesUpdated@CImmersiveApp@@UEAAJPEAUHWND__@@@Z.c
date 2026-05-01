/*
 * XREFs of ?OnMinSizePreferencesUpdated@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18004C440
 * Callers:
 *     ?OnMinSizePreferencesUpdated@CWinRTApplicationView@@UEAAJPEAUHWND__@@@Z @ 0x18001BE50 (-OnMinSizePreferencesUpdated@CWinRTApplicationView@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x180013C60 (-OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::OnMinSizePreferencesUpdated(CImmersiveApp *this, HWND a2)
{
  CFrameApplicationPresentation *v4; // rcx
  __int64 (__fastcall *v5)(CFrameApplicationPresentation *, HWND); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (CFrameApplicationPresentation *)*((_QWORD *)this + 39);
  v5 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, HWND))(*(_QWORD *)v4 + 184LL);
  if ( v5 == CFrameApplicationPresentation::OnMinSizePreferencesUpdated )
    v6 = CFrameApplicationPresentation::OnMinSizePreferencesUpdated(v4, a2);
  else
    v6 = v5(v4, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x864,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v6,
      v9);
    return v7;
  }
  else
  {
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    return 0LL;
  }
}
