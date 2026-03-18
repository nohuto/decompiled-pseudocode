/*
 * XREFs of WbAllocateUserMemory @ 0x14053A19C
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x140539C10 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     WbAllocateMemoryBlock @ 0x140539864 (WbAllocateMemoryBlock.c)
 *     sub_14053A3C8 @ 0x14053A3C8 (sub_14053A3C8.c)
 *     WbFreeMemoryBlock @ 0x14053A648 (WbFreeMemoryBlock.c)
 *     sub_14053AD6C @ 0x14053AD6C (sub_14053AD6C.c)
 */

__int64 __fastcall WbAllocateUserMemory(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID *v6; // r14
  PVOID *v7; // rdi
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rbx
  __int64 v11; // rdi
  int v12; // edi
  __int64 v13; // rcx
  struct _KTHREAD *v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // r15
  PVOID *BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  v24[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( a2 > 0x10000 )
  {
    v8 = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(a1 + 224);
  v11 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 188) )
  {
    while ( 1 )
    {
      v6 = *(PVOID **)((unsigned int)(v12 * *(_DWORD *)(a1 + 184)) + *(_QWORD *)(a1 + 200));
      v8 = sub_14053A3C8(v6, a2, v24);
      if ( v8 < 0 )
        goto LABEL_29;
      if ( !v24[0] && (unsigned int)++v12 < *(_DWORD *)(a1 + 188) )
        continue;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v13 = v24[0];
  if ( v24[0] )
  {
    v7 = BaseAddress;
  }
  else
  {
    v8 = WbAllocateMemoryBlock(0LL, &BaseAddress);
    if ( v8 < 0 )
      goto LABEL_29;
    v7 = BaseAddress;
    v8 = sub_14053A3C8(BaseAddress, a2, v24);
    if ( v8 < 0 )
      goto LABEL_17;
    v15 = KeGetCurrentThread();
    --v15->SpecialApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v16, (ULONG_PTR)v10);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v8 = sub_14053AD6C((int)a1 + 184, (_DWORD)BaseAddress, v17, (unsigned int)BaseAddress[4], 8, -1);
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10, v19, v20, v21);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v8 < 0 )
    {
LABEL_29:
      v7 = BaseAddress;
      goto LABEL_17;
    }
    v6 = BaseAddress;
    v7 = 0LL;
    v13 = v24[0];
  }
  if ( a3 )
    *a3 = v13;
  if ( a4 )
    *a4 = v13 + (_BYTE *)*v6 - (_BYTE *)v6[4];
LABEL_17:
  WbFreeMemoryBlock(v7);
  return (unsigned int)v8;
}
