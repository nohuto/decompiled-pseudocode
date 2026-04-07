/*
 * XREFs of ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180010B40
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001019C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180011168 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsShellManaged(CWindowData *this)
{
  bool result; // al

  result = *((_BYTE *)this + 596) >> 7;
  if ( *((char *)this + 596) < 0 )
    return GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") == 0LL;
  return result;
}
