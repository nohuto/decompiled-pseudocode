/*
 * XREFs of sub_18005395C @ 0x18005395C
 * Callers:
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     sub_180004738 @ 0x180004738 (sub_180004738.c)
 *     sub_1800078C4 @ 0x1800078C4 (sub_1800078C4.c)
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     sub_180053D68 @ 0x180053D68 (sub_180053D68.c)
 *     RtlQueryPerformanceCounter @ 0x18005F480 (RtlQueryPerformanceCounter.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 */

char *__fastcall sub_18005395C(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 v9; // r14
  LARGE_INTEGER v10; // rax
  char *Heap; // rbx
  PVOID v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  char *result; // rax
  void *v17; // rax
  unsigned __int16 v18; // r8
  unsigned int i; // ecx
  PVOID v20; // rax
  __int128 v21; // xmm0
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // r8
  void *v25; // r8
  __int128 v26; // [rsp+30h] [rbp-20h]
  __int128 v27; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp+30h] BYREF

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
  *(_QWORD *)&v26 = MEMORY[0x7FFE0014];
  if ( *(_DWORD *)(a1 + 40) == 2 )
  {
    v10.QuadPart = MEMORY[0x7FFE0014];
  }
  else if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v10.QuadPart = __rdtsc();
  }
  else
  {
    PerformanceCounter.QuadPart = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    v10 = PerformanceCounter;
  }
  *((LARGE_INTEGER *)&v26 + 1) = v10;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 552);
  if ( !Heap )
    return 0LL;
  v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *((_QWORD *)Heap + 65) = v12;
  if ( v12 )
  {
    if ( a4 )
    {
      if ( (unsigned int)sub_180004738((__int64)Heap, v9, a4, a5) )
        goto LABEL_43;
      v20 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 12LL * v9);
      *((_QWORD *)Heap + 64) = v20;
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
          *(_WORD *)(v14 + *((_QWORD *)Heap + 65)) = 0;
          v14 += 4LL;
          *(_WORD *)(v14 + *((_QWORD *)Heap + 65) - 2) = v13++;
        }
        while ( v13 < a3 );
      }
    }
    if ( *(_DWORD *)(a1 + 48) )
    {
      if ( *(_DWORD *)(a1 + 48) > 0x4000u )
        *(_DWORD *)(a1 + 48) = 0x4000;
      *((_DWORD *)Heap + 52) = *(_DWORD *)(a1 + 48) << 10;
    }
    else
    {
      *((_DWORD *)Heap + 52) = 4096;
    }
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(Heap + 152), *(PCWSTR *)(a1 + 152))
      && !(unsigned int)sub_180053D68(a1, *(unsigned int *)(a1 + 96), &v27) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v17 = &unk_1801593C8;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
          goto LABEL_18;
        v17 = Heap + 408;
      }
      *((_QWORD *)Heap + 50) = v17;
LABEL_18:
      *((_DWORD *)Heap + 5) = a2;
      *((_DWORD *)Heap + 51) = a3;
      *((_DWORD *)Heap + 81) = 2048;
      *((_DWORD *)Heap + 13) = 0xFFFF;
      *((_DWORD *)Heap + 12) = -1072889856;
      *((_DWORD *)Heap + 11) = -1072496640;
      v15 = *(_DWORD *)(a1 + 64);
      if ( (v15 & 0x400) != 0 )
      {
        *((_DWORD *)Heap + 81) = 3072;
        goto LABEL_22;
      }
      if ( (v15 & 2) != 0 )
      {
        *((_DWORD *)Heap + 81) = 2050;
      }
      else
      {
        if ( (v15 & 8) != 0 )
        {
          v21 = v27;
          *((_DWORD *)Heap + 81) = 2056;
          *(_OWORD *)(Heap + 184) = v21;
          goto LABEL_22;
        }
        if ( (v15 & 1) == 0 )
        {
LABEL_22:
          *((_DWORD *)Heap + 81) |= *(_DWORD *)(a1 + 64) & 0x34133024;
          *((_DWORD *)Heap + 98) = *(_DWORD *)(a1 + 108);
          *((_DWORD *)Heap + 57) = *((_DWORD *)Heap + 56);
          *(_OWORD *)(Heap + 56) = *(_OWORD *)(a1 + 24);
          *((_DWORD *)Heap + 80) = *(_DWORD *)(a1 + 60);
          *((_DWORD *)Heap + 54) = *(_DWORD *)(a1 + 56);
          *((_DWORD *)Heap + 55) = *(_DWORD *)(a1 + 52);
          *((_QWORD *)Heap + 30) = Heap + 232;
          *((_QWORD *)Heap + 29) = Heap + 232;
          *((_QWORD *)Heap + 33) = 0LL;
          *((_QWORD *)Heap + 31) = Heap + 264;
          *((_QWORD *)Heap + 32) = Heap + 264;
          *((_QWORD *)Heap + 36) = 0LL;
          *((_QWORD *)Heap + 34) = Heap + 288;
          *((_QWORD *)Heap + 35) = Heap + 288;
          *((_QWORD *)Heap + 39) = 0LL;
          *((_QWORD *)Heap + 37) = Heap + 312;
          *((_QWORD *)Heap + 38) = Heap + 312;
          *((_QWORD *)Heap + 59) = Heap + 464;
          *((_QWORD *)Heap + 58) = Heap + 464;
          *((_QWORD *)Heap + 61) = Heap + 480;
          *((_QWORD *)Heap + 60) = Heap + 480;
          *((_DWORD *)Heap + 4) = *(_DWORD *)(a1 + 40);
          *((_DWORD *)Heap + 18) = *(_DWORD *)(a1 + 96);
          *((_DWORD *)Heap + 92) = *(_DWORD *)(a1 + 76);
          if ( ZwCreateEvent((PHANDLE)Heap + 16, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0
            && ZwCreateEvent((PHANDLE)Heap + 17, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
          {
            RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(Heap + 88), 0, 0);
            *((_QWORD *)Heap + 10) = 0LL;
            result = Heap;
            *((_DWORD *)Heap + 82) = 1;
            *(_OWORD *)Heap = v26;
            return result;
          }
          goto LABEL_43;
        }
        *((_DWORD *)Heap + 81) = 2049;
      }
      *(_OWORD *)(Heap + 168) = v27;
      goto LABEL_22;
    }
  }
LABEL_43:
  v22 = (void *)*((_QWORD *)Heap + 17);
  if ( v22 )
  {
    ZwClose(v22);
    *((_QWORD *)Heap + 17) = 0LL;
  }
  v23 = (void *)*((_QWORD *)Heap + 16);
  if ( v23 )
  {
    ZwClose(v23);
    *((_QWORD *)Heap + 16) = 0LL;
  }
  v24 = (void *)*((_QWORD *)Heap + 64);
  if ( v24 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
  v25 = (void *)*((_QWORD *)Heap + 65);
  if ( v25 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
  sub_1800078C4((__int64)Heap);
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 152));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 168));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 184));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
