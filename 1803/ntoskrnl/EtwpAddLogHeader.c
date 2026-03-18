/*
 * XREFs of EtwpAddLogHeader @ 0x14058896C
 * Callers:
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 *     EtwpPreserveLogger @ 0x1407B99CC (EtwpPreserveLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1400D4558 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpAddDebugInfoEvents @ 0x140587C2C (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x140588E6C (EtwpIsWow64Logger.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140588E84 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpPrepareHeader @ 0x140591FD8 (EtwpPrepareHeader.c)
 *     EtwpAddBinaryInfoEvents @ 0x1407AD2C4 (EtwpAddBinaryInfoEvents.c)
 */

unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, LARGE_INTEGER *a2)
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
  char v13; // al
  char v14; // cl
  __int64 v15; // rdx
  int v16; // ecx
  LARGE_INTEGER v17; // rax
  __int64 v18; // r13
  char *v19; // r13
  __int64 v20; // rax
  unsigned int *v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // xmm0_8
  __int64 v24; // rdx
  unsigned __int64 v25; // xmm0_8
  void *v26; // rcx
  char *v27; // rdx
  __int64 LowPart; // r8
  char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm1
  __int64 v33; // r13
  int v34; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-28h] BYREF
  void *v36; // [rsp+40h] [rbp-20h]
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-10h]

  v34 = 0;
  v4 = (unsigned __int8)EtwpIsWow64Logger(a1, a2) == 0;
  v6 = 276;
  if ( v4 )
    v6 = 284;
  v7 = v6 + *(_WORD *)(v5 + 168);
  result = *(unsigned int *)(a1 + 4);
  v9 = *(_WORD *)(v5 + 152) + v7;
  if ( result >= (unsigned __int64)v9 + 104 )
  {
    if ( ((int (__fastcall *)(__int64, __int64, __int64 *, int *))off_140397D98[0])(25LL, 12LL, &v37, &v34) < 0 )
    {
      v37 = 0LL;
      v38 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    HIWORD(a2[9].QuadPart) = 0;
    v11 = (_QWORD *)(a1 + 328);
    WORD2(a2[9].QuadPart) = v9 + 32;
    a2[9].LowPart = -1073610750;
    a2[10].LowPart = CurrentThread[1].CurrentRunTime;
    a2[10].HighPart = CurrentThread[1].CycleTime;
    a2[12].LowPart = CurrentThread->SchedulerApc.SpareLong0;
    a2[12].HighPart = CurrentThread->UserTime;
    a2[11] = *(LARGE_INTEGER *)(a1 + 328);
    memset(&a2[13], 0, v9);
    a2[13].LowPart = *(_DWORD *)(a1 + 4);
    WORD2(a2[13].QuadPart) = 10;
    a2[14].LowPart = 17134;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    a2[14].HighPart = UsedProcessorCount;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || UsedProcessorCount > 0x100 )
    {
      v13 = 0;
      v14 = 2;
    }
    else
    {
      v13 = 5;
      v14 = 1;
    }
    BYTE6(a2[13].QuadPart) = v14;
    HIBYTE(a2[13].QuadPart) = v13;
    a2[18].LowPart = 1;
    a2[17].LowPart = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[16].HighPart = *(_DWORD *)(a1 + 308);
    a2[16].LowPart = KeMaximumIncrement;
    a2[19].HighPart = EtwCPUSpeedInMHz;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&EtwPerfFreq, PerformanceFrequency.QuadPart);
    v4 = (unsigned __int8)EtwpIsWow64Logger(a1, v15) == 0;
    v16 = 1;
    v17 = PerformanceFrequency;
    if ( v4 )
    {
      a2[45] = PerformanceFrequency;
      a2[46] = *(LARGE_INTEGER *)(a1 + 320);
      a2[44].QuadPart = EtwpBootTime;
      a2[18].HighPart = 8;
      if ( *(_DWORD *)(a1 + 216) != 4 )
        v16 = *(_DWORD *)(a1 + 216);
      a2[47].LowPart = v16;
      a2[20].QuadPart = HIDWORD(v37);
      a2[21].QuadPart = v38;
      v18 = *(unsigned __int16 *)(a1 + 152);
      v36 = &a2[48];
      v19 = (char *)&a2[48] + v18;
      v20 = 9LL;
    }
    else
    {
      a2[9].LowPart = -1073676286;
      a2[44] = v17;
      a2[18].HighPart = 4;
      a2[45] = *(LARGE_INTEGER *)(a1 + 320);
      a2[43].QuadPart = EtwpBootTime;
      if ( *(_DWORD *)(a1 + 216) != 4 )
        v16 = *(_DWORD *)(a1 + 216);
      a2[46].LowPart = v16;
      a2[20].LowPart = HIDWORD(v37);
      a2[20].HighPart = v38;
      v33 = *(unsigned __int16 *)(a1 + 152);
      v36 = &a2[47];
      v19 = (char *)&a2[47] + v33;
      v20 = 8LL;
    }
    v21 = (unsigned int *)&a2[v20 + 13];
    RtlpQueryTimeZoneInformationWorker(v21, 0xACuLL);
    v22 = *(_QWORD *)(v21 + 17);
    v23 = _mm_srli_si128(*(__m128i *)(v21 + 17), 8).m128i_u64[0];
    *((_WORD *)v21 + 34) = v22;
    *((_WORD *)v21 + 39) = v23;
    *((_WORD *)v21 + 35) = WORD1(v22);
    *((_WORD *)v21 + 37) = WORD2(v22);
    *((_WORD *)v21 + 36) = HIWORD(v23);
    *((_WORD *)v21 + 40) = WORD1(v23);
    *((_WORD *)v21 + 38) = HIWORD(v22);
    *((_WORD *)v21 + 41) = WORD2(v23);
    v24 = *((_QWORD *)v21 + 19);
    v25 = _mm_srli_si128(*(__m128i *)(v21 + 38), 8).m128i_u64[0];
    *((_WORD *)v21 + 76) = v24;
    *((_WORD *)v21 + 81) = v25;
    *((_WORD *)v21 + 77) = WORD1(v24);
    *((_WORD *)v21 + 79) = WORD2(v24);
    *((_WORD *)v21 + 78) = HIWORD(v25);
    *((_WORD *)v21 + 83) = WORD2(v25);
    v26 = v36;
    *((_WORD *)v21 + 80) = HIWORD(v24);
    *((_WORD *)v21 + 82) = WORD1(v25);
    memmove(v26, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    memmove(v19 + 2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 168) + 2LL);
    a2[1].LowPart += (v9 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[1].LowPart + 68 <= a2->LowPart )
    {
      v29 = (char *)a2 + a2[1].LowPart;
      *((_DWORD *)v29 + 1) = 327748;
      *(_DWORD *)v29 = -1073610750;
      *((_DWORD *)v29 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v29 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v29 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v29 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v29 + 2) = *v11;
      v30 = *(_QWORD *)(a1 + 1112);
      v31 = 32 * (*(unsigned __int8 *)(a1 + 834) + 132LL);
      *((_OWORD *)v29 + 2) = *(_OWORD *)(v31 + v30);
      v32 = *(_OWORD *)(v31 + v30 + 16);
      *((_DWORD *)v29 + 16) = 65;
      *((_OWORD *)v29 + 3) = v32;
      a2[1].LowPart += 72;
    }
    if ( a2[1].LowPart + 80 <= a2->LowPart )
    {
      v27 = (char *)a2 + a2[1].LowPart;
      *((_DWORD *)v27 + 1) = 5242960;
      *(_DWORD *)v27 = -1073610750;
      *((_DWORD *)v27 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v27 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v27 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v27 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v27 + 2) = *v11;
      *((_DWORD *)v27 + 8) = 0;
      *((_DWORD *)v27 + 9) = *(_DWORD *)(*(_QWORD *)(a1 + 1112) + 4168LL);
      *((_OWORD *)v27 + 3) = *(_OWORD *)(*(_QWORD *)(a1 + 1112) + 4128LL);
      *((_QWORD *)v27 + 5) = *(_QWORD *)(*(_QWORD *)(a1 + 1112) + 4160LL);
      *((_OWORD *)v27 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 1112) + 4144LL);
      a2[1].LowPart += 80;
    }
    LowPart = a2->LowPart;
    a2[6].LowPart = a2[1].LowPart;
    if ( a2[1].LowPart < (unsigned int)LowPart )
    {
      if ( *(_QWORD *)(a1 + 112) != a1 + 112 || *(_DWORD *)(a1 + 136) )
        EtwpAddDebugInfoEvents(a1, (__int64)a2, LowPart, a1 + 328, 3);
      if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 )
        EtwpAddBinaryInfoEvents(a1, a2, a2->LowPart, 2LL);
    }
    a2->HighPart = a2[6].LowPart;
    a2[5].HighPart = 3;
    EtwpPrepareHeader(a1, a2, 1LL);
    result = a2[1].LowPart;
    a2->HighPart = result;
  }
  return result;
}
