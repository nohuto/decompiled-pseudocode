/*
 * XREFs of ?IsWindowOfType@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_ZBAND_TYPE@1@@Z @ 0x1801127D4
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18011273C (-IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsWindowOfType(CApplicationManagerUtility *a1, int a2)
{
  char v3; // bl
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = 0;
  if ( (unsigned int)GetWindowBand(a1, &v5)
    && ((v5 == 1 || v5 == 8) && v5 != 1
     || CApplicationManagerUtility::IsModernAppWindow(a1, (HWND)(unsigned int)(v5 - 1))) )
  {
    return 1;
  }
  return v3;
}
