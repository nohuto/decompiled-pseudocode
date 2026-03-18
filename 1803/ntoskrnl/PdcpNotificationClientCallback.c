/*
 * XREFs of PdcpNotificationClientCallback @ 0x14078BC80
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PdcPortSendMessage @ 0x14078B634 (PdcPortSendMessage.c)
 *     PdcAcquireRwLockExclusive @ 0x14078BEFC (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcpNotificationClientCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned int v9; // ebp
  signed __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rtt
  signed __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rtt
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // ebp
  __int64 v21; // rcx
  unsigned int v22; // eax
  signed __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rtt
  _DWORD v27[200]; // [rsp+20h] [rbp-328h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( (unsigned int)(*(_DWORD *)(a2 + 40) - 2) > 1 )
    return (unsigned int)-1073740030;
  if ( *(_DWORD *)a1 != 1315136592 )
    return (unsigned int)-1073741585;
  v5 = (__int64 *)(a1 + 8);
  PdcAcquireRwLockExclusive(a1 + 8);
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( *(_DWORD *)(a2 + 40) == 3 )
    {
      if ( !*(_DWORD *)(a1 + 100) )
      {
        if ( *(_QWORD *)(a1 + 80) )
        {
          v8 = *(_QWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 100) = 1;
          v9 = *(_DWORD *)(a2 + 48);
          v5[1] = 0LL;
          _m_prefetchw(v5);
          v10 = *v5;
          v11 = *v5 - 16;
          if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v11 = 0LL;
          if ( (v10 & 2) != 0 || (v12 = *v5, v12 != _InterlockedCompareExchange64(v5, v11, v10)) )
            ExfReleasePushLock(v5, v11, v6, v7);
          KeAbPostRelease((ULONG_PTR)v5);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 80))(v8, v9);
          PdcAcquireRwLockExclusive(v5);
          --*(_DWORD *)(a1 + 100);
        }
        v4 = 0;
        goto LABEL_32;
      }
    }
    else if ( !*(_DWORD *)(a1 + 96) )
    {
      v4 = 0;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a1 + 96) = 1;
      *(_BYTE *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 112) = KeGetCurrentThread();
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1744LL) = KeGetCurrentThread();
      v5[1] = 0LL;
      _m_prefetchw(v5);
      v13 = *v5;
      v14 = *v5 - 16;
      if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v14 = 0LL;
      if ( (v13 & 2) != 0 || (v15 = *v5, v15 != _InterlockedCompareExchange64(v5, v14, v13)) )
        ExfReleasePushLock(v5, v14, v6, v7);
      KeAbPostRelease((ULONG_PTR)v5);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v16 = *(_QWORD *)(a1 + 48);
      v17 = *(unsigned int *)(a2 + 48);
      LOBYTE(v18) = *(_BYTE *)(a2 + 52);
      if ( *(_DWORD *)(a1 + 56) == 1 )
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 64))(v16, v17, v18);
      else
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(v16, v17, v18);
      v20 = v19;
      PdcAcquireRwLockExclusive(v5);
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1744LL) = 0LL;
      *(_QWORD *)(a1 + 112) = 0LL;
      if ( *(_BYTE *)(a1 + 104) )
        v20 = *(_DWORD *)(a1 + 120);
      if ( v20 != 259 )
      {
        memset(v27, 0, 0x318uLL);
        v21 = *(_QWORD *)(a1 + 40);
        v27[14] = *(_DWORD *)(a1 + 92);
        v27[10] = 2;
        v27[12] = v20;
        v22 = PdcPortSendMessage(v21, (__int64)v27);
        --*(_DWORD *)(a1 + 96);
        v4 = v22;
      }
      goto LABEL_32;
    }
    v4 = -1073740030;
  }
  else
  {
    v4 = -1073741431;
  }
LABEL_32:
  v5[1] = 0LL;
  _m_prefetchw(v5);
  v23 = *v5;
  v24 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v24 = 0LL;
  if ( (v23 & 2) != 0 || (v25 = *v5, v25 != _InterlockedCompareExchange64(v5, v24, v23)) )
    ExfReleasePushLock(v5, v24, v6, v7);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
