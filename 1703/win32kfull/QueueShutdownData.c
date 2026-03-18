/*
 * XREFs of QueueShutdownData @ 0x1C013B038
 * Callers:
 *     NtUserShutdownBlockReasonCreate @ 0x1C0015BE0 (NtUserShutdownBlockReasonCreate.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 */

void __fastcall QueueShutdownData(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v5; // rax

  v2 = gspwndBSDR;
  if ( gspwndBSDR )
  {
    if ( a1 == ghwndBlocking || a1 == 0xFFFF )
      goto LABEL_8;
    v5 = ValidateHwndEx(a1, 0LL, 0LL);
    if ( v5 && *(_DWORD *)(v5 + 320) == 1 && (*(_BYTE *)(v5 + 306) & 0x40) == 0 )
    {
      v2 = gspwndBSDR;
LABEL_8:
      PostEventMessageEx(*(_QWORD *)(v2 + 16), *(_QWORD *)(*(_QWORD *)(v2 + 16) + 384LL), 0x13u, v2, 0x4Au, a2, a1, 0LL);
    }
  }
}
