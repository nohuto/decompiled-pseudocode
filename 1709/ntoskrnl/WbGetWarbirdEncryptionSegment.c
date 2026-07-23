/*
 * XREFs of WbGetWarbirdEncryptionSegment @ 0x14044A64C
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x14044A4DC (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     WbAddWarbirdEncryptionSegment @ 0x14044A194 (WbAddWarbirdEncryptionSegment.c)
 *     sub_14044A2C0 @ 0x14044A2C0 (sub_14044A2C0.c)
 *     sub_14044A774 @ 0x14044A774 (sub_14044A774.c)
 *     sub_14044A7A8 @ 0x14044A7A8 (sub_14044A7A8.c)
 */

__int64 __fastcall WbGetWarbirdEncryptionSegment(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rbx
  PRTL_BALANCED_NODE v8; // rdi
  int v9; // edi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  char v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v14 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (signed __int64 *)(a1 + 176);
  v8 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, (__int64)v8, (ULONG_PTR)v7);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = sub_14044A7A8(a1, a2, &v16, &v15);
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    v12 = sub_14044A2C0(a2, &v16);
    v10 = v16;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_11;
    v9 = WbAddWarbirdEncryptionSegment(a1, v16, &v14);
    if ( v9 < 0 )
      goto LABEL_11;
    v13 = v14;
    if ( v14 )
    {
      sub_14044A774(v10);
      v10 = v13;
    }
  }
  else
  {
    v10 = v16;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  if ( a3 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
LABEL_11:
  sub_14044A774(v10);
  sub_14044A774(v14);
  return (unsigned int)v9;
}
