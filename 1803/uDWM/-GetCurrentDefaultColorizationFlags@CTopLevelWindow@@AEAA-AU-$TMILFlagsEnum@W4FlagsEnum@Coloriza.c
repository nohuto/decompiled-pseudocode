/*
 * XREFs of ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18001B8E8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x18001B91C (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18001F29C (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 */

int *__fastcall CTopLevelWindow::GetCurrentDefaultColorizationFlags(CTopLevelWindow *a1, _DWORD *a2)
{
  bool active; // al
  _DWORD *v3; // rdx
  CTopLevelWindow *v4; // rcx
  int *v5; // rdx
  int v6; // r8d

  *a2 = 0;
  active = CTopLevelWindow::TreatAsActiveWindow(a1);
  *v3 = 2 - active;
  if ( CTopLevelWindow::IsSheetOfGlass(v4) )
    *v5 = v6 | 0x40;
  return v5;
}
