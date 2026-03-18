/*
 * XREFs of PopRequestWrite @ 0x140434590
 * Callers:
 *     PopCompressCallback @ 0x140432750 (PopCompressCallback.c)
 *     PopWriteHiberImage @ 0x140435DD4 (PopWriteHiberImage.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     ConsumerGetBuffer @ 0x140431F74 (ConsumerGetBuffer.c)
 *     PopGetIoLocation @ 0x14043346C (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1404334E0 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopHiberChecksumHiberFileData @ 0x140433854 (PopHiberChecksumHiberFileData.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x14043407C (PopRecordHibernateDiagnosticInfo.c)
 *     ProducerConsumerBufferComplete @ 0x1404363B8 (ProducerConsumerBufferComplete.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     MmGetNumberOfPhysicalPages @ 0x14056E6E0 (MmGetNumberOfPhysicalPages.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, char a3)
{
  char v3; // bl
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  ULONG_PTR i; // rdi
  int v8; // ecx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  ULONG_PTR v19; // r13
  __int64 *v20; // rcx
  unsigned __int64 IoLocation; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // r15
  unsigned __int64 Buffer; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // r13
  unsigned int v32; // edi
  unsigned __int64 v33; // rbp
  __int64 v34; // r8
  __int64 v35; // r9
  ULONG_PTR v36; // r15
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  ULONG_PTR v41; // r15
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  int v44; // ecx
  _QWORD v47[2]; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR v48; // [rsp+48h] [rbp-50h]
  __int64 NumberOfPhysicalPages; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  RemainingHibernateRangeDataSize = 0LL;
  v5 = a2;
  v6 = *(_QWORD *)(BugCheckParameter3 + 328);
  for ( i = BugCheckParameter3; ; *(_QWORD *)(i + 344) = v33 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(i + 336);
      if ( !v8 )
        break;
      v9 = __rdtsc();
      v10 = v9;
      if ( v8 == 1 )
      {
        BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 128LL))(
                               2LL,
                               i + 376,
                               v6);
        v16 = __rdtsc();
        v17 = (unsigned __int64)HIDWORD(v16) << 32;
        qword_140365C60 += (v17 | (unsigned int)v16) - v10;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(21LL, v17, v13, v14);
          PopInternalAddToDumpFile(i, 0x1D0u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, BugCheckParameter4);
        }
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return RemainingHibernateRangeDataSize;
        *(_DWORD *)(i + 336) = 2;
      }
      else
      {
        qword_140365C58 += v9 - *(_QWORD *)(i + 344);
        ProducerConsumerBufferComplete(v5, v5 + 48, *(_QWORD *)(i + 392), *(unsigned int *)(i + 368));
        v11 = __rdtsc();
        qword_140365C80 += (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) - v10;
        qword_140365E28 += *(_QWORD *)(i + 368);
        dword_140365E30 += (unsigned __int64)(*(_QWORD *)(i + 360) + 4095LL) >> 12;
        v12 = *(_QWORD *)(i + 360);
        *(_QWORD *)(i + 384) += v12;
        *(_QWORD *)(i + 352) += v12;
        *(_QWORD *)(i + 360) = 0LL;
        *(_DWORD *)(i + 336) = 0;
      }
    }
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      off_140353600[0]();
    v18 = *(_QWORD *)(i + 384);
    v19 = i + 376;
    v20 = *(__int64 **)(i + 160);
    ++PopWatchdogTimerCount;
    v48 = i + 376;
    IoLocation = PopGetIoLocation(v20, v18, v47);
    v22 = *(unsigned int *)(i + 416);
    *(_QWORD *)(i + 376) = IoLocation;
    v23 = (v22 << 12) - *(_QWORD *)(i + 352) % (unsigned __int64)(v22 << 12);
    if ( v23 >= v47[0] )
      v23 = v47[0];
    v52 = v23;
    Buffer = ConsumerGetBuffer(v5, (unsigned int *)&v52, v3);
    v27 = Buffer;
    if ( !Buffer )
      break;
    v28 = *(_QWORD *)(i + 384);
    v29 = v52;
    *(_QWORD *)(i + 392) = Buffer;
    *(_QWORD *)(i + 368) = v29;
    if ( v28 + v23 > qword_140365B10 )
    {
      PopCheckpointSystemSleep(22LL, v25, v28, v26);
      if ( (unsigned int)(*(_DWORD *)(i + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(i);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v44 + 8);
      PopRecordHibernateDiagnosticInfo(i);
      IoAddTriageDumpDataBlock((int)&PopHibernateDiagnosticInfo, 128);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140365B10, *(unsigned int *)(i + 184), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(i, 1, v28, Buffer, v29);
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 40) = v23;
    *(_QWORD *)(v6 + 24) = v27;
    *(_WORD *)(v6 + 10) = 1;
    v30 = ((v27 & 0xFFF) + v23 + 4095) >> 12;
    v47[1] = v30;
    *(_WORD *)(v6 + 8) = 8 * (v30 + 6);
    *(_QWORD *)(v6 + 32) = v27 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v6 + 44) = v27 & 0xFFF;
    if ( v30 )
    {
      v31 = 0LL;
      v32 = 0;
      do
      {
        ++v32;
        *(_QWORD *)(v6 + 8 * v31 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v27 + (v31 << 12))).QuadPart >> 12;
        v31 = v32;
      }
      while ( v32 < ((v27 & 0xFFF) + v23 + 4095) >> 12 );
      v3 = a3;
      RemainingHibernateRangeDataSize = 0LL;
      i = BugCheckParameter3;
      v19 = v48;
    }
    *(_QWORD *)(i + 360) = v23;
    if ( !*(_BYTE *)(i + 400) )
      goto LABEL_25;
    v33 = __rdtsc();
    v36 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(i + 168) + 128LL))(1LL, v19, v6, 0LL);
    v37 = __rdtsc();
    v38 = (unsigned __int64)HIDWORD(v37) << 32;
    qword_140365C60 += (v38 | (unsigned int)v37) - v33;
    if ( (_DWORD)v36 == -1073741637 )
    {
      *(_BYTE *)(i + 400) = 0;
    }
    else
    {
      if ( (v36 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21LL, v38, v34, v35);
        PopInternalAddToDumpFile(i, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v36);
      }
      *(_DWORD *)(i + 336) = ((_DWORD)v36 != 259) + 1;
    }
    if ( !*(_BYTE *)(i + 400) )
    {
LABEL_25:
      v33 = __rdtsc();
      v41 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 64LL))(v19, v6);
      v42 = __rdtsc();
      v43 = (unsigned __int64)HIDWORD(v42) << 32;
      qword_140365C60 += (v43 | (unsigned int)v42) - v33;
      if ( (v41 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21LL, v43, v39, v40);
        PopInternalAddToDumpFile(i, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v41);
      }
      *(_DWORD *)(i + 336) = 2;
    }
    v5 = a2;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v52 == 0;
  return RemainingHibernateRangeDataSize;
}
