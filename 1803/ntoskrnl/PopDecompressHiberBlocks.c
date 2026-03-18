/*
 * XREFs of PopDecompressHiberBlocks @ 0x140473C3C
 * Callers:
 *     PopRestoreHiberContext @ 0x1404734E4 (PopRestoreHiberContext.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x14014F088 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x14029184C (RtlDecompressBufferProgress.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140473D5C (ConsumerPeekAndConsumeBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x140474C6C (ProducerConsumerBufferComplete.c)
 *     PopHiberCheckForDebugBreak @ 0x140474DD8 (PopHiberCheckForDebugBreak.c)
 *     PopReadProducerConsumerBuffer @ 0x140486494 (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x140486CD8 (ProducerConsumerCopyFromContextBuffer.c)
 *     BgDisplayProgressIndicator @ 0x14083D014 (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(
        _DWORD *BugCheckParameter3,
        __int64 a2,
        int a3,
        char a4,
        void (__fastcall *a5)(_DWORD *))
{
  unsigned int v5; // esi
  char *v6; // r12
  int v10; // r9d
  __int64 Number; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned int v17; // edi
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r8
  char *v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v23; // r10
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  _DWORD *v32; // r13
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  unsigned int v35; // edx
  int v36; // ecx
  unsigned __int64 v37; // rax
  _BOOL8 v38; // rcx
  unsigned __int64 v39; // rdx
  int v40; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+28h] [rbp-D8h]
  unsigned int v43; // [rsp+54h] [rbp-ACh] BYREF
  int v44; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v45; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+68h] [rbp-98h]
  _DWORD *ProducerConsumerBuffer; // [rsp+70h] [rbp-90h]
  void (__fastcall *v48)(_DWORD *); // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v53; // [rsp+A8h] [rbp-58h]
  __int16 v54; // [rsp+AAh] [rbp-56h]
  void *v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  int v57; // [rsp+C8h] [rbp-38h]
  int v58; // [rsp+CCh] [rbp-34h]
  char v59; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v60[128]; // [rsp+150h] [rbp+50h] BYREF

  v5 = 0;
  v6 = (char *)qword_1403AA218;
  v48 = a5;
  v49 = 0LL;
  v44 = 0;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_1403AA678 && BugCheckParameter3[48] == KeGetCurrentPrcb()->Number && byte_1403AA1C0 )
      qword_1403AA678 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( BugCheckParameter3[48] == (_DWORD)Number
      && !byte_1403AA1C1
      && (!byte_1403AA1C0 || (unsigned int)dword_1403AA1A4 > 0x640) )
    {
      v15 = __rdtsc();
      if ( byte_1403CDB50 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_1403CDC2D = 1;
      }
      v16 = __rdtsc();
      qword_1403AA660 += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v15;
    }
    v43 = 4;
    v12 = ConsumerPeekAndConsumeBuffer((_DWORD)v6, (unsigned int)&v43, a3, v10, a2);
    v13 = v12;
    if ( !v12 )
      break;
    LOBYTE(v40) = 1;
    ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(v12, 4LL, v50, v6, a2, v40);
    LOBYTE(v41) = 1;
    v17 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v19 = (_QWORD *)PopReadProducerConsumerBuffer(v13 + 4, v17, v60, v6, a2, v41);
    v20 = &v59;
    v21 = v17 + 4LL;
    v22 = 0LL;
    v45 = v13 + v21;
    if ( (unsigned __int8)*ProducerConsumerBuffer )
    {
      v23 = (unsigned __int8)*ProducerConsumerBuffer;
      do
      {
        v24 = *v19 >> 4;
        v18 = v24 + (*v19 & 0xFLL) + 1;
        v22 += (*v19 & 0xFLL) + 1;
        while ( v24 < v18 )
        {
          *(_QWORD *)v20 = v24++;
          v20 += 8;
        }
        ++v19;
        --v23;
      }
      while ( v23 );
    }
    if ( v22 > (unsigned int)BugCheckParameter3[71] )
    {
      PopCheckpointSystemSleep(31);
      PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v25 = (unsigned int)((_DWORD)v22 << 12);
    v51 = (unsigned int)v25;
    v57 = v25;
    v26 = *(_QWORD *)(a2 + 8);
    v52 = 0LL;
    v53 = 8 * (((unsigned __int64)(v25 + 4095) >> 12) + 6);
    v54 = 0;
    v56 = 0LL;
    v58 = 0;
    MmMapMemoryDumpMdlEx(v26, v18, (__int64)&v52, 1);
    v27 = (*ProducerConsumerBuffer >> 8) & 0x3FFFFF;
    v46 = __rdtsc();
    if ( v27 == (_DWORD)v25 )
    {
      ProducerConsumerCopyFromContextBuffer(v55, (unsigned int)v25);
      *(_QWORD *)(a2 + 72) += __rdtsc() - v46;
      v28 = __rdtsc();
      ProducerConsumerBufferComplete(v6, v6 + 48, v13, v43);
      v29 = __rdtsc();
      *(_QWORD *)(a2 + 80) += (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29) - v28;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(*(void **)(a2 + 24), v27);
      v30 = v43;
      v45 = __rdtsc();
      *(_QWORD *)(a2 + 72) += v45 - v46;
      ProducerConsumerBufferComplete(v6, v6 + 48, v13, v30);
      v31 = __rdtsc();
      *(_QWORD *)(a2 + 80) += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v45;
      if ( v48 )
      {
        v48(BugCheckParameter3);
        v49 = qword_1403AA650;
      }
      v32 = ProducerConsumerBuffer;
      v33 = *(_QWORD *)(a2 + 24);
      v34 = (unsigned int)*ProducerConsumerBuffer;
      v35 = *ProducerConsumerBuffer;
      v46 = __rdtsc();
      v36 = RtlDecompressBufferProgress(
              PopCompressMethodMap[v34 >> 30],
              (int)v55,
              v25,
              v33,
              (v35 >> 8) & 0x3FFFFF,
              (__int64)&v44,
              *(_QWORD *)(a2 + 16),
              (__int64)v48,
              (__int64)BugCheckParameter3);
      v37 = __rdtsc();
      if ( v36 < 0 || v44 != (_DWORD)v25 )
      {
        BugCheckParameter3[47] = -1073741246;
        PopCheckpointSystemSleep(31);
        PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      *(_QWORD *)(a2 + 64) += v37 - v46;
      if ( v48 )
        *(_QWORD *)(a2 + 64) = v49 + *(_QWORD *)(a2 + 64) - qword_1403AA650;
      v38 = (*v32 & 0xC0000000) >= 0x80000000;
      v39 = v37 - v45;
      *(_QWORD *)(a2 + 8 * v38 + 104) += v51;
      *(_QWORD *)(a2 + 8 * v38 + 88) += v39;
    }
    if ( !a4 )
      return v5;
  }
  return (unsigned int)-2147483614;
}
