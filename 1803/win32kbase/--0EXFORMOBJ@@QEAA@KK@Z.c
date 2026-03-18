/*
 * XREFs of ??0EXFORMOBJ@@QEAA@KK@Z @ 0x1C0072900
 * Callers:
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0072744 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     <none>
 */

EXFORMOBJ *__fastcall EXFORMOBJ::EXFORMOBJ(EXFORMOBJ *this, __int64 a2, int a3)
{
  void *v3; // rax

  *((_DWORD *)this + 3) = 0;
  if ( a3 == 8 )
  {
    v3 = &gmxIdentity_LToFx;
  }
  else
  {
    v3 = &gmxIdentity_FxToL;
    if ( a3 != 16 )
      v3 = &gmxIdentity_LToL;
  }
  *(_QWORD *)this = v3;
  return this;
}
