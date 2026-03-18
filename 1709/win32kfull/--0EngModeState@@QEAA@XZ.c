/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C01446A4
 * Callers:
 *     W32kCddClipRegion @ 0x1C0252D50 (W32kCddClipRegion.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 331) = 1;
  return this;
}
