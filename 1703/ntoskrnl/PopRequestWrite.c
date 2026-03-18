/*
 * XREFs of PopRequestWrite @ 0x140406CAC
 * Callers:
 *     PopWriteHiberImage @ 0x140406638 (PopWriteHiberImage.c)
 *     PopCompressCallback @ 0x140408260 (PopCompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 *     PopGetIoLocation @ 0x140407FB4 (PopGetIoLocation.c)
 *     ProducerConsumerBufferComplete @ 0x140408044 (ProducerConsumerBufferComplete.c)
 *     PopHiberChecksumHiberFileData @ 0x140408114 (PopHiberChecksumHiberFileData.c)
 *     ConsumerGetBuffer @ 0x140408278 (ConsumerGetBuffer.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140419CD8 (PopGetRemainingHibernateRangeDataSize.c)
 *     MmGetNumberOfPhysicalPages @ 0x140437454 (MmGetNumberOfPhysicalPages.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  ULONG_PTR i; // rdi
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  ULONG_PTR v11; // r13
  __int64 v12; // rcx
  __int64 IoLocation; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r15
  __int64 Buffer; // rax
  __int64 v17; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // r13
  unsigned int v29; // edi
  unsigned __int64 v30; // rbp
  ULONG_PTR v31; // r15
  unsigned __int64 v32; // rax
  ULONG_PTR v33; // r15
  unsigned __int64 v34; // rax
  int v35; // ecx
  _QWORD v37[2]; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR v38; // [rsp+48h] [rbp-50h]
  __int64 NumberOfPhysicalPages; // [rsp+50h] [rbp-48h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  RemainingHibernateRangeDataSize = 0LL;
  v5 = a2;
  v6 = *(_QWORD *)(BugCheckParameter3 + 328);
  for ( i = BugCheckParameter3; ; *(_QWORD *)(i + 344) = v30 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(i + 336);
      if ( !v8 )
        break;
      v19 = __rdtsc();
      v20 = v19;
      if ( v8 == 1 )
      {
        BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 128LL))(
                               2LL,
                               i + 376,
                               v6);
        v22 = __rdtsc();
        qword_14034B5E0 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v20;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(21LL);
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
        qword_14034B5D8 += v19 - *(_QWORD *)(i + 344);
        ProducerConsumerBufferComplete(v5, v5 + 48, *(_QWORD *)(i + 392), *(unsigned int *)(i + 368));
        v23 = __rdtsc();
        qword_14034B600 += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v20;
        qword_14034B7A8 += *(_QWORD *)(i + 368);
        LODWORD(qword_14034B7B0) = ((unsigned __int64)(*(_QWORD *)(i + 360) + 4095LL) >> 12) + qword_14034B7B0;
        v24 = *(_QWORD *)(i + 360);
        *(_QWORD *)(i + 384) += v24;
        *(_QWORD *)(i + 352) += v24;
        *(_QWORD *)(i + 360) = 0LL;
        *(_DWORD *)(i + 336) = 0;
      }
    }
    v9 = PopWatchdogTimerCount;
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    {
      off_14033B5D0[0]();
      v9 = PopWatchdogTimerCount;
    }
    v10 = *(_QWORD *)(i + 384);
    v11 = i + 376;
    v12 = *(_QWORD *)(i + 160);
    v38 = i + 376;
    PopWatchdogTimerCount = v9 + 1;
    IoLocation = PopGetIoLocation(v12, v10, v37);
    v14 = *(unsigned int *)(i + 416);
    *(_QWORD *)(i + 376) = IoLocation;
    v15 = (v14 << 12) - *(_QWORD *)(i + 352) % (unsigned __int64)(v14 << 12);
    if ( v15 >= v37[0] )
      v15 = v37[0];
    v42 = v15;
    Buffer = ConsumerGetBuffer(v5, &v42, v3);
    v17 = Buffer;
    if ( !Buffer )
      break;
    v25 = *(_QWORD *)(i + 384);
    v26 = v42;
    *(_QWORD *)(i + 392) = Buffer;
    *(_QWORD *)(i + 368) = v26;
    if ( v25 + v15 > qword_14034B2B0 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(i + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(i);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v35 + 8);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_14034B2B0, *(unsigned int *)(i + 184), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(i, 1, v25, Buffer, v26);
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 40) = v15;
    *(_QWORD *)(v6 + 24) = v17;
    *(_WORD *)(v6 + 10) = 1;
    v27 = ((v17 & 0xFFF) + v15 + 4095) >> 12;
    v37[1] = v27;
    *(_WORD *)(v6 + 8) = 8 * (v27 + 6);
    *(_QWORD *)(v6 + 32) = v17 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v6 + 44) = v17 & 0xFFF;
    if ( v27 )
    {
      v28 = 0LL;
      v29 = 0;
      do
      {
        ++v29;
        *(_QWORD *)(v6 + 8 * v28 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v17 + (v28 << 12))).QuadPart >> 12;
        v28 = v29;
      }
      while ( v29 < ((v17 & 0xFFF) + v15 + 4095) >> 12 );
      v3 = a3;
      RemainingHibernateRangeDataSize = 0LL;
      i = BugCheckParameter3;
      v11 = v38;
    }
    *(_QWORD *)(i + 360) = v15;
    if ( !*(_BYTE *)(i + 400) )
      goto LABEL_28;
    v30 = __rdtsc();
    v31 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(i + 168) + 128LL))(1LL, v11, v6, 0LL);
    v32 = __rdtsc();
    qword_14034B5E0 += (((unsigned __int64)HIDWORD(v32) << 32) | (unsigned int)v32) - v30;
    if ( (_DWORD)v31 == -1073741637 )
    {
      *(_BYTE *)(i + 400) = 0;
    }
    else
    {
      if ( (v31 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(i, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v31);
      }
      *(_DWORD *)(i + 336) = ((_DWORD)v31 != 259) + 1;
    }
    if ( !*(_BYTE *)(i + 400) )
    {
LABEL_28:
      v30 = __rdtsc();
      v33 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 64LL))(v11, v6);
      v34 = __rdtsc();
      qword_14034B5E0 += (((unsigned __int64)HIDWORD(v34) << 32) | (unsigned int)v34) - v30;
      if ( (v33 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(i, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v33);
      }
      *(_DWORD *)(i + 336) = 2;
    }
    v5 = a2;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v42 == 0;
  return RemainingHibernateRangeDataSize;
}
