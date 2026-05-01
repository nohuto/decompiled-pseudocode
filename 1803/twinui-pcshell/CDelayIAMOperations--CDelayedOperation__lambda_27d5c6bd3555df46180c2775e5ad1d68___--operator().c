/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x180005340
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180084070 (-s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 */

int __fastcall CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator()(
        __int64 a1)
{
  __int64 v1; // rdi
  HWND ForegroundWindow; // rax

  v1 = *(_QWORD *)(a1 + 24);
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow == (HWND)v1 )
    LODWORD(ForegroundWindow) = CApplicationManager::OnShellHookMessage(
                                  (CApplicationManager *)(*(_QWORD *)(a1 + 16) + 160LL),
                                  0x13uLL,
                                  v1);
  return (int)ForegroundWindow;
}
