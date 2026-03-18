/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x14059081C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1404FB9A4 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x1406E2F20 (MiSessionObjectDelete.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiReturnPfnReferenceCount @ 0x1400B7758 (MiReturnPfnReferenceCount.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x140221C94 (MiUnlinkSessionList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 v6; // r14
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 *v8; // r10
  __int64 v9; // rax
  __int64 v10; // r10
  _QWORD *v11; // r9
  unsigned __int64 v12; // r9
  __int64 v13; // r11
  __int64 *v14; // rdi
  __int64 v15; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  char v17; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 *v18; // [rsp+40h] [rbp-48h] BYREF
  int v19; // [rsp+48h] [rbp-40h]
  int v20; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-30h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    MiUnlinkSessionList(a1);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 3180));
    PteAddress = MiGetPteAddress(a1);
    v8 = (unsigned __int64 *)PteAddress;
    do
    {
      v9 = MI_GET_PAGE_FRAME_FROM_PTE(v8);
      v8 = (unsigned __int64 *)(v10 + 8);
      *v11 = 48 * v9 - 0x58000000000LL;
      v12 = (unsigned __int64)(v11 + 1);
    }
    while ( v13 != 1 );
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v20 = 0;
      v18 = &v21;
      v22 = v5;
      v21 = a1;
      v19 = 12;
      EtwTraceKernelEvent((__int64)&v18, 1u, 0x20400000u, 0x24Eu, 0x401802u);
    }
    MiReleasePtes((__int64)&qword_140389360, PteAddress, 2u, v12);
    v14 = (__int64 *)&v17;
    v15 = 2LL;
    do
    {
      MiReturnPfnReferenceCount(*v14++);
      --v15;
    }
    while ( v15 );
    PsDereferencePartition(*(_QWORD *)(v6 + 168));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388490, 0LL);
    _bittestandreset((signed __int32 *)qword_140389310->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388490, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388490);
    KeAbPostRelease((ULONG_PTR)&qword_140388490);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
