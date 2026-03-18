/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C00437D8
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C0041420 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C00436E0 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01F39FC (bInitBrush.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v2, 0LL);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this, 0);
    *this = 0LL;
  }
}
