/*
 * XREFs of PdcNotificationClientAcknowledge @ 0x14078B828
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PdcPortSendMessage @ 0x14078B634 (PdcPortSendMessage.c)
 *     PdcAcquireRwLockExclusive @ 0x14078BEFC (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcNotificationClientAcknowledge(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  signed __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rtt
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  signed __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rtt
  _DWORD v16[200]; // [rsp+20h] [rbp-328h] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1315136592 )
    return (unsigned int)-1073741585;
  v3 = (__int64 *)(a1 + 8);
  PdcAcquireRwLockExclusive(a1 + 8);
  if ( *(_DWORD *)(a1 + 96) != 1 || *(_BYTE *)(a1 + 104) )
  {
    v2 = -1073741811;
LABEL_9:
    v3[1] = 0LL;
    _m_prefetchw(v3);
    v6 = *v3;
    v7 = *v3 - 16;
    if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v7 = 0LL;
    if ( (v6 & 2) != 0 || (v8 = *v3, v8 != _InterlockedCompareExchange64(v3, v7, v6)) )
      ExfReleasePushLock(v3, v7, v4, v5);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v2;
  }
  if ( *(struct _KTHREAD **)(a1 + 112) == KeGetCurrentThread() )
  {
    *(_DWORD *)(a1 + 120) = 0;
    *(_BYTE *)(a1 + 104) = 1;
    v2 = 0;
    goto LABEL_9;
  }
  memset(v16, 0, 0x318uLL);
  v11 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 96) = 0;
  v16[14] = v11;
  v3[1] = 0LL;
  v16[10] = 2;
  v16[12] = 0;
  _m_prefetchw(v3);
  v12 = *v3;
  v13 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (v12 & 2) != 0 || (v14 = *v3, v14 != _InterlockedCompareExchange64(v3, v13, v12)) )
    ExfReleasePushLock(v3, v13, v9, v10);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)PdcPortSendMessage(*(_QWORD *)(a1 + 40), (__int64)v16);
}
