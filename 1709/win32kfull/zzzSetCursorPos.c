/*
 * XREFs of zzzSetCursorPos @ 0x1C0051414
 * Callers:
 *     NtUserSetCursorPos @ 0x1C00513C0 (NtUserSetCursorPos.c)
 * Callees:
 *     IsGpqForegroundAccessibleForPti @ 0x1C0050680 (IsGpqForegroundAccessibleForPti.c)
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetCursorPos(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentLogicalCursorThread; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  __m128i v9; // xmm0
  __int64 result; // rax

  CurrentLogicalCursorThread = GetCurrentLogicalCursorThread();
  if ( (unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(CurrentLogicalCursorThread + 400)) )
  {
    v7 = *(_QWORD *)(CurrentLogicalCursorThread + 432);
    if ( !v7 || v7 == grpdeskRitInput )
    {
      if ( (unsigned int)IsGpqForegroundAccessibleForPti(CurrentLogicalCursorThread, 1) )
      {
        zzzInternalSetCursorPos(a1, a2, a3);
        v8 = *(_QWORD *)(*gpDispInfo + 24LL);
        v9 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8);
        *((_DWORD *)&gaptMouse + 6 * gptInd) = gptCursorAsync[0] | ((unsigned __int16)(v9.m128i_i16[0] - v8 - 1) << 16);
        *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = gptCursorAsync[2] | ((unsigned __int16)(v9.m128i_i16[2]
                                                                                         - WORD2(v8)
                                                                                         - 1) << 16);
        result = 1LL;
        *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = 0LL;
        gptInd = (gptInd + 1) & 0x3F;
        return result;
      }
      EtwTraceUIPIInputError(CurrentLogicalCursorThread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 420LL), 1);
    }
  }
  return 0LL;
}
