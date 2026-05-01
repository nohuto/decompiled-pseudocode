/*
 * XREFs of ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BE24
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18000F520 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800119C0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CApplicationManagerUtility::IsModernAppWindow(CApplicationManagerUtility *this, HWND a2)
{
  char v3; // bl
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( (unsigned int)GetWindowBand(this, &v5)
    && ((v5 == 1 || v5 == 8) && v5 != 1 || v5 == 1 && (unsigned int)IsShellManagedWindow(this)) )
  {
    return 1;
  }
  return v3;
}
