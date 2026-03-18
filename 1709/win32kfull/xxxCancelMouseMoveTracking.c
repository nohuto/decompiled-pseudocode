/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00CC2E0
 * Callers:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxResetTooltip @ 0x1C0084370 (xxxResetTooltip.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C01142DC (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxHotTrack @ 0x1C0121D84 (xxxHotTrack.c)
 */

__int64 __fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  __int64 result; // rax
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTOOLTIPWND *v15; // r14
  __int64 v16; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v20[4]; // [rsp+30h] [rbp-38h] BYREF

  result = 1024LL;
  if ( (a1 & 0x400) != 0 && (a4 & 0x400) != 0 )
    result = xxxHotTrack(a2, a3, 0LL);
  if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 112);
    result = safe_cast_fnid_to_PTOOLTIPWND(v11);
    v15 = (struct tagTOOLTIPWND *)result;
    if ( result )
    {
      v16 = *(_QWORD *)result;
      if ( *(_QWORD *)result )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
        v20[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v20;
        v20[1] = v16;
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        xxxResetTooltip(v15);
        result = ThreadUnlock1(v19, v18);
      }
    }
  }
  v9 = a4 & a1;
  if ( v9 < 0 )
    result = PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL, 0LL);
  if ( (v9 & 0x40) != 0 )
    return FindTimer(a2, 65530, 2, 1, 0LL);
  return result;
}
