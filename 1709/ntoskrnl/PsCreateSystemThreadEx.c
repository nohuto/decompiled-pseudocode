/*
 * XREFs of PsCreateSystemThreadEx @ 0x1405549A0
 * Callers:
 *     MiZeroNodePages @ 0x1401370F0 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x14015A634 (MiZeroBootLargePages.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     NtGetMUIRegistryInfo @ 0x1404F25F8 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 *     MiEnablePartitionMappedWrites @ 0x1404F9CA4 (MiEnablePartitionMappedWrites.c)
 *     ExpNodeCreateSystemThread @ 0x140554884 (ExpNodeCreateSystemThread.c)
 *     PsCreateSystemThread @ 0x140554950 (PsCreateSystemThread.c)
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 *     KiStartDpcThread @ 0x1405BF270 (KiStartDpcThread.c)
 *     CmpInitializeLazyWriters @ 0x1405CC658 (CmpInitializeLazyWriters.c)
 *     MiInsertPageFileInList @ 0x1405D4984 (MiInsertPageFileInList.c)
 *     IoCreateSystemThread @ 0x1405DB160 (IoCreateSystemThread.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405E18B4 (CmpInitializeSystemHivesLoad.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1405E6884 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1405E82B4 (PopFxCreateEmergencyWorkerThread.c)
 *     IopStartApcHardError @ 0x1406B6870 (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x1406E2988 (MiInitializePartitionThreads.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
 *     PfTStart @ 0x1406F3FC8 (PfTStart.c)
 *     PopInitSystemSleeperThread @ 0x1407010A0 (PopInitSystemSleeperThread.c)
 *     ExpWatchLicenseInfoWork @ 0x140755DD0 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x1400FE430 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspCreateThread @ 0x140492B18 (PspCreateThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
        __int128 *a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        _DWORD *a9)
{
  __int64 *v9; // r14
  char v11; // r13
  __int64 v12; // rbx
  _DWORD *v13; // rsi
  unsigned __int16 v14; // bx
  __int128 v15; // xmm0
  int v16; // eax
  int Thread; // esi
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h]
  int v24[2]; // [rsp+88h] [rbp-78h]
  int v25[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v26; // [rsp+A0h] [rbp-60h]
  __int128 v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-38h]
  _OWORD v30[31]; // [rsp+D0h] [rbp-30h] BYREF

  v9 = a8;
  v23 = a5;
  *(_QWORD *)v24 = a1;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, KeGetCurrentIrql() << 16, 0LL, 0LL, 0LL);
  v11 = 0;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(a4, 2, (__int64)PsProcessType, 0, 1917023056, &v22, 0LL, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v12 = v22;
    v11 = 1;
  }
  else
  {
    v12 = *((_QWORD *)PspSystemPartition + 13);
    v22 = v12;
  }
  v13 = (_DWORD *)(v12 + 1740);
  if ( (*(_DWORD *)(v12 + 1740) & 0x1000) != 0 )
  {
    if ( !a8 && !a9 )
    {
      v28 = 0LL;
      v29 = 0LL;
      v14 = _InterlockedIncrement(&PspSystemThreadAssignment);
      v9 = &v28;
      LOWORD(v29) = v14 % KeQueryActiveGroupCount();
      v12 = v22;
      v28 = qword_140401408[(unsigned __int16)v29];
    }
    memset(v30, 0, 0x1E8uLL);
    if ( v9 )
    {
      v15 = *(_OWORD *)v9;
      v16 = 4096;
      DWORD1(v30[0]) = 4096;
      v30[20] = v15;
    }
    else
    {
      v16 = DWORD1(v30[0]);
    }
    if ( a9 )
    {
      DWORD1(v30[0]) = v16 | 0x4000;
      HIDWORD(v30[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v19 = *a3;
    v26 = (__m128i)a3[1];
    *(_OWORD *)v25 = v19;
    v20 = a3[2];
    v26.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8)) | 0x200;
    v27 = v20;
  }
  else
  {
    *(_QWORD *)&v25[2] = 0LL;
    v26.m128i_i64[0] = 0LL;
    v27 = 0LL;
    v25[0] = 48;
    v26.m128i_i32[2] = 512;
  }
  Thread = PspCreateThread(
             *(__int64 *)v24,
             a2,
             (__int64)v25,
             0LL,
             (_KPROCESS *)v12,
             (unsigned __int64)v30 & -(__int64)((*v13 & 0x1000) != 0),
             v23,
             0LL,
             0LL,
             0,
             a6,
             a7,
             0LL);
  if ( v11 )
    ObfDereferenceObjectWithTag((PVOID)v12, 0x72437350u);
  return (unsigned int)Thread;
}
