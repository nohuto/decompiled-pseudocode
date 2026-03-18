/*
 * XREFs of ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801A8E40
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801A8070 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetNotifiedEffectiveLayoutSize(__int64 a1, __int64 a2)
{
  char **v2; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (char **)(a1 + 216);
  v3[0] = a2;
  if ( a2 == `CExpression::SetReferenceStrings'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x800u;
  else
    CSparseStorage::SetData(v2, 21, 8u, v3);
}
