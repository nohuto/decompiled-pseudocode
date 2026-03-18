/*
 * XREFs of ?PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z @ 0x1C01BC4F8
 * Callers:
 *     PostMove @ 0x1C00CC9B8 (PostMove.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 * Callees:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     IsThreadDesktopComposed @ 0x1C00CCDD0 (IsThreadDesktopComposed.c)
 */

void __fastcall PostMoveToPwnd(struct tagQ *a1, struct tagWND *this, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 QuadPart; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rbp
  __int64 v10; // rax

  LODWORD(v3) = gdwMouseMoveTimeStamp;
  if ( !gdwMouseMoveTimeStamp )
  {
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    gdwMouseMoveTimeStamp = v3;
  }
  QuadPart = gqpcMouseMoveTimeStamp;
  if ( !gqpcMouseMoveTimeStamp )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    LODWORD(v3) = gdwMouseMoveTimeStamp;
    QuadPart = PerformanceCounter.QuadPart;
    gqpcMouseMoveTimeStamp = PerformanceCounter.QuadPart;
  }
  v9 = *((_QWORD *)a1 + 7);
  if ( !(unsigned int)HasHidTable(v9) || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 376) + 776LL) + 100LL) & 2) == 0 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      v10 = *((_QWORD *)a1 + 19);
    else
      v10 = *(_QWORD *)(gpsi + 5368LL);
    PostInputMessage(
      a1,
      this,
      0x200u,
      0LL,
      (unsigned __int16)v10 | (WORD2(v10) << 16),
      v3,
      QuadPart,
      gdwMouseMoveExtraInfo,
      a3,
      (struct tagQ *)((char *)a1 + 372),
      0LL,
      0LL);
  }
  gdwMouseMoveTimeStamp = 0;
  gqpcMouseMoveTimeStamp = 0LL;
  *((_DWORD *)a1 + 85) &= ~0x20u;
  SetUnavailableInputSource((char *)a1 + 372);
}
