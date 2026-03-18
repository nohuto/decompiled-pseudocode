/*
 * XREFs of EtwpAddLogHeader @ 0x14057866C
 * Callers:
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     EtwpPreserveLogger @ 0x140752C2C (EtwpPreserveLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpPrepareHeader @ 0x140532734 (EtwpPrepareHeader.c)
 *     EtwpAddDebugInfoEvents @ 0x140577900 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x140578ADC (EtwpIsWow64Logger.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140578AF4 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpAddBinaryInfoEvents @ 0x14074AE14 (EtwpAddBinaryInfoEvents.c)
 */

unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, unsigned int *a2)
{
  bool v4; // zf
  __int64 v5; // rcx
  __int16 v6; // ax
  __int16 v7; // r15
  unsigned __int64 result; // rax
  unsigned __int16 v9; // r15
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v11; // r12
  unsigned int UsedProcessorCount; // eax
  LARGE_INTEGER v13; // rax
  unsigned int *v14; // r13
  char *v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // xmm0_8
  __int64 v18; // rdx
  unsigned __int64 v19; // xmm0_8
  char *v20; // rdx
  unsigned int v21; // r8d
  char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm1
  int v26; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-28h] BYREF
  char *v28; // [rsp+40h] [rbp-20h]
  __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-10h]

  v26 = 0;
  v4 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
  v6 = 276;
  if ( v4 )
    v6 = 284;
  v7 = v6 + *(_WORD *)(v5 + 168);
  result = *(unsigned int *)(a1 + 4);
  v9 = *(_WORD *)(v5 + 152) + v7;
  if ( result >= (unsigned __int64)v9 + 104 )
  {
    if ( ((int (__fastcall *)(__int64, __int64, __int64 *, int *))off_140354F48[0])(25LL, 12LL, &v29, &v26) < 0 )
    {
      v29 = 0LL;
      v30 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    *((_WORD *)a2 + 39) = 0;
    v11 = (_QWORD *)(a1 + 328);
    *((_WORD *)a2 + 38) = v9 + 32;
    a2[18] = -1073610750;
    a2[20] = CurrentThread[1].CurrentRunTime;
    a2[21] = CurrentThread[1].CycleTime;
    a2[24] = CurrentThread->SchedulerApc.SpareLong0;
    a2[25] = CurrentThread->UserTime;
    *((_QWORD *)a2 + 11) = *(_QWORD *)(a1 + 328);
    memset(a2 + 26, 0, v9);
    a2[26] = *(_DWORD *)(a1 + 4);
    *((_WORD *)a2 + 54) = 10;
    a2[28] = 16299;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    a2[29] = UsedProcessorCount;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || UsedProcessorCount > 0x100 )
      *((_WORD *)a2 + 55) = 2;
    else
      *((_WORD *)a2 + 55) = 1281;
    a2[36] = 1;
    a2[34] = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[33] = *(_DWORD *)(a1 + 308);
    a2[32] = KeMaximumIncrement;
    a2[39] = EtwCPUSpeedInMHz;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&EtwPerfFreq, PerformanceFrequency.QuadPart);
    v4 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
    v13 = PerformanceFrequency;
    if ( v4 )
    {
      *((LARGE_INTEGER *)a2 + 45) = PerformanceFrequency;
      v14 = a2 + 44;
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 320);
      *((_QWORD *)a2 + 44) = EtwpBootTime;
      a2[37] = 8;
      a2[94] = *(_DWORD *)(a1 + 216);
      *((_QWORD *)a2 + 20) = HIDWORD(v29);
      *((_QWORD *)a2 + 21) = v30;
      v15 = (char *)(a2 + 96);
    }
    else
    {
      a2[18] = -1073676286;
      v14 = a2 + 42;
      *((LARGE_INTEGER *)a2 + 44) = v13;
      a2[37] = 4;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 320);
      *((_QWORD *)a2 + 43) = EtwpBootTime;
      a2[92] = *(_DWORD *)(a1 + 216);
      a2[40] = HIDWORD(v29);
      a2[41] = v30;
      v15 = (char *)(a2 + 94);
    }
    v28 = &v15[*(unsigned __int16 *)(a1 + 152)];
    RtlpQueryTimeZoneInformationWorker(v14, 0xACuLL);
    v16 = *(_QWORD *)(v14 + 17);
    v17 = _mm_srli_si128(*(__m128i *)(v14 + 17), 8).m128i_u64[0];
    *((_WORD *)v14 + 34) = v16;
    *((_WORD *)v14 + 39) = v17;
    *((_WORD *)v14 + 35) = WORD1(v16);
    *((_WORD *)v14 + 37) = WORD2(v16);
    *((_WORD *)v14 + 36) = HIWORD(v17);
    *((_WORD *)v14 + 40) = WORD1(v17);
    *((_WORD *)v14 + 38) = HIWORD(v16);
    *((_WORD *)v14 + 41) = WORD2(v17);
    v18 = *((_QWORD *)v14 + 19);
    v19 = _mm_srli_si128(*(__m128i *)(v14 + 38), 8).m128i_u64[0];
    *((_WORD *)v14 + 76) = v18;
    *((_WORD *)v14 + 81) = v19;
    *((_WORD *)v14 + 77) = WORD1(v18);
    *((_WORD *)v14 + 79) = WORD2(v18);
    *((_WORD *)v14 + 78) = HIWORD(v19);
    *((_WORD *)v14 + 83) = WORD2(v19);
    *((_WORD *)v14 + 80) = HIWORD(v18);
    *((_WORD *)v14 + 82) = WORD1(v19);
    memmove(v15, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    memmove(v28 + 2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 168) + 2LL);
    a2[2] += (v9 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[2] + 68 <= *a2 )
    {
      v22 = (char *)a2 + a2[2];
      *((_DWORD *)v22 + 1) = 327748;
      *(_DWORD *)v22 = -1073610750;
      *((_DWORD *)v22 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v22 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v22 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v22 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v22 + 2) = *v11;
      v23 = *(_QWORD *)(a1 + 2256);
      v24 = 32LL * *(unsigned __int8 *)(a1 + 834);
      *((_OWORD *)v22 + 2) = *(_OWORD *)(v24 + v23 + 4208);
      v25 = *(_OWORD *)(v24 + v23 + 4224);
      *((_DWORD *)v22 + 16) = 65;
      *((_OWORD *)v22 + 3) = v25;
      a2[2] += 72;
    }
    if ( a2[2] + 80 <= *a2 )
    {
      v20 = (char *)a2 + a2[2];
      *((_DWORD *)v20 + 1) = 5242960;
      *(_DWORD *)v20 = -1073610750;
      *((_DWORD *)v20 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v20 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v20 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v20 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v20 + 2) = *v11;
      *((_DWORD *)v20 + 8) = 0;
      *((_DWORD *)v20 + 9) = *(_DWORD *)(*(_QWORD *)(a1 + 2256) + 4152LL);
      *((_OWORD *)v20 + 3) = *(_OWORD *)(*(_QWORD *)(a1 + 2256) + 4112LL);
      *((_QWORD *)v20 + 5) = *(_QWORD *)(*(_QWORD *)(a1 + 2256) + 4144LL);
      *((_OWORD *)v20 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 2256) + 4128LL);
      a2[2] += 80;
    }
    v21 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v21 )
    {
      if ( *(_QWORD *)(a1 + 112) != a1 + 112 || *(_DWORD *)(a1 + 136) )
        EtwpAddDebugInfoEvents(a1, (__int64)a2, v21, (__int64 *)(a1 + 328), 3);
      if ( *(_QWORD *)(a1 + 2168) != a1 + 2168 )
        EtwpAddBinaryInfoEvents(a1, a2, *a2, 2LL);
    }
    a2[1] = a2[12];
    a2[11] = 3;
    EtwpPrepareHeader(a1, (__int64)a2, 1);
    result = a2[2];
    a2[1] = result;
  }
  return result;
}
