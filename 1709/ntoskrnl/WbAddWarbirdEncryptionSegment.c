/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x14044A194
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x14044A64C (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     sub_14044A774 @ 0x14044A774 (sub_14044A774.c)
 *     sub_14044A7A8 @ 0x14044A7A8 (sub_14044A7A8.c)
 *     sub_14044A98C @ 0x14044A98C (sub_14044A98C.c)
 *     sub_14057660C @ 0x14057660C (sub_14057660C.c)
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
  char v13; // bl
  __int64 v15; // rdx
  int v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]

  v17 = 0LL;
  v16 = 0;
  v19 = 0LL;
  LODWORD(v19) = *(_DWORD *)(a2 + 24);
  v18 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 176);
  v8 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, (__int64)v8, (__int16 *)v7);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = sub_14044A7A8(a1, &v18, &v17, &v16);
  v12 = v10;
  if ( v10 )
  {
    if ( v10 == -1073741198 )
    {
      v12 = sub_14057660C((int)a1 + 136, a2, v11, (unsigned int)&v18, 16, v16);
      if ( v12 >= 0 )
        v12 = sub_14044A98C(a2);
    }
  }
  else if ( a3 )
  {
    sub_14044A98C(v17);
    v17 = 0LL;
    *a3 = v15;
  }
  sub_14044A774(v17);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
