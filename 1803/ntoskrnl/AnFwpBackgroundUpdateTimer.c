/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140840410
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     BgpClearScreen @ 0x140165060 (BgpClearScreen.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14083C5F0 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14083C60C (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140840D9C (BgpGxDrawBitmapImage.c)
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
  __int64 v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = ((__int64 (__fastcall *)(_QWORD *, PVOID, PVOID, PVOID))off_1403988D0)(
         v8,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v8[0];
    BgpFwAcquireLock();
    if ( v6 >= qword_14039D890 )
    {
      if ( byte_1403E9AC1 )
      {
        AnFwpDisableProgressTimer();
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( Src )
        {
          BgpClearScreen(HIDWORD(qword_14039D970), v7);
          v5 = BgpGxDrawBitmapImage(Src, &qword_14039D84C);
        }
        if ( v5 < 0 )
          BgpClearScreen(HIDWORD(qword_14039D970), v7);
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
