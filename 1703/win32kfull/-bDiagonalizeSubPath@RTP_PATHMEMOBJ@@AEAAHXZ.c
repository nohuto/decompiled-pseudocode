/*
 * XREFs of ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C029CB5C
 * Callers:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C029CB08 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C029CD98 (-bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C029CF38 (-bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 */

int __fastcall RTP_PATHMEMOBJ::bDiagonalizeSubPath(RTP_PATHMEMOBJ *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // ebp
  int result; // eax
  __int64 v6; // r14
  int v7; // r15d
  int v8; // r12d
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax

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
    LODWORD(v6) = 0;
    v7 = 1;
    v8 = 2;
    while ( 1 )
    {
      if ( !result )
        return result;
      if ( (*((_DWORD *)this + (int)v6 + 50) & 1) != 0 )
        return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 20), 0LL, (struct _POINTL *)((char *)this + 172), 2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 20));
      if ( v4 )
      {
        v9 = *((_DWORD *)this + 2 * v8 + 53) - *((_DWORD *)this + 2 * v7 + 53);
        if ( v3 <= 0 || v3 != 16 && v9 != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !result )
            return result;
          v4 ^= 1u;
LABEL_28:
          v12 = v6;
          v3 = v9;
          LODWORD(v6) = v7;
          v7 = v8;
          v8 = v12;
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
        v10 = (int)v6;
        v6 = v8;
        v8 = v7;
        v7 = v10;
        v3 = *((_DWORD *)this + 2 * v10 + 54) - *((_DWORD *)this + 2 * v6 + 54);
      }
      else
      {
        v9 = *((_DWORD *)this + 2 * v8 + 54) - *((_DWORD *)this + 2 * v7 + 54);
        if ( v9 >= 0 || v3 != 16 && v9 != -16 )
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
        v11 = (int)v6;
        v6 = v8;
        v8 = v7;
        v7 = v11;
        v3 = *((_DWORD *)this + 2 * v11 + 53) - *((_DWORD *)this + 2 * v6 + 53);
      }
LABEL_29:
      result = RTP_PATHMEMOBJ::bWritePoint(this);
    }
  }
  return 0;
}
