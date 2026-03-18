/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005CC6C
 * Callers:
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C005CA18 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005CAF4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreGetBrushColor @ 0x1C00BFBE0 (GreGetBrushColor.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C0024E54 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCountEx(*(struct OBJECT **)this, 0LL);
  }
}
