/*
 * XREFs of xxxResetTooltip @ 0x1C0084370
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00CC2E0 (xxxCancelMouseMoveTracking.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C013B818 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0084438 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 */

struct tagWND *__fastcall xxxResetTooltip(struct tagTOOLTIPWND *a1)
{
  struct tagWND *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  KillTooltipTimer(a1);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 71LL) & 0x10) != 0 )
  {
    v3 = 0LL;
    xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, 0, 0, 0, 0, 151, 1);
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v4 )
      v3 = *(_QWORD *)(v4 + 104);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v8[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v8;
    v8[1] = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    xxxSetParentWorker(*(struct tagWND **)a1);
    ThreadUnlock1(v7, v6);
  }
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  result = *(struct tagWND **)a1;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 48LL) &= 0xFFFFFCFF;
  return result;
}
