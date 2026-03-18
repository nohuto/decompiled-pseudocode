/*
 * XREFs of ?lError@HFDBASIS32@@QEAAJXZ @ 0x1C00243D8
 * Callers:
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C0023FB0 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0024130 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HFDBASIS32::lError(HFDBASIS32 *this)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  bool v5; // sf

  result = *((unsigned int *)this + 2);
  v2 = result;
  if ( (int)result < 0 )
    v2 = -(int)result;
  v3 = *((_DWORD *)this + 3);
  v4 = v3;
  if ( v3 < 0 )
    v4 = -v3;
  if ( v2 > v4 )
  {
    v5 = (int)result < 0;
  }
  else
  {
    result = (unsigned int)v3;
    v5 = v3 < 0;
  }
  if ( v5 )
    return (unsigned int)-(int)result;
  return result;
}
