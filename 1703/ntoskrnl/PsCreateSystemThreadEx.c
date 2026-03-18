/*
 * XREFs of PsCreateSystemThreadEx @ 0x1405679C0
 * Callers:
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 *     MiEnablePartitionMappedWrites @ 0x1404938EC (MiEnablePartitionMappedWrites.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     ExpCreateSystemThreadForNode @ 0x140567898 (ExpCreateSystemThreadForNode.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
 *     NtGetMUIRegistryInfo @ 0x140568580 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     IoCreateSystemThread @ 0x140573E70 (IoCreateSystemThread.c)
 *     PopInitSystemSleeperThread @ 0x140579B70 (PopInitSystemSleeperThread.c)
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405A444C (CmpInitializeSystemHivesLoad.c)
 *     CmpInitializeLazyWriters @ 0x1405A8DA0 (CmpInitializeLazyWriters.c)
 *     MiInsertPageFileInList @ 0x1405B9FB8 (MiInsertPageFileInList.c)
 *     KiStartDpcThread @ 0x1405BD340 (KiStartDpcThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1405CEC80 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1405CF5DC (PopFxCreateEmergencyWorkerThread.c)
 *     PfTStart @ 0x1405D83BC (PfTStart.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 *     IopStartApcHardError @ 0x14068AC20 (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x1406B6230 (MiInitializePartitionThreads.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x14012E4F0 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspCreateThread @ 0x1405410D4 (PspCreateThread.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
        __int128 *a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8,
        _DWORD *a9)
{
  __int64 v10; // r8
  int v12; // r10d
  struct _EX_RUNDOWN_REF *v13; // r13
  ULONG_PTR v14; // r12
  int v15; // eax
  USHORT ActiveGroupCount; // ax
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  _OWORD *v19; // rdx
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int128 v23; // [rsp+88h] [rbp-78h] BYREF
  __m128i v24; // [rsp+98h] [rbp-68h]
  __int128 v25; // [rsp+A8h] [rbp-58h]
  _OWORD v26[30]; // [rsp+C0h] [rbp-40h] BYREF

  v10 = a5;
  v12 = a2;
  v22 = a1;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, (unsigned __int64)KeGetCurrentIrql() << 16, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    v14 = a4;
    v13 = 0LL;
  }
  else
  {
    v13 = (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess;
    v14 = 0LL;
    memset(v26, 0, 0x1D8uLL);
    v15 = 4096;
    DWORD1(v26[0]) = 4096;
    if ( a8 )
    {
      v26[20] = *a8;
    }
    else
    {
      ActiveGroupCount = KeQueryActiveGroupCount();
      WORD4(v26[20]) = (_InterlockedExchangeAdd(&PspSystemThreadAssignment, a4 + 1) + 1)
                     % (unsigned int)ActiveGroupCount;
      *(_QWORD *)&v26[20] = qword_1403E42B8[WORD4(v26[20])];
      v15 = DWORD1(v26[0]);
    }
    v12 = a2;
    a1 = v22;
    v10 = a5;
    if ( a9 )
    {
      DWORD1(v26[0]) = v15 | 0x4000;
      HIDWORD(v26[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v17 = *a3;
    v24 = (__m128i)a3[1];
    v23 = v17;
    v18 = a3[2];
    v24.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8)) | 0x200;
    v25 = v18;
  }
  else
  {
    LODWORD(v23) = 48;
    v25 = 0LL;
    *((_QWORD *)&v23 + 1) = 0LL;
    v24.m128i_i32[2] = 512;
    v24.m128i_i64[0] = 0LL;
  }
  v19 = v26;
  if ( a4 )
    v19 = 0LL;
  return PspCreateThread(a1, v12, (__int64)&v23, v14, v13, (__int64)v19, v10, 0LL, 0LL, 0, a6, a7, 0LL);
}
