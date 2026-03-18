/*
 * XREFs of ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0039C50
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003195C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0039AE4 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0097C80 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0097CBC (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

struct HPATH__ *__fastcall DC::hpath(DC *this, struct HPATH__ *a2)
{
  struct HPATH__ *v4; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  struct _BASEOBJECT *v7; // [rsp+28h] [rbp-80h]

  v4 = (struct HPATH__ *)*((_QWORD *)this + 21);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, v4);
      if ( v7 && (*((_DWORD *)v7 + 22) & 1) == 0 )
        HmgDecrementShareReferenceCount((__int64)v7);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    }
    *((_QWORD *)this + 21) = a2;
    if ( a2 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, a2);
      if ( v7 && (*((_DWORD *)v7 + 22) & 1) == 0 )
        HmgIncrementShareReferenceCount(v7);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    }
  }
  return (struct HPATH__ *)*((_QWORD *)this + 21);
}
