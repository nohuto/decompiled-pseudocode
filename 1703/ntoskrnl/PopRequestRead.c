/*
 * XREFs of PopRequestRead @ 0x140407B98
 * Callers:
 *     PopRestoreHiberContext @ 0x140407064 (PopRestoreHiberContext.c)
 *     PopDecompressCallback @ 0x140407B80 (PopDecompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 *     ProducerGetBuffer @ 0x140407F0C (ProducerGetBuffer.c)
 *     PopGetIoLocation @ 0x140407FB4 (PopGetIoLocation.c)
 *     PopHiberCheckForDebugBreak @ 0x140408000 (PopHiberCheckForDebugBreak.c)
 *     ProducerConsumerBufferComplete @ 0x140408044 (ProducerConsumerBufferComplete.c)
 *     PopHiberChecksumHiberFileData @ 0x140408114 (PopHiberChecksumHiberFileData.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 */

void __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 v8; // rcx
  ULONG_PTR v9; // r12
  __int64 IoLocation; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 Buffer; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // rbp
  int v17; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // r12
  char v27; // r15
  int v28; // ebp
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter3 + 328);
  v4 = 0;
  v5 = a3;
  v6 = a2;
  while ( *(_QWORD *)(BugCheckParameter3 + 408) )
  {
    v8 = *(unsigned int *)(BugCheckParameter3 + 336);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 1 )
      {
        PopHiberChecksumHiberFileData(
          BugCheckParameter3,
          0,
          *(_QWORD *)(BugCheckParameter3 + 384),
          *(_QWORD *)(BugCheckParameter3 + 392),
          *(_QWORD *)(BugCheckParameter3 + 368));
        v20 = __rdtsc();
        qword_14034B708 += v20 - *(_QWORD *)(BugCheckParameter3 + 344);
        ProducerConsumerBufferComplete(
          v6,
          v6 + 32,
          *(_QWORD *)(BugCheckParameter3 + 392),
          *(unsigned int *)(BugCheckParameter3 + 368));
        v21 = __rdtsc();
        qword_14034B738 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v20;
        v22 = *(_QWORD *)(BugCheckParameter3 + 368);
        v23 = *(_QWORD *)(BugCheckParameter3 + 408) == v22;
        *(_QWORD *)(BugCheckParameter3 + 408) -= v22;
        if ( v23 )
          *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 40);
        v24 = *(_QWORD *)(BugCheckParameter3 + 360);
        *(_QWORD *)(BugCheckParameter3 + 384) += v24;
        *(_QWORD *)(BugCheckParameter3 + 352) += v24;
        *(_QWORD *)(BugCheckParameter3 + 360) = 0LL;
        *(_DWORD *)(BugCheckParameter3 + 336) = 0;
        continue;
      }
      ++qword_14034B718;
      v16 = __rdtsc();
      v17 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              2LL,
              BugCheckParameter3 + 376,
              v3);
      BugCheckParameter4 = v17;
      if ( v17 < 0 )
      {
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      v19 = __rdtsc();
      qword_14034B730 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v16;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return;
    }
    else
    {
      PopHiberCheckForDebugBreak(v8, 1LL);
      v9 = BugCheckParameter3 + 376;
      IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), *(_QWORD *)(BugCheckParameter3 + 384), &v33);
      v11 = *(unsigned int *)(BugCheckParameter3 + 416);
      *(_QWORD *)(BugCheckParameter3 + 376) = IoLocation;
      v12 = *(_QWORD *)(BugCheckParameter3 + 408);
      v13 = (v11 << 12) - *(_QWORD *)(BugCheckParameter3 + 352) % ((unsigned __int64)(unsigned int)v11 << 12);
      if ( v13 >= v33 )
        v13 = v33;
      if ( v13 < v12 )
        LODWORD(v12) = v13;
      Buffer = ProducerGetBuffer(v6, (unsigned int)v13, (unsigned int)v12, v5);
      v15 = Buffer;
      if ( !Buffer )
        return;
      *(_QWORD *)(BugCheckParameter3 + 392) = Buffer;
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 32) = Buffer & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v3 + 40) = v13;
      *(_QWORD *)(v3 + 24) = Buffer;
      v25 = ((Buffer & 0xFFF) + v13 + 4095) >> 12;
      *(_DWORD *)(v3 + 44) = Buffer & 0xFFF;
      *(_WORD *)(v3 + 10) = 1;
      *(_WORD *)(v3 + 8) = 8 * (v25 + 6);
      if ( v25 )
      {
        v26 = 0LL;
        do
        {
          ++v4;
          *(_QWORD *)(v3 + 8 * v26 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v15 + (v26 << 12))).QuadPart >> 12;
          v26 = v4;
        }
        while ( v4 < v25 );
        v5 = a3;
        v9 = BugCheckParameter3 + 376;
      }
      v27 = *(_BYTE *)(BugCheckParameter3 + 400);
      v4 = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = __rdtsc();
      v28 = (*(__int64 (__fastcall **)(bool, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              v27 != 0,
              v9,
              v3);
      if ( v28 == -1073741637 )
      {
        if ( !v27 )
          goto LABEL_33;
        *(_BYTE *)(BugCheckParameter3 + 400) = 0;
        *(_QWORD *)(BugCheckParameter3 + 344) = __rdtsc();
        v28 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                v9,
                v3);
      }
      if ( v28 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_33:
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, v28);
      }
      v29 = __rdtsc();
      qword_14034B730 += (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29)
                       - *(_QWORD *)(BugCheckParameter3 + 344);
      v30 = *(_QWORD *)(BugCheckParameter3 + 408);
      *(_QWORD *)(BugCheckParameter3 + 360) = v13;
      if ( v13 < v30 )
        v30 = v13;
      *(_QWORD *)(BugCheckParameter3 + 368) = v30;
      if ( v27 && v28 )
      {
        v6 = a2;
        *(_DWORD *)(BugCheckParameter3 + 336) = 1;
        continue;
      }
    }
    v6 = a2;
    *(_DWORD *)(BugCheckParameter3 + 336) = 2;
  }
}
