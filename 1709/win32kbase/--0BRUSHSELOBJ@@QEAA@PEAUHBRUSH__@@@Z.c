/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00636F8
 * Callers:
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C0063380 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00635C4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreGetBrushColor @ 0x1C00ED940 (GreGetBrushColor.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C00487E8 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, struct HOBJ__ *a2)
{
  __int64 v3; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = HmgShareLockCheck(a2, 16);
  *(_QWORD *)this = v3;
  if ( v3 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCountEx(*(struct OBJECT **)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
