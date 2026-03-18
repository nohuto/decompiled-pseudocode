/*
 * XREFs of ?lParentErrorDividedBy4@HFDBASIS32@@QEAAJXZ @ 0x1C00982B4
 * Callers:
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C0023FB0 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HFDBASIS32::lParentErrorDividedBy4(HFDBASIS32 *this)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // r8d
  int v4; // ecx
  int v5; // r9d

  result = *((unsigned int *)this + 3);
  v2 = result;
  if ( (int)result < 0 )
    v2 = -(int)result;
  v3 = 2 * *((_DWORD *)this + 2);
  v4 = v3 - result;
  if ( v3 - (int)result < 0 )
    v5 = result - v3;
  else
    v5 = v3 - result;
  if ( v2 > v5 )
  {
    if ( (int)result < 0 )
      return (unsigned int)-(int)result;
  }
  else if ( v4 < 0 )
  {
    return (unsigned int)(result - v3);
  }
  else
  {
    return (unsigned int)v4;
  }
  return result;
}
