/*
 * XREFs of ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18004CF0C
 * Callers:
 *     ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x180050D2C (-ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetTopLevelWindow(CVisual *this, __int64 a2)
{
  char **v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == `CExpression::SetReferenceStrings'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x80000000;
  else
    CSparseStorage::SetData(v2, 1, 8u, &v3);
}
