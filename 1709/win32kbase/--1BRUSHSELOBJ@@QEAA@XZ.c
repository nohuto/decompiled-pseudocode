/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006373C
 * Callers:
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C0063380 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00635C4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreGetBrushColor @ 0x1C00ED940 (GreGetBrushColor.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C0048810 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCountEx(*(struct OBJECT **)this, 0LL);
  }
}
