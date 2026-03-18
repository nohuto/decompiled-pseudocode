/*
 * XREFs of QueueShutdownData @ 0x1C0141F74
 * Callers:
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0113800 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

void __fastcall QueueShutdownData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  if ( gspwndBSDR )
  {
    if ( a1 == ghwndBlocking
      || a1 == 0xFFFF
      || (v4 = ValidateHwndEx(a1, 0LL, 0LL)) != 0 && *(_DWORD *)(v4 + 320) == 1 && (*(_BYTE *)(v4 + 306) & 0x40) == 0 )
    {
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(gspwndBSDR + 16),
        *(_QWORD *)(*(_QWORD *)(gspwndBSDR + 16) + 408LL),
        0x13u,
        gspwndBSDR,
        0x4Au,
        a2,
        a1,
        0LL);
    }
  }
}
