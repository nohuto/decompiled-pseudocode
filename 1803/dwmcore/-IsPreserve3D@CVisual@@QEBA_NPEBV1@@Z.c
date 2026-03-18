/*
 * XREFs of ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x18000B3C4
 * Callers:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x18000B704 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::IsPreserve3D(CVisual *this, const struct CVisual *a2)
{
  char v2; // r8
  __int64 v4; // rax

  v2 = 1;
  if ( !a2 || *((_DWORD *)a2 + 25) != 1 )
  {
    if ( *((_DWORD *)this + 25) != 1 )
      return 0;
    v4 = *((_QWORD *)this + 9);
    if ( (v4 & 2) != 0 )
      v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v4) = v4 & 1;
    if ( !(_DWORD)v4 )
      return 0;
  }
  return v2;
}
