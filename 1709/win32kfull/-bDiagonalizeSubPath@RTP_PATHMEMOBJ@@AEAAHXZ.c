/*
 * XREFs of ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C029934C
 * Callers:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02992B0 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C0299598 (-bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02996B4 (-bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 */

int __fastcall RTP_PATHMEMOBJ::bDiagonalizeSubPath(RTP_PATHMEMOBJ *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // ebp
  int result; // eax
  int v6; // r12d
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // r13
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // [rsp+50h] [rbp+8h]

  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 49) = 0;
  if ( (unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
    && (unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
    && (unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
  {
    v2 = *((_DWORD *)this + 56);
    if ( *((_DWORD *)this + 58) == v2 )
    {
      v3 = v2 - *((_DWORD *)this + 54);
      v4 = 1;
    }
    else
    {
      v4 = 0;
      v3 = *((_DWORD *)this + 55) - *((_DWORD *)this + 53);
    }
    result = EPATHOBJ::bMoveTo(*((EPATHOBJ **)this + 20), 0LL, (struct _POINTL *)((char *)this + 212));
    v6 = 0;
    v7 = 1;
    v8 = 2;
    while ( 1 )
    {
      if ( !result )
        return result;
      v14 = v6;
      if ( (*((_DWORD *)this + v6 + 50) & 1) != 0 )
        return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 20), 0LL, (struct _POINTL *)((char *)this + 172), 2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 20));
      v9 = v8;
      if ( v4 )
      {
        v10 = *((_DWORD *)this + 2 * v8 + 53) - *((_DWORD *)this + 2 * v7 + 53);
        if ( v3 <= 0 || v3 != 16 && v10 != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !result )
            return result;
          v4 ^= 1u;
LABEL_28:
          v13 = v6;
          v3 = v10;
          v6 = v7;
          v7 = v8;
          v8 = v13;
          goto LABEL_29;
        }
        if ( (*((_DWORD *)this + v7 + 50) & 1) != 0 )
          return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 20), 0LL, (struct _POINTL *)((char *)this + 172), 2u)
              && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 20));
        if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
          || !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
        {
          return 0;
        }
        v11 = v6;
        v6 = v8;
        v8 = v7;
        v7 = v11;
        v3 = *((_DWORD *)this + 2 * v14 + 54) - *((_DWORD *)this + 2 * v9 + 54);
      }
      else
      {
        v10 = *((_DWORD *)this + 2 * v8 + 54) - *((_DWORD *)this + 2 * v7 + 54);
        if ( v10 >= 0 || v3 != 16 && v10 != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !result )
            return result;
          v4 = 1;
          goto LABEL_28;
        }
        if ( (*((_DWORD *)this + v7 + 50) & 1) != 0 )
          return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 20), 0LL, (struct _POINTL *)((char *)this + 172), 2u)
              && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 20));
        if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
          || !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
        {
          return 0;
        }
        v12 = v6;
        v6 = v8;
        v8 = v7;
        v7 = v12;
        v3 = *((_DWORD *)this + 2 * v14 + 53) - *((_DWORD *)this + 2 * v9 + 53);
      }
LABEL_29:
      result = RTP_PATHMEMOBJ::bWritePoint(this);
    }
  }
  return 0;
}
