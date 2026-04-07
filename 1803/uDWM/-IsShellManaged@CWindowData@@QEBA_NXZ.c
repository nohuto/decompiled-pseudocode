/*
 * XREFs of ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180015940
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800130F0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800160D0 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D200 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsShellManaged(CWindowData *this)
{
  bool result; // al

  result = (*((_BYTE *)this + 596) & 0x40) != 0;
  if ( (*((_BYTE *)this + 596) & 0x40) != 0 )
    return GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") == 0LL;
  return result;
}
