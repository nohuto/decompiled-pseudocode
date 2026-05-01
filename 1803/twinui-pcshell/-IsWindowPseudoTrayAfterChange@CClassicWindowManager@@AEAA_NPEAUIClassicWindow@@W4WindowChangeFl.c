/*
 * XREFs of ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180006EB4
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18011AE40 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 * Callees:
 *     ?IsTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x180007E60 (-IsTrayWindow@CClassicWindow@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180112698 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180112794 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CClassicWindowManager::IsWindowPseudoTrayAfterChange(__int64 a1, CClassicWindow *a2, char a3)
{
  bool (__fastcall *v5)(CClassicWindow *__hidden); // rax
  bool IsTrayWindow; // al
  HWND v8; // rax
  HWND v9; // rax
  HWND v10; // rdx
  CApplicationManagerUtility *v11; // rax
  HWND v12; // rdx
  HWND v13; // rax
  HWND Window; // rdi
  HWND v15; // rax
  HWND v16; // rax
  HWND v17; // rbp
  char v18; // si
  HWND v19; // rbx
  HWND v20; // rdx

  v5 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)a2 + 136LL);
  if ( v5 == CClassicWindow::IsTrayWindow )
    IsTrayWindow = CClassicWindow::IsTrayWindow(a2);
  else
    IsTrayWindow = v5(a2);
  if ( (!IsTrayWindow || (a3 & 8) != 0)
    && (a3 & 4) == 0
    && ((*(unsigned __int8 (__fastcall **)(CClassicWindow *))(*(_QWORD *)a2 + 160LL))(a2) || (a3 & 1) != 0)
    && (a3 & 2) == 0 )
  {
    v8 = (HWND)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    if ( IsWindowVisible(v8) )
    {
      v9 = (HWND)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
      if ( CApplicationManagerUtility::IsTrayWindowStyleCheck(v9, v10) )
      {
        v11 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
        if ( !CApplicationManagerUtility::IsForcedAppWindow(v11, v12) )
        {
          v13 = (HWND)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
          Window = GetWindow(v13, 4u);
          if ( Window )
          {
            v15 = (HWND)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
            if ( IsWindowEnabled(v15) )
            {
              v16 = (HWND)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
              if ( IsWindowVisible(v16) )
              {
                if ( !IsWindowVisible(Window) || !IsWindowEnabled(Window) )
                {
                  v17 = (HWND)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
                  v18 = 1;
                  while ( 1 )
                  {
                    v19 = GetWindow(Window, 4u);
                    if ( IsWindowVisible(Window) )
                    {
                      if ( CApplicationManagerUtility::IsTrayWindowStyleCheck(Window, v20)
                        && (!v19
                         || CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)Window, v20)) )
                      {
                        break;
                      }
                    }
                    if ( CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)Window, v20) )
                      v18 = 0;
                    if ( v18
                      && (GetWindowLongPtrW(Window, -20) & 0x80u) != 0LL
                      && ((GetWindowLongPtrW(v17, -20) & 0x10000) == 0 || v19) )
                    {
                      break;
                    }
                    v17 = Window;
                    Window = v19;
                    if ( !v19 )
                      return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
