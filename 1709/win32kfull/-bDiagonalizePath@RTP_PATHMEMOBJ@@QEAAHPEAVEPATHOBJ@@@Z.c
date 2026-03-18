/*
 * XREFs of ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02992B0
 * Callers:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C02493F4 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 * Callees:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C029934C (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 */

__int64 __fastcall RTP_PATHMEMOBJ::bDiagonalizePath(RTP_PATHMEMOBJ *this, struct EPATHOBJ *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  bool v5; // zf
  __int64 result; // rax
  _QWORD *v7; // rax

  *(_DWORD *)this &= ~8u;
  *((_QWORD *)this + 20) = a2;
  v3 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 32) = 1;
  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 32);
  while ( *((_DWORD *)this + 32) )
  {
    while ( 1 )
    {
      v4 = EPATHOBJ::bEnum(this, (struct _PATHDATA *)((char *)this + 136));
      v5 = *((_DWORD *)this + 35) == 0;
      *((_DWORD *)this + 32) = v4;
      if ( !v5 )
        break;
      if ( !v4 )
        return 1LL;
    }
    if ( (*((_DWORD *)this + 34) & 1) == 0 )
      break;
    v7 = (_QWORD *)*((_QWORD *)this + 18);
    if ( !v7 )
      break;
    *((_QWORD *)this + 19) = *v7;
    result = RTP_PATHMEMOBJ::bDiagonalizeSubPath(this);
    if ( !(_DWORD)result )
      return result;
  }
  return 1LL;
}
