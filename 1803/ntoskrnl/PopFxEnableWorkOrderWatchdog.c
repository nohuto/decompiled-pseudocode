/*
 * XREFs of PopFxEnableWorkOrderWatchdog @ 0x140079F7C
 * Callers:
 *     PopFxPluginWork @ 0x1400777B0 (PopFxPluginWork.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PopFxEnableWorkOrderWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rax
  char v8; // al

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (unsigned int)PopFxWatchdogWorkOrderTimeout;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 168) = KeGetCurrentThread();
    if ( (_DWORD)v2 )
    {
      KeSetCoalescableTimer(
        (PKTIMER)(v1 + 16),
        (LARGE_INTEGER)(-10000 * v2),
        0,
        (unsigned int)v2 / 0xA,
        (PKDPC)(v1 + 80));
      v3 = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(v1 + 152) = 0LL;
      *(_QWORD *)(v1 + 160) = v3;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
      v7 = (__int64 *)qword_1403AB8F8;
      if ( *(__int64 **)qword_1403AB8F8 != &PopWorkOrderList )
        __fastfail(3u);
      *(_QWORD *)(v1 + 8) = qword_1403AB8F8;
      *(_QWORD *)v1 = &PopWorkOrderList;
      *v7 = v1;
      qword_1403AB8F8 = v1;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock, v4, v5, v6);
      KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
    }
  }
  return v1;
}
