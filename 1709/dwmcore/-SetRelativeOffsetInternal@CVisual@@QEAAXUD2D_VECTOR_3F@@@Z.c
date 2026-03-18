/*
 * XREFs of ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18004ED24
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004FB00 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetRelativeOffsetInternal(CVisual *this, struct D2D_VECTOR_3F *a2)
{
  __int64 z_low; // rdx

  z_low = *(_QWORD *)&a2->x - `CVisual::SetRelativeOffsetInternal'::`2'::sc_defaultValue;
  if ( !z_low )
    z_low = LODWORD(a2->z);
  if ( z_low )
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 0xAu, 0xCu, a2);
  else
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x400000u;
}
