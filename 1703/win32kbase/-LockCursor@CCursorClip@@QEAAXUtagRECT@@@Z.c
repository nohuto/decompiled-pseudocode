/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C012A1A0
 * Callers:
 *     NtUserLockCursor @ 0x1C00713C0 (NtUserLockCursor.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0072598 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(CCursorClip *this, struct tagRECT *a2)
{
  PDRIVER_CONTROL DeviceRoutine; // rsi
  LONG v4; // r8d
  LONG v5; // eax
  struct tagRECT v6; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+30h] [rbp-10h]

  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  RIMLockExclusive((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 32);
  *(_QWORD *)&v6.left = 0LL;
  *(_QWORD *)&v6.right = 0LL;
  v7 = *((_QWORD *)gpsi + 671);
  if ( PtInRect(a2, v7) )
  {
    v5 = HIDWORD(v7);
    v6.left = v4;
  }
  else
  {
    v4 = a2->left + (a2->right - a2->left) / 2;
    v6.left = v4;
    v5 = a2->top + (a2->bottom - a2->top) / 2;
  }
  v6.top = v5;
  v6.right = v4 + 1;
  v6.bottom = v5 + 1;
  CCursorClip::UpdateClipRect((struct tagRECT *)DeviceRoutine, &v6);
  *((_QWORD *)DeviceRoutine + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)DeviceRoutine + 32, 0LL);
  KeLeaveCriticalRegion();
}
