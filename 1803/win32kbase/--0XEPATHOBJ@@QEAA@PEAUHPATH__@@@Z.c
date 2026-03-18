/*
 * XREFs of ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0072AF0
 * Callers:
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0027610 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C002A644 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)IsXEPATHOBJ_vConstructHPATHSupported() >= 0 )
    XEPATHOBJ_vConstructHPATHWrap(this, a2);
  return this;
}
