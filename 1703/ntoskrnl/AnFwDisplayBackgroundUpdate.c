/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140758E44
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140758E08 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1402661F0 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407557D8 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x14075AB1C (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (dword_140341A30 & 0x1000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_140388005 )
    return 3221225473LL;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_14033B500)(&v6);
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v6;
  v4 = v3 + qword_140341AC0;
  v5 = v3;
  if ( v3 + qword_140341AC0 < v3 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_140341AC0 >= 0x64 )
  {
    qword_140341AC0 = v4;
    KeInitializeTimerEx(&stru_14038C2D0, NotificationTimer);
    KeInitializeDpc(&stru_14038C310, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_14038C2D0, 0LL, 0x64u, 0, &stru_14038C310) )
    {
      KeCancelTimer(&stru_14038C2D0);
      byte_140388005 = 0;
      return BgpClearScreen(HIDWORD(qword_140341BA0));
    }
    byte_140388005 = 1;
    result = 0LL;
  }
  else
  {
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
    result = BgpGxDrawBitmapImage(Src, &qword_140341A8C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(HIDWORD(qword_140341BA0));
  return result;
}
