/*
 * XREFs of ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011EEFC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     _GetLayeredWindowAttributes @ 0x1C011F04C (_GetLayeredWindowAttributes.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011F0DC (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall zzzApplyShadow(struct tagWND *a1, __m128i *a2)
{
  __int32 v2; // eax
  HDC CompatibleDC; // rax
  HDC v6; // rdi
  HBITMAP WindowShadow; // rsi
  LONG v8; // edx
  LONG v9; // ecx
  int v10; // eax
  bool v11; // zf
  BOOL v12; // ebx
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  struct tagSIZE v15; // [rsp+58h] [rbp-8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF
  char v17; // [rsp+98h] [rbp+38h] BYREF
  char v18; // [rsp+A0h] [rbp+40h] BYREF
  struct tagPOINT v19; // [rsp+A8h] [rbp+48h] BYREF

  v2 = *((_DWORD *)a1 + 92);
  v14 = 0LL;
  a2[23].m128i_i32[0] = v2;
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
  v19.x = v8;
  v19.y = v9;
  v15.cx = v10 + 5;
  v11 = (*((_BYTE *)a1 + 66) & 0x40) == 0;
  v15.cy = *((_DWORD *)a1 + 35) - v9 + 5;
  if ( !v11 )
    v19.x = v8 - 5;
  LODWORD(v16) = 33488896;
  if ( !(unsigned int)GetLayeredWindowAttributes(a1, &v18, (char *)&v16 + 2, &v17) || (v17 & 2) == 0 )
    BYTE2(v16) = -1;
  ++gdwDeferWinEvent;
  v12 = (int)zzzUpdateLayeredWindow(
               a2,
               0LL,
               &v19,
               &v15,
               v6,
               (struct tagPOINT *)&v14,
               0,
               (struct _BLENDFUNCTION *)&v16,
               2u,
               0LL) >= 0;
  GreDeleteDC(v6);
  GreDeleteObject(WindowShadow);
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return v12;
}
