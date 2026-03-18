/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0123538
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreRectangle @ 0x1C00F9578 (GreRectangle.c)
 *     GrePolyPolylineInternal @ 0x1C012120C (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C01221D0 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C0122420 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C01232FC (GrePolyPolygonInternal.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C027E078 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C027E284 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C027E9B0 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C027EE20 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C027F050 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C028FEB0 (NtGdiArcInternal.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C0123874 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C012481C (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0266DB4 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  __int64 v9; // r8
  struct HPATH__ *v10; // rdx
  _BYTE v11[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct HPATH__ **v13; // [rsp+38h] [rbp-C8h]
  _BYTE v14[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v15; // [rsp+B8h] [rbp-48h]
  int v16; // [rsp+160h] [rbp+60h]
  int v17; // [rsp+164h] [rbp+64h]

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
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v14, *((struct HPATH__ **)*a2 + 21));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v12);
      if ( v13 && v15 && EPATHOBJ::bClone((EPATHOBJ *)v12, (struct EPATHOBJ *)v14) )
        v10 = *v13;
      else
        v10 = 0LL;
      DC::hpath(*a2, v10);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v12);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v14);
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
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)a2, 516);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v11,
          (struct _POINTL *)(*((_QWORD *)*a2 + 10) + 76LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 10) + 84LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x200u;
        v9 = *((_QWORD *)*a2 + 10);
      }
      else
      {
        EPATHOBJ::ptfxGetCurrent(this);
        if ( *(_DWORD *)(v9 + 84) == v16 && *(_DWORD *)(v9 + 88) == v17 )
          return this;
      }
      EPATHOBJ::bMoveTo(this, 0LL, (struct _POINTL *)(v9 + 84));
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
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)a2, 516);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v11,
          (struct _POINTL *)(*((_QWORD *)*a2 + 10) + 76LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 10) + 84LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x200u;
      }
      *((_QWORD *)this + 24) = *(_QWORD *)(*((_QWORD *)*a2 + 10) + 84LL);
      v7 = *((_QWORD *)*a2 + 10);
      if ( (*(_DWORD *)(v7 + 8) & 0x400) != 0 )
      {
        *(_DWORD *)(v7 + 8) &= ~0x400u;
        *((_DWORD *)*a2 + 54) = 0;
      }
    }
  }
  return this;
}
