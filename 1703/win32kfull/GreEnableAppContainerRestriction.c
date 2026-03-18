/*
 * XREFs of GreEnableAppContainerRestriction @ 0x1C010D120
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GreEnableAppContainerRestriction(int a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    *(_BYTE *)(result + 330) = a1 == 0;
  return result;
}
