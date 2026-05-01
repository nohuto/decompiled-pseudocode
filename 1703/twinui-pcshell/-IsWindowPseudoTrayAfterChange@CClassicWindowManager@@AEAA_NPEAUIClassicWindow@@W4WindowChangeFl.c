/*
 * XREFs of ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x1800358B4
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180034A10 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180035FA8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 * Callees:
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A584 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClassicWindowManager::IsWindowPseudoTrayAfterChange(__int64 a1, __int64 a2, unsigned int a3)
{
  HWND v5; // rax
  HWND v6; // rax
  HWND v7; // rdx
  HWND v8; // rax
  HWND v9; // rax
  HWND Window; // rdi
  HWND v11; // rax
  HWND v12; // rax
  HWND v13; // rsi
  char v14; // bp
  HWND v15; // rbx
  HWND v16; // rdx
  LONG_PTR WindowLongPtrW; // rax
  char v18; // cl

  if ( (!(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2) || (~(a3 >> 3) & 1) == 0)
    && (a3 & 4) == 0
    && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2) || (a3 & 1) != 0)
    && (a3 & 2) == 0 )
  {
    v5 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
    if ( IsWindowVisible(v5) )
    {
      v6 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
      if ( CApplicationManagerUtility::IsTrayWindowStyleCheck(v6, v7) )
      {
        v8 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
        if ( (GetWindowLongPtrW(v8, -20) & 0x40000) == 0 )
        {
          v9 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
          Window = GetWindow(v9, 4u);
          if ( Window )
          {
            v11 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
            if ( IsWindowEnabled(v11) )
            {
              v12 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
              if ( IsWindowVisible(v12) )
              {
                if ( !IsWindowVisible(Window) || !IsWindowEnabled(Window) )
                {
                  v13 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
                  v14 = 1;
                  while ( 1 )
                  {
                    v15 = GetWindow(Window, 4u);
                    if ( IsWindowVisible(Window) )
                    {
                      if ( CApplicationManagerUtility::IsTrayWindowStyleCheck(Window, v16)
                        && (!v15 || (GetWindowLongPtrW(Window, -20) & 0x40000) != 0) )
                      {
                        break;
                      }
                    }
                    WindowLongPtrW = GetWindowLongPtrW(Window, -20);
                    v18 = 0;
                    if ( (WindowLongPtrW & 0x40000) == 0 )
                      v18 = v14;
                    v14 = v18;
                    if ( v18 )
                    {
                      if ( (GetWindowLongPtrW(Window, -20) & 0x80u) != 0LL
                        && ((GetWindowLongPtrW(v13, -20) & 0x10000) == 0 || v15) )
                      {
                        break;
                      }
                    }
                    v13 = Window;
                    Window = v15;
                    if ( !v15 )
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
