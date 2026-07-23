/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x140440FC4
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x140549AFC (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     sub_1404412D8 @ 0x1404412D8 (sub_1404412D8.c)
 *     sub_140549C24 @ 0x140549C24 (sub_140549C24.c)
 *     sub_140549C58 @ 0x140549C58 (sub_140549C58.c)
 *     sub_140549E38 @ 0x140549E38 (sub_140549E38.c)
 */

__int64 __fastcall WbAddWarbirdEncryptionSegment(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  PRTL_BALANCED_NODE v8; // rax
  PRTL_BALANCED_NODE v9; // rdi
  int v10; // eax
  int v11; // r8d
  int v12; // edi
  __int64 v14; // rdx
  int v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]

  v16 = 0LL;
  v15 = 0;
  v18 = 0LL;
  LODWORD(v18) = *(_DWORD *)(a2 + 24);
  v17 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 176);
  v8 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = sub_140549C58(a1, &v17, &v16, &v15);
  v12 = v10;
  if ( v10 )
  {
    if ( v10 == -1073741198 )
    {
      v12 = sub_1404412D8((int)a1 + 136, a2, v11, (unsigned int)&v17, 16, v15);
      if ( v12 >= 0 )
        v12 = sub_140549E38(a2);
    }
  }
  else if ( a3 )
  {
    sub_140549E38(v16);
    v16 = 0LL;
    *a3 = v14;
  }
  sub_140549C24(v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
