/*
 * XREFs of GreExtTextOutWInternal @ 0x1C001D2B0
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C001CF20 (NtGdiExtTextOutW.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C007CCE4 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0081ED8 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C009C3DC (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C009C70C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C013BC90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F7D60 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0216248 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C021CF78 (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C023BAE0 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        void *a9,
        unsigned int a10)
{
  unsigned int v13; // ebx
  __int64 *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdi
  int v18; // [rsp+68h] [rbp-59h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-51h] BYREF
  __int64 v20; // [rsp+78h] [rbp-49h]
  __int128 v21; // [rsp+88h] [rbp-39h] BYREF
  __int64 v22; // [rsp+98h] [rbp-29h]
  int v23; // [rsp+A0h] [rbp-21h]
  __int64 v24; // [rsp+A8h] [rbp-19h]
  __int64 v25; // [rsp+B0h] [rbp-11h]
  __int64 v26; // [rsp+B8h] [rbp-9h]
  __int64 v27; // [rsp+C0h] [rbp-1h]
  __int64 v28; // [rsp+C8h] [rbp+7h]

  v19 = 0LL;
  v20 = 0LL;
  v13 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v19, a1);
  v14 = v19;
  if ( v19 )
  {
    if ( (*((_DWORD *)v19 + 9) & 0x10000) == 0 )
    {
      v25 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0;
      v24 = 0LL;
      v28 = 0LL;
      v27 = 0LL;
      v26 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v21, (struct XDCOBJ *)&v19, 0) )
        v15 = GreExtTextOutWLocked(
                (struct XDCOBJ *)&v19,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                *(unsigned __int8 *)(v19[10] + 73),
                a9,
                a10);
      else
        v15 = XDCOBJ::bFullScreen((XDCOBJ *)&v19);
      v13 = v15;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v21);
      v14 = v19;
    }
    if ( v14 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v19);
      v18 = 0;
      v16 = *v19;
      HmgDecrementExclusiveReferenceCountEx(v19, HIDWORD(v20), &v18);
      if ( v18 )
        bDeleteDCInternalEx(v16, 0LL);
    }
  }
  return v13;
}
