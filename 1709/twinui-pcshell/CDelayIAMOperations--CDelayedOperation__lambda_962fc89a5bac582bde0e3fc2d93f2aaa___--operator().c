/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___::operator() @ 0x18001ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002BF78 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x18002C9B0 (-CanChangeForeground@@YAJXZ.c)
 */

int __fastcall CDelayIAMOperations::CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___::operator()(
        __int64 a1)
{
  int result; // eax
  HWND v3; // rdx
  HWND LastActiveVisiblePopupOrSelf; // rax

  result = CanChangeForeground();
  if ( result >= 0 )
  {
    LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
                                     *(CApplicationManagerUtility **)(a1 + 16),
                                     v3);
    return SetForegroundWindow(LastActiveVisiblePopupOrSelf);
  }
  return result;
}
