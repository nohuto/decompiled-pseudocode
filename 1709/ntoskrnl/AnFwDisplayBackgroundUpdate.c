/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1407CE288
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1407CE2B8 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140290508 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407CE2F4 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1407D4204 (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (dword_14035A1B0 & 0x4000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_1403A3590 )
    return 3221225473LL;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140353530)(&v6);
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v6;
  v4 = v3 + qword_14035A240;
  v5 = v3;
  if ( v3 + qword_14035A240 < v3 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_14035A240 >= 0x64 )
  {
    qword_14035A240 = v4;
    KeInitializeTimerEx(&stru_1403A7EC0, NotificationTimer);
    KeInitializeDpc(&stru_1403A7F00, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_1403A7EC0, 0LL, 0x64u, 0, &stru_1403A7F00) )
    {
      KeCancelTimer(&stru_1403A7EC0);
      byte_1403A3590 = 0;
      return BgpClearScreen(HIDWORD(qword_14035A320));
    }
    byte_1403A3590 = 1;
    result = 0LL;
  }
  else
  {
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
    result = BgpGxDrawBitmapImage(Src, &qword_14035A20C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(HIDWORD(qword_14035A320));
  return result;
}
