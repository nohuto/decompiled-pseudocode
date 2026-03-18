/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0129ADC
 * Callers:
 *     NtUserLockCursor @ 0x1C005D750 (NtUserLockCursor.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C005DCD4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(CCursorClip *this, struct tagRECT *a2)
{
  PDRIVER_CONTROL DeviceRoutine; // rsi
  LONG v4; // r8d
  LONG v5; // eax
  LONG top; // r9d
  struct tagRECT v7; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+30h] [rbp-10h]

  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  RIMLockExclusive((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 32);
  *(_QWORD *)&v7.left = 0LL;
  *(_QWORD *)&v7.right = 0LL;
  v8 = *((_QWORD *)gpsi + 618);
  if ( PtInRect(a2, v8) )
  {
    v5 = HIDWORD(v8);
    v7.left = v4;
  }
  else
  {
    top = a2->top;
    v4 = a2->left + (a2->right - a2->left) / 2;
    v7.left = v4;
    v5 = top + (a2->bottom - top) / 2;
  }
  v7.top = v5;
  v7.right = v4 + 1;
  v7.bottom = v5 + 1;
  CCursorClip::UpdateClipRect((struct tagRECT *)DeviceRoutine, &v7);
  *((_QWORD *)DeviceRoutine + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)DeviceRoutine + 32, 0LL);
  KeLeaveCriticalRegion();
}
