/*
 * XREFs of WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140504DC0
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1405021D0 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     sub_140502354 @ 0x140502354 (sub_140502354.c)
 *     sub_140583CB0 @ 0x140583CB0 (sub_140583CB0.c)
 */

void __fastcall WbReleaseLeastRecentlyUsedHeapExecutedBlocks(__int64 a1, int a2)
{
  int v2; // r15d
  __int64 v3; // r14
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rax
  PRTL_BALANCED_NODE v9; // rdi
  PRTL_BALANCED_NODE v10; // rax
  PRTL_BALANCED_NODE v11; // rdi
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = a1 + 64;
    v5 = (unsigned __int64 *)(a1 + 80);
    v6 = (unsigned __int64 *)(a1 + 48);
    do
    {
      CurrentThread = KeGetCurrentThread();
      --v2;
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, (__int64)v8, (__int16 *)v6);
      if ( v9 )
        BYTE2(v9[1].Left) |= 1u;
      v10 = KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, (__int64)v10, (__int16 *)v5);
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      if ( *(_QWORD *)v3 == v3 )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = *(_DWORD **)v3;
        if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v13 = *(_QWORD *)v12, *(_DWORD **)(*(_QWORD *)v12 + 8LL) != v12) )
          __fastfail(3u);
        *(_QWORD *)v3 = v13;
        *(_QWORD *)(v13 + 8) = v3;
      }
      v14 = 0LL;
      if ( v12 )
      {
        v12[4] &= ~1u;
        v14 = (__int64)v12;
      }
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      if ( v14 )
      {
        v16 = *(_QWORD *)(v14 + 48);
        v17 = 0LL;
        if ( (int)sub_140583CB0((int)a1 + 8, v16, 8, -1, (__int64)&v17) >= 0 )
          sub_140502354(a1, v17);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !v14 )
        break;
      sub_140502354(a1, v14);
    }
    while ( v2 > 0 );
  }
}
