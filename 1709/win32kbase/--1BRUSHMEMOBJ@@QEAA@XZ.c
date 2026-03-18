/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001E214
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C001B3E0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C001E170 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01DFAFC (bInitBrush.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(HBRUSH **this)
{
  HBRUSH *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v2);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this);
    *this = 0LL;
  }
}
