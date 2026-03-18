/*
 * XREFs of ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x180085F88
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180088104 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetRelativeOffsetInternal(char **this, struct D2D_VECTOR_3F *a2)
{
  __int64 z_low; // rdx

  z_low = *(_QWORD *)&a2->x - `CVisual::SetRelativeOffsetInternal'::`2'::sc_defaultValue;
  if ( !z_low )
    z_low = LODWORD(a2->z);
  if ( z_low )
    CSparseStorage::SetData(this + 26, 10, 0xCu, a2);
  else
    *((_DWORD *)this[26] + 1) &= ~0x400000u;
}
