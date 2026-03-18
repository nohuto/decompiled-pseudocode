/*
 * XREFs of ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C012C1A0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C012BA20 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C012BCC0 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C012C070 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C0288FE0 (NtGdiFlattenPath.c)
 *     NtGdiPathToRegion @ 0x1C02892D0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02893F0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C0289550 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C0289680 (NtGdiWidenPath.c)
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C012C170 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C012C38C (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0266040 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2)
{
  struct HPATH__ *v5; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-108h] BYREF
  struct HPATH__ **v7; // [rsp+28h] [rbp-100h]
  _BYTE v8[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+A8h] [rbp-80h]

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
  if ( (*((_DWORD *)*a2 + 44) & 2) != 0 )
  {
    *((_DWORD *)*a2 + 44) &= ~2u;
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, *((struct HPATH__ **)*a2 + 21));
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( v7 && v9 && EPATHOBJ::bClone((EPATHOBJ *)v6, (struct EPATHOBJ *)v8) )
      v5 = *v7;
    else
      v5 = 0LL;
    DC::hpath(*a2, v5);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) )
  {
    PushThreadGuardedObject((char *)this + 88, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 30) = 1;
  }
  EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 21));
  return this;
}
