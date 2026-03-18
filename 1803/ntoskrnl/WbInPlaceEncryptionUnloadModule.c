/*
 * XREFs of WbInPlaceEncryptionUnloadModule @ 0x14056ED6C
 * Callers:
 *     WbProcessModuleUnload @ 0x14056EC88 (WbProcessModuleUnload.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14048A48C @ 0x14048A48C (sub_14048A48C.c)
 *     sub_14056F0AC @ 0x14056F0AC (sub_14056F0AC.c)
 */

__int64 __fastcall WbInPlaceEncryptionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r12d
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned int i; // edi
  char v13; // si
  __int64 v15; // rbp

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(a1 + 176);
  v7 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v11 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  for ( i = 0; i < *(_DWORD *)(a1 + 140); ++i )
  {
    v15 = *(_QWORD *)(i * *(_DWORD *)(a1 + 136) + *(_QWORD *)(a1 + 152));
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 32) == a2 )
      {
        v3 = sub_14056F0AC((int)a1 + 136, 0, 0, i, 0LL);
        if ( v3 >= 0 )
        {
          sub_14048A48C((volatile signed __int64 *)v15);
          --i;
        }
      }
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6, v8, v9, v10);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
