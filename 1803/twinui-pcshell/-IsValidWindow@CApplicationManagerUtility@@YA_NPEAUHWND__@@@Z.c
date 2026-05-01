/*
 * XREFs of ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18000AC5C
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18000AC18 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x18000B260 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800413D0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18004829C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_8d0ab586cd065271f427bd7ab75519d7___ @ 0x180101A38 (CDelayIAMOperations--AddOperation__lambda_8d0ab586cd065271f427bd7ab75519d7___.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x180101B30 (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     CDelayIAMOperations::AddOperation__lambda_a3dacda60d197dca336493a83fab45ae___ @ 0x180101C28 (CDelayIAMOperations--AddOperation__lambda_a3dacda60d197dca336493a83fab45ae___.c)
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x180101D2C (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x180101E58 (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180134E78 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsValidWindow(CApplicationManagerUtility *this, HWND a2)
{
  int v3; // eax
  char v4; // bl

  SetLastError(0);
  v3 = IsWindowInDestroy(this);
  v4 = 0;
  if ( !v3 )
    return GetLastError() != 1400;
  return v4;
}
