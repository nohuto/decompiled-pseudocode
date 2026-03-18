/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x140489EA8
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x14048A364 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     sub_14048A48C @ 0x14048A48C (sub_14048A48C.c)
 *     sub_14048A4C0 @ 0x14048A4C0 (sub_14048A4C0.c)
 *     sub_14048A6A4 @ 0x14048A6A4 (sub_14048A6A4.c)
 *     sub_14053AD6C @ 0x14053AD6C (sub_14053AD6C.c)
 */

__int64 __fastcall WbAddWarbirdEncryptionSegment(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // si
  __int64 v18; // rdx
  int v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]

  v20 = 0LL;
  v19 = 0;
  v22 = 0LL;
  LODWORD(v22) = *(_DWORD *)(a2 + 24);
  v21 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 176);
  v8 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = sub_14048A4C0(a1, &v21, &v20, &v19);
  v12 = v10;
  if ( v10 )
  {
    if ( v10 == -1073741198 )
    {
      v12 = sub_14053AD6C((int)a1 + 136, a2, v11, (unsigned int)&v21, 16, v19);
      if ( v12 >= 0 )
        v12 = sub_14048A6A4(a2);
    }
  }
  else if ( a3 )
  {
    sub_14048A6A4(v20);
    v20 = 0LL;
    *a3 = v18;
  }
  sub_14048A48C(v20);
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7, v13, v14, v15);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
