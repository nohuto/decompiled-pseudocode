/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005CC28
 * Callers:
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C005CA18 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005CAF4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreGetBrushColor @ 0x1C00BFBE0 (GreGetBrushColor.c)
 * Callees:
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C0024E2C (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  __int64 v3; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = HmgShareLockCheck((unsigned int)a2, 16);
  *(_QWORD *)this = v3;
  if ( v3 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCountEx(*(struct OBJECT **)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
