/*
 * XREFs of ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x18001BADC
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsSheetOfGlass(CTopLevelWindow *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 90);
  return *(_QWORD *)(v1 + 80) == 0x7FFFFFFF7FFFFFFFLL
      && *(_DWORD *)(v1 + 88) == 0x7FFFFFFF
      && *(_DWORD *)(v1 + 92) == 0x7FFFFFFF;
}
