/*
 * XREFs of ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x18011A704
 * Callers:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x18017D2E0 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::IsPreserve3D(CVisual *this, const struct CVisual *a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = 1;
  if ( !a2 || *((_DWORD *)a2 + 25) != 1 )
  {
    if ( *((_DWORD *)this + 25) != 1 )
      return 0;
    v3 = *((_QWORD *)this + 9);
    if ( (v3 & 2) != 0 )
      v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v3) = v3 & 1;
    if ( !(_DWORD)v3 )
      return 0;
  }
  return v2;
}
