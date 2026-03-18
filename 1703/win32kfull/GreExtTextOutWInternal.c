/*
 * XREFs of GreExtTextOutWInternal @ 0x1C0090298
 * Callers:
 *     DrawIt @ 0x1C00442B8 (DrawIt.c)
 *     NtGdiExtTextOutW @ 0x1C0092A40 (NtGdiExtTextOutW.c)
 *     DrawBox @ 0x1C00F69D0 (DrawBox.c)
 *     FlipUserTextOutW @ 0x1C00F6CEC (FlipUserTextOutW.c)
 *     DrawGrip @ 0x1C010B3C8 (DrawGrip.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01ED8D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C020D6C4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0215328 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C021BCC8 (xxxPSMTextOut.c)
 *     UserTextOutWInternal @ 0x1C023A630 (UserTextOutWInternal.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        void *a9,
        unsigned int a10)
{
  unsigned int v10; // ebx
  DC *v14; // rcx
  unsigned int v15; // eax
  DC *v17; // [rsp+68h] [rbp-39h] BYREF
  int v18; // [rsp+70h] [rbp-31h]
  int v19; // [rsp+74h] [rbp-2Dh]
  __int128 v20; // [rsp+78h] [rbp-29h] BYREF
  __int64 v21; // [rsp+88h] [rbp-19h]
  int v22; // [rsp+90h] [rbp-11h]
  __int64 v23; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+A0h] [rbp-1h]
  int v25; // [rsp+A4h] [rbp+3h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+Fh]
  __int64 v28; // [rsp+B8h] [rbp+17h]

  v10 = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  XDCOBJ::vLock(&v17, a1);
  v14 = v17;
  if ( v17 )
  {
    if ( (*((_DWORD *)v17 + 9) & 0x10000) == 0 )
    {
      v24 = 0;
      v25 = 0;
      v21 = 0LL;
      v22 = 0;
      v23 = 0LL;
      v28 = 0LL;
      v27 = 0LL;
      v26 = 0LL;
      v20 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v20, (struct XDCOBJ *)&v17, 0) )
        v15 = GreExtTextOutWLocked(
                (struct XDCOBJ *)&v17,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                *(unsigned __int8 *)(*((_QWORD *)v17 + 10) + 73LL),
                a9,
                a10);
      else
        v15 = XDCOBJ::bFullScreen((XDCOBJ *)&v17);
      v10 = v15;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
      v14 = v17;
    }
    if ( v14 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v17);
      _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
    }
  }
  return v10;
}
