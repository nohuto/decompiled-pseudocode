/*
 * XREFs of ?lParentErrorDividedBy4@HFDBASIS32@@QEAAJXZ @ 0x1C00A224C
 * Callers:
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C001D690 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HFDBASIS32::lParentErrorDividedBy4(HFDBASIS32 *this)
{
  int v1; // edx
  int v2; // r8d
  int v3; // r9d
  int v4; // eax

  v1 = *((_DWORD *)this + 3);
  v2 = v1;
  if ( v1 < 0 )
    v2 = -v1;
  v3 = 2 * *((_DWORD *)this + 2);
  v4 = v1 - v3;
  if ( v3 - v1 >= 0 )
    v4 = v3 - v1;
  if ( v2 > v4 )
  {
    if ( v1 < 0 )
      return (unsigned int)-v1;
  }
  else if ( v3 - v1 < 0 )
  {
    v1 -= v3;
  }
  else
  {
    return (unsigned int)(v3 - v1);
  }
  return (unsigned int)v1;
}
