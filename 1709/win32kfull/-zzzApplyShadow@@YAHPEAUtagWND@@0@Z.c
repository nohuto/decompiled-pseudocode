/*
 * XREFs of ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012B000
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     _GetLayeredWindowAttributes @ 0x1C012B134 (_GetLayeredWindowAttributes.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012B1C4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzApplyShadow(struct tagWND *a1, __m128i *a2)
{
  unsigned int v3; // ebx
  HDC CompatibleDC; // rax
  HDC v6; // rsi
  HBITMAP WindowShadow; // r14
  LONG v8; // edx
  LONG v9; // ecx
  int v10; // eax
  bool v11; // zf
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  struct tagSIZE v14; // [rsp+58h] [rbp-10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+38h] BYREF
  char v16; // [rsp+A8h] [rbp+40h] BYREF
  char v17; // [rsp+B0h] [rbp+48h] BYREF
  struct tagPOINT v18; // [rsp+B8h] [rbp+50h] BYREF

  a2[23].m128i_i32[0] = *((_DWORD *)a1 + 92);
  v3 = 0;
  v13 = 0LL;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
  v6 = CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  WindowShadow = GenerateWindowShadow(a1, CompatibleDC);
  if ( !WindowShadow )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  v8 = *((_DWORD *)a1 + 32);
  v9 = *((_DWORD *)a1 + 33);
  v10 = *((_DWORD *)a1 + 34) - v8;
  v18.x = v8;
  v18.y = v9;
  v14.cx = v10 + 5;
  v11 = (*((_BYTE *)a1 + 66) & 0x40) == 0;
  v14.cy = *((_DWORD *)a1 + 35) - v9 + 5;
  if ( !v11 )
    v18.x = v8 - 5;
  LODWORD(v15) = 33488896;
  if ( !(unsigned int)GetLayeredWindowAttributes(a1, &v17, (char *)&v15 + 2, &v16) || (v16 & 2) == 0 )
    BYTE2(v15) = -1;
  ++gdwDeferWinEvent;
  LOBYTE(v3) = (int)zzzUpdateLayeredWindow(
                      a2,
                      0LL,
                      &v18,
                      &v14,
                      v6,
                      (struct tagPOINT *)&v13,
                      0,
                      (struct _BLENDFUNCTION *)&v15,
                      2u,
                      0LL) >= 0;
  GreDeleteDC(v6);
  GreDeleteObject(WindowShadow);
  zzzEndDeferWinEventNotify();
  return v3;
}
