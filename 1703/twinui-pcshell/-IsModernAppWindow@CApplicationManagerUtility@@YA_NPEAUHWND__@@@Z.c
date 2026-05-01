/*
 * XREFs of ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A528
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18000F1B0 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18001129C (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CApplicationManagerUtility::IsModernAppWindow(CApplicationManagerUtility *this, HWND a2)
{
  char v3; // bl
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( (unsigned int)GetWindowBand(this, &v5) )
  {
    if ( v5 == 1 || v5 == 8 )
    {
      if ( v5 != 1 )
        return 1;
    }
    else if ( v5 != 1 )
    {
      return v3;
    }
    if ( (unsigned int)IsShellManagedWindow(this) )
      return 1;
  }
  return v3;
}
