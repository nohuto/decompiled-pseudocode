/*
 * XREFs of ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x180085FE4
 * Callers:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18008804C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRelativeLayoutSizeInternal(CVisual *this, struct D2D_SIZE_F a2)
{
  struct D2D_SIZE_F v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 == `CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x800000u;
  else
    CSparseStorage::SetData((char **)this + 26, 9, 8u, &v2);
}
