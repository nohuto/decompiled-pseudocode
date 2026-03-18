/*
 * XREFs of PsCreateSystemThreadEx @ 0x14052AC40
 * Callers:
 *     MiZeroNodePages @ 0x14016FC80 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x140185ED4 (MiZeroBootLargePages.c)
 *     MiEnablePartitionMappedWrites @ 0x1404BEC88 (MiEnablePartitionMappedWrites.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 *     ExpNodeCreateSystemThread @ 0x14052B848 (ExpNodeCreateSystemThread.c)
 *     NtGetMUIRegistryInfo @ 0x140568A90 (NtGetMUIRegistryInfo.c)
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     IoCreateSystemThread @ 0x1405E5FD0 (IoCreateSystemThread.c)
 *     PopInitSystemSleeperThread @ 0x1405EA6E0 (PopInitSystemSleeperThread.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 *     CmpInitializeLazyWriters @ 0x140628674 (CmpInitializeLazyWriters.c)
 *     CmpInitializeRegistryProcess @ 0x14062C3D8 (CmpInitializeRegistryProcess.c)
 *     KiStartDpcThread @ 0x1406328F4 (KiStartDpcThread.c)
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14063C7A8 (MiInsertPageFileInList.c)
 *     PfTStart @ 0x1406451D8 (PfTStart.c)
 *     CmpInitializeSystemHivesLoad @ 0x1406498CC (CmpInitializeSystemHivesLoad.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x14064CB78 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x14064DC3C (PopFxCreateEmergencyWorkerThread.c)
 *     IopStartApcHardError @ 0x14071B550 (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x14074D720 (MiInitializePartitionThreads.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x14007DAC0 (KeQueryActiveGroupCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspCreateThread @ 0x1404B98F8 (PspCreateThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
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
  int Thread; // esi
  char *v13; // rbx
  _DWORD *v14; // rsi
  unsigned int v15; // ebx
  __int128 v16; // xmm0
  int v17; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
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
    KeBugCheckEx(0xC8u, (KeGetCurrentIrql() << 16) | 4u, 0LL, 0LL, 0LL);
  v11 = 0;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(a4, 0x72437350u, (__int64)&Object, 0LL, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v13 = (char *)Object;
    v11 = 1;
  }
  else
  {
    v13 = (char *)*((_QWORD *)PspSystemPartition + 13);
    Object = v13;
  }
  v14 = v13 + 1740;
  if ( (*((_DWORD *)v13 + 435) & 0x1000) != 0 )
  {
    if ( !a8 && !a9 )
    {
      v28 = 0LL;
      v29 = 0LL;
      v15 = (unsigned __int16)(_InterlockedExchangeAdd(&PspSystemThreadAssignment, 1u) + 1);
      v9 = &v28;
      LOWORD(v29) = v15 % KeQueryActiveGroupCount();
      v13 = (char *)Object;
      v28 = qword_14044C5D8[(unsigned __int16)v29];
    }
    memset(v30, 0, 0x1E8uLL);
    if ( v9 )
    {
      v16 = *(_OWORD *)v9;
      v17 = 4096;
      DWORD1(v30[0]) = 4096;
      v30[20] = v16;
    }
    else
    {
      v17 = DWORD1(v30[0]);
    }
    if ( a9 )
    {
      DWORD1(v30[0]) = v17 | 0x4000;
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
             (_KPROCESS *)v13,
             (unsigned __int64)v30 & -(__int64)((*v14 & 0x1000) != 0),
             v23,
             0LL,
             0LL,
             0,
             a6,
             a7,
             0LL);
  if ( v11 )
    ObfDereferenceObjectWithTag(v13, 0x72437350u);
  return (unsigned int)Thread;
}
