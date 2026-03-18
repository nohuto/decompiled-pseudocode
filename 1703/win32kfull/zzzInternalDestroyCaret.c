/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C00B031C
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     zzzDestroyCaret @ 0x1C00AFE40 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C00B0198 (xxxCreateCaret.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C0038688 (zzzInternalHideCaret.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 */

void zzzInternalDestroyCaret()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  zzzInternalHideCaret();
  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v0 + 296) )
  {
    FindTimer(*(_QWORD *)(v0 + 256), 0xFFFF, 2, 1, 0LL);
    *(_QWORD *)(v0 + 296) = 0LL;
  }
  v1 = v0 + 256;
  *(_QWORD *)(v0 + 288) = 0LL;
  *(_DWORD *)(v0 + 268) = 0;
  v2 = *(_QWORD *)(v0 + 256);
  if ( v2 )
  {
    v5[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v5;
    v5[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    HMAssignmentUnlock(v1);
    xxxWindowEvent(0x8001u, (__int64 *)v2, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    ThreadUnlock1(v4, v3);
  }
}
