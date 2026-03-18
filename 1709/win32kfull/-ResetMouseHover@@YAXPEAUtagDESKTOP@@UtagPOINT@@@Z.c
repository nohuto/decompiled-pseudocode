/*
 * XREFs of ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0084FA4
 * Callers:
 *     TrackMouseEvent @ 0x1C0084C04 (TrackMouseEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 */

void __fastcall ResetMouseHover(struct tagDESKTOP *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  unsigned int v4; // edx
  unsigned int v5; // r8d
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  SetSystemTimer(*((_QWORD *)a1 + 23), 65530, *((_DWORD *)a1 + 53), (unsigned int)xxxSystemTimerProc, 0);
  v4 = (unsigned int)gcxMouseHover >> 1;
  v5 = (unsigned int)gcyMouseHover >> 1;
  *((_DWORD *)a1 + 49) = x - ((unsigned int)gcxMouseHover >> 1);
  *((_DWORD *)a1 + 50) = y - v5;
  *((_DWORD *)a1 + 51) = v4 + x;
  *((_DWORD *)a1 + 52) = v5 + y;
}
