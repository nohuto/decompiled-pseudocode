/*
 * XREFs of ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x18004CE5C
 * Callers:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004D9D4 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRelativeLayoutSizeInternal(CVisual *this, struct D2D_SIZE_F a2)
{
  char **v2; // rcx
  struct D2D_SIZE_F v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = (char **)((char *)this + 216);
  v3 = a2;
  if ( a2 == `CExpression::SetReferenceStrings'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x800000u;
  else
    CSparseStorage::SetData(v2, 9, 8u, &v3);
}
