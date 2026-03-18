/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C00849D4
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     zzzDestroyCaret @ 0x1C0084510 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C0084868 (xxxCreateCaret.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C0064468 (zzzInternalHideCaret.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

void zzzInternalDestroyCaret()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  zzzInternalHideCaret();
  v0 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(v0 + 336) )
  {
    FindTimer(*(_QWORD *)(v0 + 288), 0xFFFF, 2, 1, 0LL);
    *(_QWORD *)(v0 + 336) = 0LL;
  }
  v1 = v0 + 288;
  *(_QWORD *)(v0 + 328) = 0LL;
  *(_DWORD *)(v0 + 300) = 0;
  v2 = *(volatile signed __int32 **)(v0 + 288);
  if ( v2 )
  {
    v5[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v5;
    v5[1] = v2;
    _InterlockedIncrement(v2 + 2);
    HMAssignmentUnlock(v1);
    xxxWindowEvent(0x8001u, v2, 4294967288LL, 0LL, gdwDeferWinEvent != 0 ? 2 : 0);
    ThreadUnlock1(v4, v3);
  }
}
