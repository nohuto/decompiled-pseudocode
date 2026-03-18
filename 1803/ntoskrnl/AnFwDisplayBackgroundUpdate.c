/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x14083D910
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x14083D8D4 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     BgpClearScreen @ 0x140165060 (BgpClearScreen.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14083C5F0 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140840D9C (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( (dword_14039D7F0 & 0x4000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_1403E9AC1 )
    return 3221225473LL;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_1403988D0)(&v8);
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v8;
  v4 = v3;
  if ( v3 + qword_14039D890 < v3 )
    return v3 + qword_14039D890 < v3 ? 0xC0000095 : 0;
  v5 = v3 + qword_14039D890;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v5);
  if ( (unsigned __int64)qword_14039D890 >= 0x64 )
  {
    qword_14039D890 = v5;
    KeInitializeTimerEx(&stru_1403EBE10, NotificationTimer);
    KeInitializeDpc(&stru_1403EBE90, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_1403EBE10, 0LL, 0x64u, 0, &stru_1403EBE90) )
    {
      KeCancelTimer(&stru_1403EBE10);
      byte_1403E9AC1 = 0;
      return BgpClearScreen(HIDWORD(qword_14039D970), v7);
    }
    byte_1403E9AC1 = 1;
    result = 0LL;
  }
  else
  {
    BgpClearScreen(HIDWORD(qword_14039D970), v6);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v4);
    result = BgpGxDrawBitmapImage(Src, &qword_14039D84C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(HIDWORD(qword_14039D970), v7);
  return result;
}
