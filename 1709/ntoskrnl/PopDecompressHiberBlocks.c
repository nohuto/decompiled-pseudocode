/*
 * XREFs of PopDecompressHiberBlocks @ 0x140432B24
 * Callers:
 *     PopRestoreHiberContext @ 0x140434AE0 (PopRestoreHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x140259674 (RtlDecompressBufferProgress.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140432074 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x14043356C (PopHiberCheckForDebugBreak.c)
 *     PopReadProducerConsumerBuffer @ 0x140434008 (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1404363B8 (ProducerConsumerBufferComplete.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x140436488 (ProducerConsumerCopyFromContextBuffer.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     BgDisplayProgressIndicator @ 0x1407CE034 (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(
        _DWORD *BugCheckParameter3,
        _QWORD *a2,
        char a3,
        char a4,
        void (__fastcall *a5)(_DWORD *))
{
  unsigned int v5; // esi
  void *v6; // r12
  __int64 v10; // r9
  __int64 Number; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned int v16; // edi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // r9
  _DWORD *v21; // rdi
  _QWORD *v22; // r8
  unsigned __int64 v23; // r12
  __int64 v24; // r10
  unsigned __int64 v25; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  _DWORD *v34; // rdi
  unsigned __int64 v35; // r13
  int v36; // ecx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  _BOOL8 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned int v44; // [rsp+54h] [rbp-ACh] BYREF
  int v45; // [rsp+58h] [rbp-A8h] BYREF
  char *v46; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+68h] [rbp-98h]
  void (__fastcall *v48)(_DWORD *); // [rsp+70h] [rbp-90h]
  _DWORD *ProducerConsumerBuffer; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  char v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v54; // [rsp+A8h] [rbp-58h]
  __int16 v55; // [rsp+AAh] [rbp-56h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+CCh] [rbp-34h]
  char v60; // [rsp+D0h] [rbp-30h] BYREF
  char v61; // [rsp+150h] [rbp+50h] BYREF

  v5 = 0;
  v6 = qword_140365B98;
  v48 = a5;
  v50 = 0LL;
  v46 = (char *)qword_140365B98;
  v45 = 0;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140365DD8 && BugCheckParameter3[48] == KeGetCurrentPrcb()->Number && byte_140365B40 )
      qword_140365DD8 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( BugCheckParameter3[48] == (_DWORD)Number
      && !byte_140365B41
      && (!byte_140365B40 || (unsigned int)dword_140365B24 > 0x640) )
    {
      v12 = __rdtsc();
      if ( byte_1403A33E0 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140389F21 = 1;
      }
      v13 = __rdtsc();
      qword_140365DC0 += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v12;
    }
    v44 = 4;
    v14 = ConsumerPeekAndConsumeBuffer((__int64)v6, &v44, a3, v10, (__int64)a2);
    v15 = v14;
    if ( !v14 )
      break;
    ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(
                                         v14,
                                         4,
                                         (unsigned int)&v51,
                                         (_DWORD)v6,
                                         (__int64)a2,
                                         1);
    v16 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v17 = PopReadProducerConsumerBuffer((int)v15 + 4, v16, (unsigned int)&v61, (_DWORD)v6, (__int64)a2, 1);
    v19 = v16;
    v20 = &v60;
    v21 = ProducerConsumerBuffer;
    v22 = (_QWORD *)v17;
    v47 = v15 + v19 + 4;
    v23 = 0LL;
    if ( (unsigned __int8)*ProducerConsumerBuffer )
    {
      v24 = (unsigned __int8)*ProducerConsumerBuffer;
      do
      {
        v25 = *v22 >> 4;
        v18 = v25 + (*v22 & 0xFLL) + 1;
        v23 += (*v22 & 0xFLL) + 1;
        while ( v25 < v18 )
        {
          *(_QWORD *)v20 = v25++;
          v20 += 8;
        }
        ++v22;
        --v24;
      }
      while ( v24 );
    }
    if ( v23 > (unsigned int)BugCheckParameter3[73] )
    {
      PopCheckpointSystemSleep(31LL, v18, v22, v20);
      PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1D0u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v26 = (unsigned int)((_DWORD)v23 << 12);
    v52 = (unsigned int)v26;
    v58 = v26;
    v27 = a2[1];
    v53 = 0LL;
    v54 = 8 * (((unsigned __int64)(v26 + 4095) >> 12) + 6);
    v55 = 0;
    v57 = 0LL;
    v59 = 0;
    MmMapMemoryDumpMdlEx(v27, v18, (__int64)&v53, 1);
    v28 = (*v21 >> 8) & 0x3FFFFF;
    v29 = __rdtsc();
    if ( v28 == (_DWORD)v26 )
    {
      ProducerConsumerCopyFromContextBuffer(v56, (unsigned int)v26, v46, v47);
      a2[9] += __rdtsc() - v29;
      v6 = v46;
      v30 = __rdtsc();
      ProducerConsumerBufferComplete(v46, v46 + 48, v15, v44);
      v31 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v30;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(a2[3], v28, v46, v47);
      v32 = v44;
      v47 = __rdtsc();
      a2[9] += v47 - v29;
      ProducerConsumerBufferComplete(v46, v46 + 48, v15, v32);
      v33 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v47;
      if ( v48 )
      {
        v48(BugCheckParameter3);
        v50 = qword_140365DB0;
      }
      v34 = ProducerConsumerBuffer;
      v35 = __rdtsc();
      v36 = RtlDecompressBufferProgress(
              PopCompressMethodMap[(unsigned __int64)(unsigned int)*ProducerConsumerBuffer >> 30],
              v56,
              v26,
              a2[3],
              (*ProducerConsumerBuffer >> 8) & 0x3FFFFF,
              (__int64)&v45,
              a2[2],
              (__int64)v48,
              (__int64)BugCheckParameter3);
      v39 = __rdtsc();
      if ( v36 < 0 || v45 != (_DWORD)v26 )
      {
        BugCheckParameter3[47] = -1073741246;
        PopCheckpointSystemSleep(31LL, v39, v37, v38);
        PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1D0u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      a2[8] += v39 - v35;
      if ( v48 )
        a2[8] = v50 + a2[8] - qword_140365DB0;
      v6 = v46;
      v40 = (*v34 & 0xC0000000) >= 0x80000000;
      v41 = v39 - v47;
      a2[v40 + 13] += v52;
      a2[v40 + 11] += v41;
    }
    if ( !a4 )
      return v5;
  }
  return (unsigned int)-2147483614;
}
