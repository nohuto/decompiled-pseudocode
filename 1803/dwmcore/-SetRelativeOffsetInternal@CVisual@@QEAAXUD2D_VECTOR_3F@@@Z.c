/*
 * XREFs of ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18004CE00
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004DA70 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetRelativeOffsetInternal(CVisual *this, struct D2D_VECTOR_3F *a2)
{
  char **v2; // r10
  __int64 z_low; // rcx

  v2 = (char **)((char *)this + 216);
  z_low = *(_QWORD *)&a2->x - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
  if ( *(_QWORD *)&a2->x == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
    z_low = LODWORD(a2->z);
  if ( z_low )
    CSparseStorage::SetData(v2, 10, 0xCu, a2);
  else
    *((_DWORD *)*v2 + 1) &= ~0x400000u;
}
