/*
 * XREFs of ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00582A8
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003195C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

RFONTOBJ *__fastcall RFONTOBJ::RFONTOBJ(RFONTOBJ *this, struct RFONT *a2)
{
  *(_QWORD *)this = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap(this, a2);
  return this;
}
