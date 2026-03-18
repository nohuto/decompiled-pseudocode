/*
 * XREFs of PopRequestWrite @ 0x1404743B4
 * Callers:
 *     PopWriteHiberImage @ 0x140474280 (PopWriteHiberImage.c)
 *     PopCompressCallback @ 0x140474390 (PopCompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     ConsumerGetBuffer @ 0x1404746C4 (ConsumerGetBuffer.c)
 *     PopGetIoLocation @ 0x140474780 (PopGetIoLocation.c)
 *     PopHiberChecksumHiberFileData @ 0x1404747D8 (PopHiberChecksumHiberFileData.c)
 *     ProducerConsumerBufferComplete @ 0x140474C6C (ProducerConsumerBufferComplete.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140486054 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140486508 (PopRecordHibernateDiagnosticInfo.c)
 *     MmGetNumberOfPhysicalPages @ 0x1405587B8 (MmGetNumberOfPhysicalPages.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r14
  ULONG_PTR v7; // rdi
  int v8; // ecx
  __int64 v9; // rdx
  ULONG_PTR v10; // r13
  __int64 v11; // rcx
  __int64 IoLocation; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // r12
  __int64 Buffer; // rax
  __int64 v16; // r15
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // r13
  unsigned int v22; // edi
  unsigned __int64 v23; // rbp
  ULONG_PTR v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // r15
  unsigned __int64 v33; // rax
  int v34; // ecx
  _QWORD v36[2]; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR v37; // [rsp+48h] [rbp-50h]
  __int64 NumberOfPhysicalPages; // [rsp+50h] [rbp-48h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+20h] BYREF

  RemainingHibernateRangeDataSize = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = *(_QWORD *)(BugCheckParameter3 + 320);
  v7 = BugCheckParameter3;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v7 + 328);
    if ( !v8 )
      break;
    v26 = __rdtsc();
    v27 = v26;
    if ( v8 == 1 )
    {
      BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(v7 + 168) + 128LL))(
                             2LL,
                             v7 + 368,
                             v6);
      v31 = __rdtsc();
      qword_1403AA500 += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v27;
      if ( (BugCheckParameter4 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21);
        PopInternalAddToDumpFile(v7, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v7 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, BugCheckParameter4);
      }
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return RemainingHibernateRangeDataSize;
      *(_DWORD *)(v7 + 328) = 2;
LABEL_19:
      v5 = a2;
    }
    else
    {
      qword_1403AA4F8 += v26 - *(_QWORD *)(v7 + 336);
      ProducerConsumerBufferComplete(v5, v5 + 48, *(_QWORD *)(v7 + 384), *(unsigned int *)(v7 + 360));
      v28 = __rdtsc();
      qword_1403AA520 += (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) - v27;
      qword_1403AA6C8 += *(_QWORD *)(v7 + 360);
      dword_1403AA6D0 += (unsigned __int64)(*(_QWORD *)(v7 + 352) + 4095LL) >> 12;
      v29 = *(_QWORD *)(v7 + 352);
      *(_QWORD *)(v7 + 376) += v29;
      *(_QWORD *)(v7 + 344) += v29;
      *(_QWORD *)(v7 + 352) = 0LL;
      *(_DWORD *)(v7 + 328) = 0;
    }
  }
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    off_1403989A0[0]();
  v9 = *(_QWORD *)(v7 + 376);
  v10 = v7 + 368;
  v11 = *(_QWORD *)(v7 + 160);
  ++PopWatchdogTimerCount;
  v37 = v7 + 368;
  IoLocation = PopGetIoLocation(v11, v9, v36);
  v13 = *(unsigned int *)(v7 + 408);
  *(_QWORD *)(v7 + 368) = IoLocation;
  v14 = (v13 << 12) - *(_QWORD *)(v7 + 344) % (unsigned __int64)(v13 << 12);
  if ( v14 >= v36[0] )
    v14 = v36[0];
  v41 = v14;
  Buffer = ConsumerGetBuffer(v5, &v41, v4);
  v16 = Buffer;
  if ( Buffer )
  {
    v18 = *(_QWORD *)(v7 + 376);
    v19 = v41;
    *(_QWORD *)(v7 + 384) = Buffer;
    *(_QWORD *)(v7 + 360) = v19;
    if ( v18 + v14 > qword_1403AA190 )
    {
      PopCheckpointSystemSleep(22);
      if ( (unsigned int)(*(_DWORD *)(v7 + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(v7);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v34 + 8);
      PopRecordHibernateDiagnosticInfo(v7);
      IoAddTriageDumpDataBlock((int)&PopHibernateDiagnosticInfo, 128);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_1403AA190, *(unsigned int *)(v7 + 184), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(v7, 1, v18, Buffer, v19);
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 40) = v14;
    *(_QWORD *)(v6 + 24) = v16;
    v20 = ((v16 & 0xFFF) + v14 + 4095) >> 12;
    v36[1] = v20;
    *(_WORD *)(v6 + 8) = 8 * (v20 + 6);
    *(_QWORD *)(v6 + 32) = v16 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v6 + 44) = v16 & 0xFFF;
    *(_WORD *)(v6 + 10) = 1;
    if ( v20 )
    {
      v21 = 0LL;
      v22 = 0;
      do
      {
        ++v22;
        *(_QWORD *)(v6 + 8 * v21 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v16 + (v21 << 12))).QuadPart >> 12;
        v21 = v22;
      }
      while ( v22 < ((v16 & 0xFFF) + v14 + 4095) >> 12 );
      v4 = a3;
      RemainingHibernateRangeDataSize = 0LL;
      v7 = BugCheckParameter3;
      v10 = v37;
    }
    *(_QWORD *)(v7 + 352) = v14;
    if ( !*(_BYTE *)(v7 + 392) )
      goto LABEL_16;
    v23 = __rdtsc();
    v32 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(v7 + 168) + 128LL))(
            1LL,
            v10,
            v6,
            0LL);
    v33 = __rdtsc();
    qword_1403AA500 += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v23;
    if ( (_DWORD)v32 == -1073741637 )
    {
      *(_BYTE *)(v7 + 392) = 0;
    }
    else
    {
      if ( (v32 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21);
        PopInternalAddToDumpFile(v7, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v7 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, v32);
      }
      *(_DWORD *)(v7 + 328) = ((_DWORD)v32 != 259) + 1;
    }
    if ( !*(_BYTE *)(v7 + 392) )
    {
LABEL_16:
      v23 = __rdtsc();
      v24 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(v7 + 168) + 64LL))(v10, v6);
      v25 = __rdtsc();
      qword_1403AA500 += (((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25) - v23;
      if ( (v24 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21);
        PopInternalAddToDumpFile(v7, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v7 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, v24);
      }
      *(_DWORD *)(v7 + 328) = 2;
    }
    *(_QWORD *)(v7 + 336) = v23;
    goto LABEL_19;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v41 == 0;
  return RemainingHibernateRangeDataSize;
}
