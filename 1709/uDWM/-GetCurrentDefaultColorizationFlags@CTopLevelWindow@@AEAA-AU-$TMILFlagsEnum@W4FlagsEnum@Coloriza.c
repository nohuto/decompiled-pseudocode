/*
 * XREFs of ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18001BA98
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D8C8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CTopLevelWindow::GetCurrentDefaultColorizationFlags(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rax

  *a2 = 0;
  if ( (*(_BYTE *)(a1 + 584) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 595LL) & 0x20) != 0 )
    *a2 = 1;
  else
    *a2 = 2;
  v2 = *(_DWORD **)(a1 + 720);
  if ( v2[20] == 0x7FFFFFFF && v2[21] == 0x7FFFFFFF && v2[22] == 0x7FFFFFFF && v2[23] == 0x7FFFFFFF )
    *a2 |= 0x40u;
  return a2;
}
