/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1C01EB3C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x1C024D910 (DwmAsyncSetDesktopColorTransform.c)
 */

_BOOL8 __fastcall NtUserSetDesktopColorTransform(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  void *v5; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a1 + 100, a3, a4);
  v5 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 432) + 8LL));
  return (int)DwmAsyncSetDesktopColorTransform(v5) >= 0;
}
