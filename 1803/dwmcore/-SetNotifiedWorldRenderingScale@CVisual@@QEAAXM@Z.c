/*
 * XREFs of ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1801A8EC4
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801A8070 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetNotifiedWorldRenderingScale(CVisual *this, float a2)
{
  char **v2; // rcx
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( LODWORD(a2) == `CVisual::SetVisualDesktopId'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x1000u;
  else
    CSparseStorage::SetData(v2, 20, 4u, &v3);
}
