/*
 * XREFs of PopRequestRead @ 0x140434168
 * Callers:
 *     PopDecompressCallback @ 0x140432B00 (PopDecompressCallback.c)
 *     PopRestoreHiberContext @ 0x140434AE0 (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     PopGetIoLocation @ 0x14043346C (PopGetIoLocation.c)
 *     PopHiberCheckForDebugBreak @ 0x14043356C (PopHiberCheckForDebugBreak.c)
 *     PopHiberChecksumHiberFileData @ 0x140433854 (PopHiberChecksumHiberFileData.c)
 *     ProducerConsumerBufferComplete @ 0x1404363B8 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140436598 (ProducerGetBuffer.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 */

void __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  unsigned int v5; // ebx
  __int64 v6; // rbp
  int v8; // ecx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // r12
  unsigned __int64 IoLocation; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  __int64 Buffer; // rax
  __int64 v27; // rbp
  unsigned __int64 v28; // r15
  __int64 v29; // r12
  char v30; // r15
  __int64 v31; // rdx
  int v32; // ebp
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v39; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter3 + 328);
  v4 = 0;
  v5 = a3;
  v6 = a2;
  while ( *(_QWORD *)(BugCheckParameter3 + 408) )
  {
    v8 = *(_DWORD *)(BugCheckParameter3 + 336);
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        PopHiberChecksumHiberFileData(
          BugCheckParameter3,
          0,
          *(_QWORD *)(BugCheckParameter3 + 384),
          *(_QWORD *)(BugCheckParameter3 + 392),
          *(_QWORD *)(BugCheckParameter3 + 368));
        v9 = __rdtsc();
        qword_140365D88 += v9 - *(_QWORD *)(BugCheckParameter3 + 344);
        ProducerConsumerBufferComplete(
          v6,
          v6 + 32,
          *(_QWORD *)(BugCheckParameter3 + 392),
          *(unsigned int *)(BugCheckParameter3 + 368));
        v10 = __rdtsc();
        qword_140365DB8 += (((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) - v9;
        v11 = *(_QWORD *)(BugCheckParameter3 + 368);
        v12 = *(_QWORD *)(BugCheckParameter3 + 408) == v11;
        *(_QWORD *)(BugCheckParameter3 + 408) -= v11;
        if ( v12 )
          *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 40);
        v13 = *(_QWORD *)(BugCheckParameter3 + 360);
        *(_QWORD *)(BugCheckParameter3 + 384) += v13;
        *(_QWORD *)(BugCheckParameter3 + 352) += v13;
        *(_QWORD *)(BugCheckParameter3 + 360) = 0LL;
        *(_DWORD *)(BugCheckParameter3 + 336) = 0;
        continue;
      }
      ++qword_140365D98;
      v14 = __rdtsc();
      v15 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              2LL,
              BugCheckParameter3 + 376,
              v3);
      BugCheckParameter4 = v15;
      if ( v15 < 0 )
      {
        PopCheckpointSystemSleep(29LL, v16, v17, v18);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1D0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      v20 = __rdtsc();
      qword_140365DB0 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v14;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return;
    }
    else
    {
      PopHiberCheckForDebugBreak();
      v21 = BugCheckParameter3 + 376;
      IoLocation = PopGetIoLocation(
                     *(__int64 **)(BugCheckParameter3 + 160),
                     *(_QWORD *)(BugCheckParameter3 + 384),
                     &v39);
      v23 = *(unsigned int *)(BugCheckParameter3 + 416);
      *(_QWORD *)(BugCheckParameter3 + 376) = IoLocation;
      v24 = *(_QWORD *)(BugCheckParameter3 + 408);
      v25 = (v23 << 12) - *(_QWORD *)(BugCheckParameter3 + 352) % ((unsigned __int64)(unsigned int)v23 << 12);
      if ( v25 >= v39 )
        v25 = v39;
      if ( v25 < v24 )
        LODWORD(v24) = v25;
      Buffer = ProducerGetBuffer(v6, (unsigned int)v25, (unsigned int)v24, v5);
      v27 = Buffer;
      if ( !Buffer )
        return;
      *(_QWORD *)(BugCheckParameter3 + 392) = Buffer;
      *(_QWORD *)v3 = 0LL;
      *(_DWORD *)(v3 + 40) = v25;
      *(_QWORD *)(v3 + 32) = Buffer & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v3 + 24) = Buffer;
      v28 = ((Buffer & 0xFFF) + v25 + 4095) >> 12;
      *(_DWORD *)(v3 + 44) = Buffer & 0xFFF;
      *(_WORD *)(v3 + 10) = 1;
      *(_WORD *)(v3 + 8) = 8 * (v28 + 6);
      if ( v28 )
      {
        v29 = 0LL;
        do
        {
          ++v4;
          *(_QWORD *)(v3 + 8 * v29 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v27 + (v29 << 12))).QuadPart >> 12;
          v29 = v4;
        }
        while ( v4 < v28 );
        v5 = a3;
        v21 = BugCheckParameter3 + 376;
      }
      v30 = *(_BYTE *)(BugCheckParameter3 + 400);
      v4 = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = __rdtsc();
      v32 = (*(__int64 (__fastcall **)(bool, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              v30 != 0,
              v21,
              v3);
      if ( v32 == -1073741637 )
      {
        if ( !v30 )
          goto LABEL_32;
        *(_BYTE *)(BugCheckParameter3 + 400) = 0;
        *(_QWORD *)(BugCheckParameter3 + 344) = __rdtsc();
        v32 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                v21,
                v3);
      }
      if ( v32 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_32:
        PopCheckpointSystemSleep(29LL, v31, v33, v34);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, v32);
      }
      v35 = __rdtsc();
      qword_140365DB0 += (((unsigned __int64)HIDWORD(v35) << 32) | (unsigned int)v35)
                       - *(_QWORD *)(BugCheckParameter3 + 344);
      v36 = *(_QWORD *)(BugCheckParameter3 + 408);
      *(_QWORD *)(BugCheckParameter3 + 360) = v25;
      if ( v25 < v36 )
        v36 = v25;
      *(_QWORD *)(BugCheckParameter3 + 368) = v36;
      if ( v30 && v32 )
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
