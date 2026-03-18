/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x1407D3CF0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140290508 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407CE2F4 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1407CE49C (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1407D4204 (BgpGxDrawBitmapImage.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v4; // kr00_8
  int v5; // ebx
  unsigned __int64 v6; // rdi
  _BOOL8 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = ((__int64 (__fastcall *)(_QWORD *, PVOID, PVOID, PVOID))off_140353530)(
         v8,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v8[0];
    BgpFwAcquireLock();
    if ( v6 >= qword_14035A240 )
    {
      if ( byte_1403A3590 )
      {
        AnFwpDisableProgressTimer(v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( Src )
        {
          BgpClearScreen(HIDWORD(qword_14035A320));
          v5 = BgpGxDrawBitmapImage(Src, &qword_14035A20C);
        }
        if ( v5 < 0 )
          BgpClearScreen(HIDWORD(qword_14035A320));
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
