/*
 * XREFs of zzzSetCursorPosByType @ 0x1C00BBA6C
 * Callers:
 *     zzzSetCursorPos @ 0x1C00BBA60 (zzzSetCursorPos.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     CheckWinstaAttributeAccess @ 0x1C00BD550 (CheckWinstaAttributeAccess.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetCursorPosByType(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 CurrentProcessWin32Process; // rax

  if ( (unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4),
        (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v6 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( !v6 || v6 == grpdeskRitInput )
    {
      if ( !gpqForeground
        || (v7 = *(_QWORD *)(gptiCurrent + 376LL),
            v8 = *(_QWORD *)(gpqForeground + 380LL),
            v9 = *(_QWORD *)(v7 + 824),
            !gbEnforceUIPI)
        || (unsigned int)v9 > (unsigned int)v8
        || (_DWORD)v9 == (_DWORD)v8
        && ((v11 = HIDWORD(v9), v12 = HIDWORD(v8), (_DWORD)v11 == (_DWORD)v12) || (_DWORD)v12 == -1 || (_DWORD)v11 == -1)
        || *(int *)(v7 + 12) < 0
        || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
      {
        zzzInternalSetCursorPos(a1, a2, 1LL);
        *((_DWORD *)&gaptMouse + 6 * gptInd) = gptCursorAsync[0] | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL) - 1) << 16);
        *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = gptCursorAsync[2] | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL) - 1) << 16);
        result = 1LL;
        *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = 0LL;
        gptInd = (gptInd + 1) & 0x3F;
        return result;
      }
      EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
    }
  }
  return 0LL;
}
