/*
 * XREFs of xxxResetTooltip @ 0x1C00AFC70
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C89D8 (xxxCancelMouseMoveTracking.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C020D618 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxSetWindowPosAndBand @ 0x1C0063590 (xxxSetWindowPosAndBand.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00AFCBC (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

struct tagWND *__fastcall xxxResetTooltip(struct tagTOOLTIPWND *a1)
{
  struct tagWND *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  KillTooltipTimer(a1);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 71LL) & 0x10) != 0 )
  {
    v3 = 0LL;
    xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, 0, 0, 0, 0, 151, 1);
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v4 )
      v3 = *(_QWORD *)(v4 + 104);
    v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v7;
    v7[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    xxxSetParentWorker(*(struct tagWND **)a1, v3, 0LL);
    ThreadUnlock1(v6, v5);
  }
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  result = *(struct tagWND **)a1;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 48LL) &= 0xFFFFFCFF;
  return result;
}
