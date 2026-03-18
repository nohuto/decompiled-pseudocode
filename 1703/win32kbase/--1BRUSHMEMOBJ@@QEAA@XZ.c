/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0059600
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00592C0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C0059510 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01D8214 (bInitBrush.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCount((__int64)v2);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this, 0);
    *this = 0LL;
  }
}
