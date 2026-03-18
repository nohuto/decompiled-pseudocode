/*
 * XREFs of WbGetWarbirdProcess @ 0x14050F32C
 * Callers:
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
 *     sub_14053AD6C @ 0x14053AD6C (sub_14053AD6C.c)
 *     WbCreateWarbirdProcess @ 0x140582D70 (WbCreateWarbirdProcess.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, volatile signed __int64 **a3)
{
  volatile signed __int64 *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rax
  int v13; // r8d
  signed __int8 v14; // cf
  __int64 v15; // rdi
  volatile signed __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // si
  volatile signed __int64 *v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_1403D0F38, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403D0F38, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1403D0F38, v8, (ULONG_PTR)&qword_1403D0F38);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_14050F4E8(a1, &v21);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403D0F38, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403D0F38);
  KeAbPostRelease((ULONG_PTR)&qword_1403D0F38);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_24;
    v9 = WbCreateWarbirdProcess(a1, &v21);
    if ( v9 < 0 )
      goto LABEL_24;
    v11 = KeGetCurrentThread();
    --v11->SpecialApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&qword_1403D0F38, 0LL, 0);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403D0F38, 0LL);
    v15 = v12;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx(&qword_1403D0F38, v12, (ULONG_PTR)&qword_1403D0F38);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = v21;
    v9 = sub_14053AD6C((unsigned int)&qword_1403D0F10, (_DWORD)v21, v13, *v21, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 29);
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403D0F38, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403D0F38, v17, v18, v19);
    KeAbPostRelease((ULONG_PTR)&qword_1403D0F38);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 < 0 || !a3 )
  {
LABEL_24:
    v3 = v21;
    goto LABEL_11;
  }
  *a3 = v21;
LABEL_11:
  sub_14050F2F4(v3);
  return (unsigned int)v9;
}
