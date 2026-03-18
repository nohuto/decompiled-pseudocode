/*
 * XREFs of AlpcpDispatchConnectionRequest @ 0x1404DDDF4
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1400C1820 (PsGetProcessJob.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140284284 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1404DDF58 (AlpcpSetOwnerPortMessage.c)
 */

__int64 __fastcall AlpcpDispatchConnectionRequest(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rsi
  int v4; // r12d
  __int64 *v5; // r15
  volatile signed __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  volatile signed __int64 *v9; // rdi
  signed __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 ProcessJob; // rax
  signed __int64 v17; // rsi

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  v6 = v5 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  if ( *v5 )
  {
    v7 = *v5;
    v8 = v7 & -(__int64)(ObReferenceObjectSafe(*v5) != 0);
    if ( v8 )
    {
      v9 = (volatile signed __int64 *)(v8 + 352);
      ExAcquirePushLockSharedEx(v8 + 352, 0LL);
      if ( (*(_DWORD *)(v8 + 416) & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v5 - 2);
        KeAbPostRelease((ULONG_PTR)(v5 - 2));
        if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
        v14 = -1073741769;
        goto LABEL_38;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 256LL) & 0x800000) == 0
        || (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0x200) != 0 )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = 0LL;
        v15 = 0LL;
        if ( (*(_QWORD *)(v8 + 24) & 1) == 0 )
          v15 = *(_QWORD *)(v8 + 24);
        if ( v15 )
        {
          ProcessJob = PsGetProcessJob(v15);
          v10 = 0LL;
          if ( ProcessJob )
          {
            if ( (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
            {
              v17 = (unsigned int)(v10 + 17);
              if ( v17 != _InterlockedCompareExchange64(v6, v10, v17) )
                ExfReleasePushLockShared(v5 - 2);
              KeAbPostRelease((ULONG_PTR)(v5 - 2));
              if ( v17 != _InterlockedCompareExchange64(v9, 0LL, v17) )
                ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
              KeAbPostRelease(v8 + 352);
              v14 = -1073741770;
LABEL_38:
              ObfDereferenceObject((PVOID)v8);
              return v14;
            }
          }
        }
      }
      if ( (unsigned __int64)*(unsigned __int16 *)(v2 + 242) > *(_QWORD *)(v8 + 272) )
      {
        if ( _InterlockedCompareExchange64(v6, v10, 17LL) != 17 )
          ExfReleasePushLockShared(v5 - 2);
        KeAbPostRelease((ULONG_PTR)(v5 - 2));
        if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
        v14 = -1073741789;
        goto LABEL_38;
      }
      if ( (v4 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        {
          if ( _InterlockedCompareExchange64(v6, v10, 17LL) != 17 )
            ExfReleasePushLockShared(v5 - 2);
          KeAbPostRelease((ULONG_PTR)(v5 - 2));
          if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
          KeAbPostRelease(v8 + 352);
          v14 = -1073741823;
          goto LABEL_38;
        }
        ++*(_WORD *)(v2 - 30);
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v2);
        ++*(_WORD *)(v2 - 30);
        *(_QWORD *)(v2 + 32) = CurrentThread;
      }
      *(_DWORD *)(v2 + 40) &= ~0x200u;
      *(_WORD *)(v2 + 244) |= 0x2000u;
      v12 = _InterlockedIncrement((volatile signed __int32 *)(v8 + 400));
      *(_QWORD *)(v2 + 120) = v10;
      *(_DWORD *)(v2 + 44) = v12;
      *(_QWORD *)(v2 + 184) = v5;
      *(_QWORD *)(v2 + 192) = v8;
      AlpcpSetOwnerPortMessage(v2, v1, 1LL);
      *(_QWORD *)(a1 + 32) = v8;
      *(_QWORD *)(a1 + 16) = v5;
      AlpcpCompleteDispatchMessage(a1);
      return 0LL;
    }
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5 - 2);
  KeAbPostRelease((ULONG_PTR)(v5 - 2));
  return 3221225527LL;
}
