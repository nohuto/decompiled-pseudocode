/*
 * XREFs of ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801A8E80
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801A8070 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetNotifiedWorldOffset(__int64 a1, unsigned int *a2)
{
  char **v2; // r10
  __int64 v3; // rcx

  v2 = (char **)(a1 + 216);
  v3 = *(_QWORD *)a2 - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
  if ( *(_QWORD *)a2 == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
    v3 = a2[2];
  if ( v3 )
    CSparseStorage::SetData(v2, 22, 0xCu, a2);
  else
    *((_DWORD *)*v2 + 1) &= ~0x400u;
}
