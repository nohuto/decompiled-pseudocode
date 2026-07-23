/*
 * XREFs of WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14054801C
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     sub_140548560 @ 0x140548560 (sub_140548560.c)
 *     sub_140549218 @ 0x140549218 (sub_140549218.c)
 */

void __fastcall WbReleaseLeastRecentlyUsedHeapExecutedBlocks(__int64 a1, int a2)
{
  int v2; // r15d
  __int64 **v3; // r14
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rax
  PRTL_BALANCED_NODE v9; // rdi
  PRTL_BALANCED_NODE v10; // rax
  PRTL_BALANCED_NODE v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = (__int64 **)(a1 + 64);
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
        ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6);
      if ( v9 )
        BYTE2(v9[1].Left) |= 1u;
      v10 = KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v10, (ULONG_PTR)v5);
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      if ( *v3 == (__int64 *)v3 )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = *v3;
        v13 = **v3;
        if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v13 + 8) != v12 )
          __fastfail(3u);
        *v3 = (__int64 *)v13;
        *(_QWORD *)(v13 + 8) = v3;
      }
      v14 = 0LL;
      if ( v12 )
      {
        *((_DWORD *)v12 + 4) &= ~1u;
        v14 = v12;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      if ( v14 )
      {
        v15 = v14[6];
        v16 = 0LL;
        if ( (int)sub_140549218((int)a1 + 8, v15, 8, -1, (__int64)&v16) >= 0 )
          sub_140548560(a1, v16);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !v14 )
        break;
      sub_140548560(a1, v14);
    }
    while ( v2 > 0 );
  }
}
