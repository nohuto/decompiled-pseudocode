/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x14057A8C0
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x14074D970 (MiSessionObjectDelete.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnPfnReferenceCount @ 0x14004CD68 (MiReturnPfnReferenceCount.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiPartitionIdToPointer @ 0x1401404D0 (MiPartitionIdToPointer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x14025BCE0 (MiUnlinkSessionList.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // r9
  __int64 v13; // r11
  ULONG_PTR *v14; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  signed __int32 *Buffer; // rdx
  unsigned __int64 *v19; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-40h]
  char v24; // [rsp+50h] [rbp-38h] BYREF

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    MiUnlinkSessionList(a1);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 3182));
    v7 = 3LL;
    PteAddress = MiGetPteAddress(a1);
    v9 = PteAddress;
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(v9);
      v9 = v11 + 8;
      *v12 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
    while ( v13 != 1 );
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v21 = 0;
      v19 = &v22;
      v23 = v5;
      v22 = a1;
      v20 = 12;
      EtwTraceKernelEvent((int)&v19, 1, 0x20400000u, 590, 4200450);
    }
    MiReleasePtes((__int64)&qword_1403CC5E0, PteAddress, 3uLL);
    v14 = (ULONG_PTR *)&v24;
    do
    {
      MiReturnPfnReferenceCount(*v14++);
      --v7;
    }
    while ( v7 );
    PsDereferencePartition(*(_QWORD *)(v6 + 168));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB618, 0LL);
    Buffer = (signed __int32 *)qword_1403CC590->Buffer;
    _bittestandreset(Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB618, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB618, (__int64)Buffer, v16, v17);
    KeAbPostRelease((ULONG_PTR)&qword_1403CB618);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
