/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x14075A770
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1402661F0 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407557D8 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140755A34 (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x14075AB1C (BgpGxDrawBitmapImage.c)
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

  v4 = ((__int64 (__fastcall *)(_QWORD *, PVOID, PVOID, PVOID))off_14033B500)(
         v8,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v8[0];
    BgpFwAcquireLock();
    if ( v6 >= qword_140341AC0 )
    {
      if ( byte_140388005 )
      {
        AnFwpDisableProgressTimer(v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( Src )
        {
          BgpClearScreen(HIDWORD(qword_140341BA0));
          v5 = BgpGxDrawBitmapImage(Src, &qword_140341A8C);
        }
        if ( v5 < 0 )
          BgpClearScreen(HIDWORD(qword_140341BA0));
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
