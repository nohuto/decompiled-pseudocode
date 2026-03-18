/*
 * XREFs of ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00B2104
 * Callers:
 *     TrackMouseEvent @ 0x1C00B1DC4 (TrackMouseEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00B21F0 (_SetSystemTimer.c)
 */

void __fastcall ResetMouseHover(struct tagDESKTOP *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  unsigned int v4; // edx
  unsigned int v5; // eax
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  SetSystemTimer(*((_QWORD *)a1 + 23), 65530, *((_DWORD *)a1 + 53), (unsigned int)xxxSystemTimerProc, 0);
  v4 = (unsigned int)gcyMouseHover >> 1;
  v5 = (unsigned int)gcxMouseHover >> 1;
  *((_DWORD *)a1 + 50) = y - ((unsigned int)gcyMouseHover >> 1);
  *((_DWORD *)a1 + 51) = v5 + x;
  *((_DWORD *)a1 + 49) = x - v5;
  *((_DWORD *)a1 + 52) = v4 + y;
}
