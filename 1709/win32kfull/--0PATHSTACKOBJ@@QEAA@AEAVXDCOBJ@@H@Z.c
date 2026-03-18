/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E7D30 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreRectangle @ 0x1C01057D0 (GreRectangle.c)
 *     GrePolylineTo @ 0x1C012BB00 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C012BD60 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C0132894 (GrePolyPolygonInternal.c)
 *     GrePolyPolylineInternal @ 0x1C01392B4 (GrePolyPolylineInternal.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C027AB84 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C027AD98 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C027B4C8 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C027B930 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C027BB70 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C028C580 (NtGdiArcInternal.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C012C170 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C012C38C (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C012C3C4 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0266040 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // r8
  struct HPATH__ *v11; // rdx
  _BYTE v12[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct HPATH__ **v14; // [rsp+38h] [rbp-C8h]
  _BYTE v15[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-48h]
  int v17; // [rsp+160h] [rbp+60h]
  int v18; // [rsp+164h] [rbp+64h]

  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v6 = *((_DWORD *)*a2 + 44);
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      *((_DWORD *)*a2 + 44) &= ~2u;
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v15, *((struct HPATH__ **)*a2 + 21));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v13);
      if ( v14 && v16 && EPATHOBJ::bClone((EPATHOBJ *)v13, (struct EPATHOBJ *)v15) )
        v11 = *v14;
      else
        v11 = 0LL;
      DC::hpath(*a2, v11);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v13);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v15);
    }
    *((_QWORD *)this + 1) = 0LL;
    if ( !*((_DWORD *)this + 30) )
    {
      PushThreadGuardedObject((char *)this + 88, this, XEPATHOBJ_vDestructWrap);
      *((_DWORD *)this + 30) = 1;
    }
    EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 21));
    if ( *((_QWORD *)this + 1) && a3 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)a2, 516);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v12,
          (struct _POINTL *)(*((_QWORD *)*a2 + 10) + 76LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 10) + 84LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x200u;
        v10 = *((_QWORD *)*a2 + 10);
      }
      else
      {
        EPATHOBJ::ptfxGetCurrent(this);
        if ( *(_DWORD *)(v10 + 84) == v17 && *(_DWORD *)(v10 + 88) == v18 )
          return this;
      }
      EPATHOBJ::bMoveTo(this, 0LL, (struct _POINTL *)(v10 + 84));
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = (char *)this + 128;
    *((_QWORD *)this + 19) = (char *)this + 456;
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = (char *)this + 480;
    *((_DWORD *)this + 50) = 1;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 54) = 1;
    *((_DWORD *)this + 118) = 256;
    if ( a3 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)a2, 516);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v12,
          (struct _POINTL *)(*((_QWORD *)*a2 + 10) + 76LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 10) + 84LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x200u;
      }
      *((_QWORD *)this + 24) = *(_QWORD *)(*((_QWORD *)*a2 + 10) + 84LL);
      v7 = *((_QWORD *)*a2 + 10);
      v8 = *(_DWORD *)(v7 + 8);
      if ( (v8 & 0x400) != 0 )
      {
        *(_DWORD *)(v7 + 8) = v8 & 0xFFFFFBFF;
        *((_DWORD *)*a2 + 54) = 0;
      }
    }
  }
  return this;
}
