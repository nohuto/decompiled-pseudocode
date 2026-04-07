/*
 * XREFs of ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180026EDC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180026F0C (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18002AB80 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 */

_DWORD *__fastcall CTopLevelWindow::GetCurrentDefaultColorizationFlags(CTopLevelWindow *a1, _DWORD *a2)
{
  bool active; // al
  _DWORD *v3; // rdx
  CTopLevelWindow *v4; // rcx
  _DWORD *v5; // rdx

  *a2 = 0;
  active = CTopLevelWindow::TreatAsActiveWindow(a1);
  *v3 = 2 - active;
  if ( CTopLevelWindow::IsSheetOfGlass(v4) )
    *v5 |= 0x40u;
  return v5;
}
