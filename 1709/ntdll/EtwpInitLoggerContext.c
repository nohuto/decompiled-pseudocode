/*
 * XREFs of EtwpInitLoggerContext @ 0x180065218
 * Callers:
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     RtlQueryPerformanceCounter @ 0x180019360 (RtlQueryPerformanceCounter.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlCreateUnicodeString @ 0x18004EE70 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     EtwpFreeStreamIndexMap @ 0x1800610A8 (EtwpFreeStreamIndexMap.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180065624 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x180067974 (EtwpFillProcessorStreamIndexMap.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A09C0 (ZwCreateEvent.c)
 */

__int64 __fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 v9; // r14
  unsigned __int64 v10; // rax
  __int64 Heap; // rbx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  __int64 result; // rax
  void *v17; // rax
  unsigned __int16 v18; // r8
  unsigned int i; // ecx
  __int64 v20; // rax
  __int128 v21; // xmm0
  void *v22; // rcx
  void *v23; // rcx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-30h]
  __int128 v27; // [rsp+30h] [rbp-20h]
  __int128 v28; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp+30h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v18 = 0;
    v9 = 0;
    for ( i = 0; i < a5; i += (*(unsigned __int16 *)(i + a4 + 4) + 7) & 0xFFFFFFF8 )
    {
      ++v9;
      v18 += *(_WORD *)(i + a4 + 44);
    }
    a3 = v18;
  }
  *(_QWORD *)&v27 = MEMORY[0x7FFE0014];
  if ( *(_DWORD *)(a1 + 40) == 2 )
  {
    v10 = MEMORY[0x7FFE0014];
  }
  else if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v10 = __rdtsc();
  }
  else
  {
    v29 = 0LL;
    RtlQueryPerformanceCounter(&v29, 0LL);
    v10 = v29;
  }
  *((_QWORD *)&v27 + 1) = v10;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 568);
  if ( !Heap )
    return 0LL;
  v12 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *(_QWORD *)(Heap + 536) = v12;
  if ( v12 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap, v9, a4, a5) )
        goto LABEL_43;
      v20 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 12 * (unsigned int)v9);
      *(_QWORD *)(Heap + 512) = v20;
      if ( !v20 )
        goto LABEL_43;
    }
    else
    {
      v13 = 0;
      if ( a3 )
      {
        v14 = 0LL;
        do
        {
          *(_WORD *)(v14 + *(_QWORD *)(Heap + 536)) = 0;
          v14 += 4LL;
          *(_WORD *)(v14 + *(_QWORD *)(Heap + 536) - 2) = v13++;
        }
        while ( v13 < a3 );
      }
    }
    if ( *(_DWORD *)(a1 + 48) )
    {
      if ( *(_DWORD *)(a1 + 48) > 0x4000u )
        *(_DWORD *)(a1 + 48) = 0x4000;
      *(_DWORD *)(Heap + 208) = *(_DWORD *)(a1 + 48) << 10;
    }
    else
    {
      *(_DWORD *)(Heap + 208) = 4096;
    }
    if ( RtlCreateUnicodeString(Heap + 152, *(_WORD **)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v28) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v17 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
          goto LABEL_19;
        v17 = (void *)(Heap + 408);
      }
      *(_QWORD *)(Heap + 400) = v17;
LABEL_19:
      *(_DWORD *)(Heap + 20) = a2;
      *(_DWORD *)(Heap + 204) = a3;
      *(_DWORD *)(Heap + 324) = 2048;
      *(_DWORD *)(Heap + 52) = 0xFFFF;
      *(_DWORD *)(Heap + 48) = -1072889856;
      *(_DWORD *)(Heap + 44) = -1072496640;
      v15 = *(_DWORD *)(a1 + 64);
      if ( (v15 & 0x400) != 0 )
      {
        *(_DWORD *)(Heap + 324) = 3072;
        goto LABEL_23;
      }
      if ( (v15 & 2) != 0 )
      {
        *(_DWORD *)(Heap + 324) = 2050;
      }
      else
      {
        if ( (v15 & 8) != 0 )
        {
          v21 = v28;
          *(_DWORD *)(Heap + 324) = 2056;
          *(_OWORD *)(Heap + 184) = v21;
          goto LABEL_23;
        }
        if ( (v15 & 1) == 0 )
        {
LABEL_23:
          *(_DWORD *)(Heap + 324) |= *(_DWORD *)(a1 + 64) & 0x34133024;
          *(_DWORD *)(Heap + 392) = *(_DWORD *)(a1 + 108);
          *(_DWORD *)(Heap + 228) = *(_DWORD *)(Heap + 224);
          *(_OWORD *)(Heap + 56) = *(_OWORD *)(a1 + 24);
          *(_DWORD *)(Heap + 320) = *(_DWORD *)(a1 + 60);
          *(_DWORD *)(Heap + 216) = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(Heap + 220) = *(_DWORD *)(a1 + 52);
          *(_QWORD *)(Heap + 240) = Heap + 232;
          *(_QWORD *)(Heap + 232) = Heap + 232;
          *(_QWORD *)(Heap + 264) = 0LL;
          *(_QWORD *)(Heap + 248) = Heap + 264;
          *(_QWORD *)(Heap + 256) = Heap + 264;
          *(_QWORD *)(Heap + 288) = 0LL;
          *(_QWORD *)(Heap + 272) = Heap + 288;
          *(_QWORD *)(Heap + 280) = Heap + 288;
          *(_QWORD *)(Heap + 312) = 0LL;
          *(_QWORD *)(Heap + 296) = Heap + 312;
          *(_QWORD *)(Heap + 304) = Heap + 312;
          *(_QWORD *)(Heap + 472) = Heap + 464;
          *(_QWORD *)(Heap + 464) = Heap + 464;
          *(_QWORD *)(Heap + 488) = Heap + 480;
          *(_QWORD *)(Heap + 480) = Heap + 480;
          *(_DWORD *)(Heap + 16) = *(_DWORD *)(a1 + 40);
          *(_DWORD *)(Heap + 72) = *(_DWORD *)(a1 + 96);
          *(_DWORD *)(Heap + 368) = *(_DWORD *)(a1 + 76);
          if ( (int)ZwCreateEvent(Heap + 128, 2031619LL, 0LL, 1LL, 0) >= 0 )
          {
            LOBYTE(v26) = 0;
            if ( (int)ZwCreateEvent(Heap + 136, 2031619LL, 0LL, 1LL, v26) >= 0 )
            {
              RtlInitializeCriticalSectionEx(Heap + 88, 0LL, 0);
              *(_QWORD *)(Heap + 80) = 0LL;
              result = Heap;
              *(_DWORD *)(Heap + 328) = 1;
              *(_OWORD *)Heap = v27;
              return result;
            }
          }
          goto LABEL_43;
        }
        *(_DWORD *)(Heap + 324) = 2049;
      }
      *(_OWORD *)(Heap + 168) = v28;
      goto LABEL_23;
    }
  }
LABEL_43:
  v22 = *(void **)(Heap + 136);
  if ( v22 )
  {
    NtClose(v22);
    *(_QWORD *)(Heap + 136) = 0LL;
  }
  v23 = *(void **)(Heap + 128);
  if ( v23 )
  {
    NtClose(v23);
    *(_QWORD *)(Heap + 128) = 0LL;
  }
  v24 = *(_QWORD *)(Heap + 512);
  if ( v24 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v24);
  v25 = *(_QWORD *)(Heap + 536);
  if ( v25 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v25);
  EtwpFreeStreamIndexMap(Heap);
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 184));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
