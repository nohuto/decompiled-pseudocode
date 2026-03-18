/*
 * XREFs of ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F9DC
 * Callers:
 *     DrawThumb2 @ 0x1C0082658 (DrawThumb2.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C020F94C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxTrackBox @ 0x1C0211A90 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0211C00 (xxxTrackThumb.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F6D8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall RecalcTrackRect(struct tagSBTRACK *a1)
{
  __int128 *v2; // rcx
  __int128 *v3; // rdx
  _DWORD *v4; // r8
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_DWORD *)a1 & 4) == 0 )
    CalcSBStuff(*((_QWORD *)a1 + 1), *((_QWORD *)a1 + 12), (*(_DWORD *)a1 >> 1) & 1);
  v2 = &v10;
  if ( (*(_DWORD *)a1 & 2) == 0 )
    v2 = (__int128 *)((char *)&v10 + 4);
  v3 = (__int128 *)((char *)&v10 + 4);
  if ( (*(_DWORD *)a1 & 2) == 0 )
    v3 = &v10;
  v4 = (_DWORD *)*((_QWORD *)a1 + 12);
  *(_DWORD *)v2 = v4[6];
  *(_DWORD *)v3 = v4[4];
  *((_DWORD *)v2 + 2) = v4[7];
  v5 = *((_DWORD *)a1 + 14);
  *((_DWORD *)v3 + 2) = v4[5];
  if ( !v5 )
  {
    v9 = v4[9];
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_DWORD *)v3 = v4[10];
    goto LABEL_18;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_DWORD *)v3 = v4[9];
    v9 = v4[13];
    goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_DWORD *)v3 = v4[12];
    v9 = v4[10];
LABEL_17:
    *((_DWORD *)v3 + 2) = v9;
    goto LABEL_18;
  }
  if ( v8 == 1 )
    CalcTrackDragRect(a1, (__int64)v3);
LABEL_18:
  if ( *((_DWORD *)a1 + 14) != 4 )
    *((_OWORD *)a1 + 2) = v10;
}
