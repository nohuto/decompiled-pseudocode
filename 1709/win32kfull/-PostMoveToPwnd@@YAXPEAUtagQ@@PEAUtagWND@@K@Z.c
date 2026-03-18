/*
 * XREFs of ?PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z @ 0x1C01C0328
 * Callers:
 *     PostMove @ 0x1C00CF348 (PostMove.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0065D74 (IsThreadDesktopComposed.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 */

void __fastcall PostMoveToPwnd(struct tagQ *a1, struct tagWND *a2, int a3)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( !gdwMouseMoveTimeStamp )
    gdwMouseMoveTimeStamp = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PerformanceCounter.QuadPart = gqpcMouseMoveTimeStamp;
  if ( !gqpcMouseMoveTimeStamp )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    gqpcMouseMoveTimeStamp = PerformanceCounter.QuadPart;
  }
  v6 = *((_QWORD *)a1 + 11);
  if ( !(unsigned int)HasHidTable(v6) || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 400) + 784LL) + 100LL) & 2) == 0 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      v7 = *((_QWORD *)a1 + 23);
    else
      v7 = *(_QWORD *)(gpsi + 4944LL);
    PostInputMessage(
      (__int64)a1,
      0LL,
      0x200u,
      0LL,
      (unsigned __int16)v7 | (WORD2(v7) << 16),
      gdwMouseMoveTimeStamp,
      PerformanceCounter.QuadPart,
      gdwMouseMoveExtraInfo,
      a3,
      (char *)a1 + 412,
      0LL,
      0LL);
  }
  gdwMouseMoveTimeStamp = 0;
  gqpcMouseMoveTimeStamp = 0LL;
  *((_DWORD *)a1 + 95) &= ~0x20u;
  SetUnavailableInputSource((char *)a1 + 412);
}
