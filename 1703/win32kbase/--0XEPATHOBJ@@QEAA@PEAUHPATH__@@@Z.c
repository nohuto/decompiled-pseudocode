/*
 * XREFs of ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0097CBC
 * Callers:
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0039C50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)IsXEPATHOBJ_vConstructHPATHSupported() >= 0 )
    XEPATHOBJ_vConstructHPATHWrap(this, a2);
  return this;
}
