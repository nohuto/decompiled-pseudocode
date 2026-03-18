/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x1404515C8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x1406B6650 (MiSessionObjectDelete.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140031BC0 (MiPartitionIdToPointer.c)
 *     MiReturnPfnReferenceCount @ 0x14005EAC8 (MiReturnPfnReferenceCount.c)
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x140217D34 (MiUnlinkSessionList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned int v5; // ebp
  volatile LONG *v6; // r14
  _QWORD *PteAddress; // rsi
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  _QWORD *v11; // r9
  __int64 v12; // r11
  __int64 *v13; // rdi
  __int64 v14; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  char v16; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 *v17; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-30h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    MiUnlinkSessionList(a1);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = (volatile LONG *)MiPartitionIdToPointer(*(_WORD *)(a1 + 3180));
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    v8 = (__int64)PteAddress;
    do
    {
      v9 = MI_GET_PAGE_FRAME_FROM_PTE(v8);
      v8 = v10 + 8;
      *v11 = 48 * v9 - 0x58000000000LL;
    }
    while ( v12 != 1 );
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v19 = 0;
      v17 = &v20;
      v21 = v5;
      v20 = a1;
      v18 = 12;
      EtwTraceKernelEvent((int)&v17, 1, 0x20400000u, 590, 4200450);
    }
    MiReleasePtes((__int64)&qword_14036D0A0, PteAddress, 2u);
    v13 = (__int64 *)&v16;
    v14 = 2LL;
    do
    {
      MiReturnPfnReferenceCount(*v13++);
      --v14;
    }
    while ( v14 );
    MiDereferencePartition(v6);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C150, 0LL);
    _bittestandreset((signed __int32 *)qword_14036D050->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C150);
    KeAbPostRelease((ULONG_PTR)&qword_14036C150);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
