/*
 * XREFs of MiIsRangeFullyCommitted @ 0x1404627C4
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404625C8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *ProtoPteAddress; // rbx
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v9; // esi
  __int64 v10; // rdi
  signed __int64 *v11; // rdi
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 PteShadow; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(a1, a2 >> 12, 5u, &v16);
  if ( !ProtoPteAddress )
    return 0LL;
  v7 = MiGetProtoPteAddress(a1, a3 >> 12, 5u, &v15);
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  v10 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v11 = (signed __int64 *)(v10 + 40);
  ExAcquirePushLockSharedEx((ULONG_PTR)v11, 0LL);
  v12 = v16;
  while ( 1 )
  {
    v13 = v12 == v15 ? v7 : *(_QWORD *)(v12 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 44) - 1);
    while ( (unsigned __int64)ProtoPteAddress <= v13 )
    {
      PteShadow = *ProtoPteAddress;
      if ( (unsigned __int64)ProtoPteAddress >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)ProtoPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow();
      }
      if ( !PteShadow )
      {
        v9 = 0;
        break;
      }
      ++ProtoPteAddress;
    }
    if ( v12 == v15 )
      break;
    v12 = *(_QWORD *)(v12 + 16);
    v16 = v12;
    ProtoPteAddress = *(__int64 **)(v12 + 8);
    if ( !ProtoPteAddress )
    {
      v9 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v9;
}
