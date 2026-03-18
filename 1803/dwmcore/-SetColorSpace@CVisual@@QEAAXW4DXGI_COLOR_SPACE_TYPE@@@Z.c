/*
 * XREFs of ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801A8C94
 * Callers:
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801A83A4 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetColorSpace(CVisual *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  char **v2; // rcx
  enum DXGI_COLOR_SPACE_TYPE v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == `CVisual::SetColorSpace'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x4000u;
  else
    CSparseStorage::SetData(v2, 18, 4u, &v3);
}
