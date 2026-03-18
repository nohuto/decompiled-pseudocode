/*
 * XREFs of WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14056EF30
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14050F8B4 @ 0x14050F8B4 (sub_14050F8B4.c)
 *     sub_14056F0AC @ 0x14056F0AC (sub_14056F0AC.c)
 */

void __fastcall WbReleaseLeastRecentlyUsedHeapExecutedBlocks(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned __int64 *v3; // rdi
  _QWORD *v5; // r14
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = (unsigned __int64 *)(a1 + 80);
    v5 = (_QWORD *)(a1 + 64);
    v6 = (unsigned __int64 *)(a1 + 48);
    do
    {
      CurrentThread = KeGetCurrentThread();
      --v2;
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      v10 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
      v14 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        ExfAcquirePushLockExclusiveEx(v3, v10, (ULONG_PTR)v3);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v15 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
      {
        v15 = 0LL;
      }
      else
      {
        if ( (_QWORD *)v15[1] != v5 || (v16 = *v15, *(_QWORD **)(*v15 + 8LL) != v15) )
          __fastfail(3u);
        *v5 = v16;
        *(_QWORD *)(v16 + 8) = v5;
      }
      v17 = 0LL;
      if ( v15 )
      {
        *((_DWORD *)v15 + 4) &= ~1u;
        v17 = (__int64)v15;
      }
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3, v11, v12, v13);
      KeAbPostRelease((ULONG_PTR)v3);
      if ( v17 )
      {
        v22 = *(_QWORD *)(v17 + 48);
        v24 = 0LL;
        if ( (int)sub_14056F0AC((int)a1 + 8, v22, 8, -1, (__int64)&v24) >= 0 )
          sub_14050F8B4(a1, v24);
      }
      v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v23 & 2) != 0 && (v23 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6, v19, v20, v21);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !v17 )
        break;
      sub_14050F8B4(a1, v17);
    }
    while ( v2 > 0 );
  }
}
