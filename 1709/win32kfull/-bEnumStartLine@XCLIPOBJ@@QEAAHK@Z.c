/*
 * XREFs of ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C012F5CC
 * Callers:
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C012F7A4 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 * Callees:
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C012FA60 (-bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z.c)
 *     ?vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z @ 0x1C012FC60 (-vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z.c)
 *     ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C02A7784 (-vUpdateStyleState@XCLIPOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bEnumStartLine(XCLIPOBJ *this, int a2)
{
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v6; // rdx

  *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) = a2 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x200000;
  if ( (unsigned int)DDA_CLIPLINE::bInit(
                       (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
                       (struct _POINTFIX *)(*((_QWORD *)this + 18) + 4LL),
                       *(struct _POINTFIX **)(*((_QWORD *)this + 18) + 16LL)) )
  {
    *(_DWORD *)(*((_QWORD *)this + 18) + 112LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 96LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 100LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 104LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 108LL);
    DDA_CLIPLINE::vUnflip(
      (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
      (int *)(*((_QWORD *)this + 18) + 112LL),
      (int *)(*((_QWORD *)this + 18) + 116LL));
    DDA_CLIPLINE::vUnflip(
      (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
      (int *)(*((_QWORD *)this + 18) + 120LL),
      (int *)(*((_QWORD *)this + 18) + 124LL));
    v3 = *((_QWORD *)this + 18);
    if ( (*(_DWORD *)(v3 + 24) & 1) != 0 )
      *(_QWORD *)(v3 + 204) = *(_QWORD *)(v3 + 4);
    v4 = (_DWORD *)*((_QWORD *)this + 18);
    if ( (int)v4[45] > 0 )
    {
      v4[43] = v4[44];
      v6 = *((_QWORD *)this + 18);
      if ( (*(_DWORD *)(v6 + 24) & 4) != 0 )
        *(_DWORD *)(v6 + 172) = 0;
      XCLIPOBJ::vUpdateStyleState(this);
    }
    return 1LL;
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x10000u;
    return 0LL;
  }
}
