/*
 * XREFs of ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180161128
 * Callers:
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x18012B2F8 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetColorSpace(CVisual *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  enum DXGI_COLOR_SPACE_TYPE v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == `CVisual::SetColorSpace'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x2000u;
  else
    CSparseStorage::SetData((char **)this + 26, 19, 4u, &v2);
}
