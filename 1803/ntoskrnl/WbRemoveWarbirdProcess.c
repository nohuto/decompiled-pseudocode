/*
 * XREFs of WbRemoveWarbirdProcess @ 0x14050EB18
 * Callers:
 *     sub_14050EAFC @ 0x14050EAFC (sub_14050EAFC.c)
 *     WbDispatchOperation @ 0x14050F10C (WbDispatchOperation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14050F2F4 @ 0x14050F2F4 (sub_14050F2F4.c)
 *     sub_14050F4E8 @ 0x14050F4E8 (sub_14050F4E8.c)
 *     sub_14056F0AC @ 0x14056F0AC (sub_14056F0AC.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v6; // rax
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // di
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1403D0F38, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403D0F38, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1403D0F38, v3, (ULONG_PTR)&qword_1403D0F38);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = sub_14050F4E8(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403D0F38, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403D0F38);
  KeAbPostRelease((ULONG_PTR)&qword_1403D0F38);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_1403D0F38, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403D0F38, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_1403D0F38, v7, (ULONG_PTR)&qword_1403D0F38);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v4 = sub_14056F0AC((unsigned int)&qword_1403D0F10, a1, 8, -1, (__int64)&v14);
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403D0F38, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403D0F38, v10, v11, v12);
    KeAbPostRelease((ULONG_PTR)&qword_1403D0F38);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_14050F2F4(v14);
  }
  return (unsigned int)v4;
}
