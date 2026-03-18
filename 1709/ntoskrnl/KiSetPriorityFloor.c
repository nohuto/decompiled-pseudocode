/*
 * XREFs of KiSetPriorityFloor @ 0x1400A8CE8
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall KiSetPriorityFloor(ULONG_PTR BugCheckParameter1, _QWORD *a2, signed __int8 a3)
{
  char v3; // di
  char v7; // cl
  char result; // al
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v7 = *(_BYTE *)(a3 + BugCheckParameter1 + 1392);
  if ( v7 == -1 )
    KeBugCheckEx(0x157u, BugCheckParameter1, a3, 1uLL, 0LL);
  *(_BYTE *)(a3 + BugCheckParameter1 + 1392) = v7 + 1;
  *(_DWORD *)(BugCheckParameter1 + 1408) |= 1 << a3;
  if ( *(char *)(BugCheckParameter1 + 195) < a3 )
  {
    KiSetPriorityThread(BugCheckParameter1, a2, a3);
    v3 = 1;
  }
  result = v3;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return result;
}
