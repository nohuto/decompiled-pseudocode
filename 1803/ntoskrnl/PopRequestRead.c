/*
 * XREFs of PopRequestRead @ 0x1404865F4
 * Callers:
 *     PopRestoreHiberContext @ 0x1404734E4 (PopRestoreHiberContext.c)
 *     PopDecompressCallback @ 0x140486030 (PopDecompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     PopGetIoLocation @ 0x140474780 (PopGetIoLocation.c)
 *     PopHiberChecksumHiberFileData @ 0x1404747D8 (PopHiberChecksumHiberFileData.c)
 *     ProducerConsumerBufferComplete @ 0x140474C6C (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140474D34 (ProducerGetBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140474DD8 (PopHiberCheckForDebugBreak.c)
 */

void __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, char a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  char v5; // bl
  __int64 v6; // rbp
  int v8; // ecx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  int v15; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // r12
  __int64 IoLocation; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  unsigned int v22; // r8d
  unsigned __int64 Buffer; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r15
  __int64 v26; // r12
  char v27; // r15
  int v28; // ebp
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter3 + 320);
  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( *(_QWORD *)(BugCheckParameter3 + 400) )
  {
    v8 = *(_DWORD *)(BugCheckParameter3 + 328);
    do
    {
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          PopHiberChecksumHiberFileData(
            BugCheckParameter3,
            0,
            *(_QWORD *)(BugCheckParameter3 + 376),
            *(_QWORD *)(BugCheckParameter3 + 384),
            *(_QWORD *)(BugCheckParameter3 + 360));
          v9 = __rdtsc();
          qword_1403AA628 += v9 - *(_QWORD *)(BugCheckParameter3 + 336);
          ProducerConsumerBufferComplete(
            v6,
            v6 + 32,
            *(_QWORD *)(BugCheckParameter3 + 384),
            *(_DWORD *)(BugCheckParameter3 + 360));
          v10 = __rdtsc();
          qword_1403AA658 += (((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) - v9;
          v11 = *(_QWORD *)(BugCheckParameter3 + 360);
          v12 = *(_QWORD *)(BugCheckParameter3 + 400) == v11;
          *(_QWORD *)(BugCheckParameter3 + 400) -= v11;
          if ( v12 )
            *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 40);
          v13 = *(_QWORD *)(BugCheckParameter3 + 352);
          v8 = 0;
          *(_QWORD *)(BugCheckParameter3 + 376) += v13;
          *(_QWORD *)(BugCheckParameter3 + 344) += v13;
          *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
          *(_DWORD *)(BugCheckParameter3 + 328) = 0;
          continue;
        }
        ++qword_1403AA638;
        v14 = __rdtsc();
        v15 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                2LL,
                BugCheckParameter3 + 368,
                v3);
        BugCheckParameter4 = v15;
        if ( v15 < 0 )
        {
          PopCheckpointSystemSleep(29);
          PopInternalAddToDumpFile(BugCheckParameter3, 0x1C8u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
        }
        v17 = __rdtsc();
        qword_1403AA650 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v14;
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return;
      }
      else
      {
        PopHiberCheckForDebugBreak();
        v18 = BugCheckParameter3 + 368;
        IoLocation = PopGetIoLocation(
                       *(_QWORD *)(BugCheckParameter3 + 160),
                       *(_QWORD *)(BugCheckParameter3 + 376),
                       &v33);
        v20 = *(unsigned int *)(BugCheckParameter3 + 408);
        *(_QWORD *)(BugCheckParameter3 + 368) = IoLocation;
        v21 = (v20 << 12) - *(_QWORD *)(BugCheckParameter3 + 344) % (unsigned __int64)(v20 << 12);
        if ( v21 >= v33 )
          v21 = v33;
        v22 = v21;
        if ( v21 >= *(_QWORD *)(BugCheckParameter3 + 400) )
          v22 = *(_QWORD *)(BugCheckParameter3 + 400);
        Buffer = ProducerGetBuffer(v6, v21, v22, v5);
        v24 = Buffer;
        if ( !Buffer )
          return;
        *(_QWORD *)(BugCheckParameter3 + 384) = Buffer;
        *(_QWORD *)v3 = 0LL;
        *(_DWORD *)(v3 + 40) = v21;
        *(_QWORD *)(v3 + 32) = Buffer & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(v3 + 24) = Buffer;
        v25 = ((Buffer & 0xFFF) + v21 + 4095) >> 12;
        *(_DWORD *)(v3 + 44) = Buffer & 0xFFF;
        *(_WORD *)(v3 + 10) = 1;
        *(_WORD *)(v3 + 8) = 8 * (v25 + 6);
        if ( v25 )
        {
          v26 = 0LL;
          do
          {
            ++v4;
            *(_QWORD *)(v3 + 8 * v26 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v24 + (v26 << 12))).QuadPart >> 12;
            v26 = v4;
          }
          while ( v4 < v25 );
          v5 = a3;
          v18 = BugCheckParameter3 + 368;
        }
        v27 = *(_BYTE *)(BugCheckParameter3 + 392);
        v4 = 0;
        *(_QWORD *)(BugCheckParameter3 + 336) = __rdtsc();
        v28 = (*(__int64 (__fastcall **)(bool, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                v27 != 0,
                v18,
                v3);
        if ( v28 == -1073741637 )
        {
          if ( !v27 )
            goto LABEL_33;
          *(_BYTE *)(BugCheckParameter3 + 392) = 0;
          *(_QWORD *)(BugCheckParameter3 + 336) = __rdtsc();
          v28 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                  0LL,
                  v18,
                  v3);
        }
        if ( v28 < 0 || PopSimulateHiberBugcheck == 8 )
        {
LABEL_33:
          PopCheckpointSystemSleep(29);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, v28);
        }
        v29 = __rdtsc();
        qword_1403AA650 += (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29)
                         - *(_QWORD *)(BugCheckParameter3 + 336);
        v30 = *(_QWORD *)(BugCheckParameter3 + 400);
        *(_QWORD *)(BugCheckParameter3 + 352) = v21;
        if ( v21 < v30 )
          v30 = v21;
        *(_QWORD *)(BugCheckParameter3 + 360) = v30;
        if ( v27 && v28 )
        {
          v6 = a2;
          *(_DWORD *)(BugCheckParameter3 + 328) = 1;
          v8 = 1;
          continue;
        }
      }
      v6 = a2;
      v8 = 2;
      *(_DWORD *)(BugCheckParameter3 + 328) = 2;
    }
    while ( *(_QWORD *)(BugCheckParameter3 + 400) );
  }
}
