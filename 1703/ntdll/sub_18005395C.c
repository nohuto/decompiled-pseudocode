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

__int64 __fastcall sub_18005395C(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 v9; // r14
  unsigned __int64 v10; // rax
  __int64 Heap; // rbx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 result; // rax
  void *v18; // rax
  unsigned __int16 v19; // r8
  unsigned int i; // ecx
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-30h]
  __int128 v28; // [rsp+30h] [rbp-20h]
  __int128 v29; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp+30h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v19 = 0;
    v9 = 0;
    for ( i = 0; i < a5; i += (*(unsigned __int16 *)(i + a4 + 4) + 7) & 0xFFFFFFF8 )
    {
      ++v9;
      v19 += *(_WORD *)(i + a4 + 44);
    }
    a3 = v19;
  }
  *(_QWORD *)&v28 = MEMORY[0x7FFE0014];
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
    v30 = 0LL;
    RtlQueryPerformanceCounter(&v30);
    v10 = v30;
  }
  *((_QWORD *)&v28 + 1) = v10;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 552);
  if ( !Heap )
    return 0LL;
  v12 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *(_QWORD *)(Heap + 520) = v12;
  if ( v12 )
  {
    if ( a4 )
    {
      if ( (unsigned int)sub_180004738(Heap, v9, a4, a5) )
        goto LABEL_43;
      v21 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 12LL * v9);
      *(_QWORD *)(Heap + 512) = v21;
      if ( !v21 )
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
          *(_WORD *)(v14 + *(_QWORD *)(Heap + 520)) = 0;
          v14 += 4LL;
          *(_WORD *)(v14 + *(_QWORD *)(Heap + 520) - 2) = v13++;
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
      && !(unsigned int)sub_180053D68(a1, *(unsigned int *)(a1 + 96), &v29) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v18 = &unk_1801593C8;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
          goto LABEL_18;
        v18 = (void *)(Heap + 408);
      }
      *(_QWORD *)(Heap + 400) = v18;
LABEL_18:
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
        goto LABEL_22;
      }
      if ( (v15 & 2) != 0 )
      {
        *(_DWORD *)(Heap + 324) = 2050;
      }
      else
      {
        if ( (v15 & 8) != 0 )
        {
          v22 = v29;
          *(_DWORD *)(Heap + 324) = 2056;
          *(_OWORD *)(Heap + 184) = v22;
          goto LABEL_22;
        }
        if ( (v15 & 1) == 0 )
        {
LABEL_22:
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
            LOBYTE(v27) = 0;
            if ( (int)ZwCreateEvent(Heap + 136, 2031619LL, 0LL, 1LL, v27) >= 0 )
            {
              RtlInitializeCriticalSectionEx(Heap + 88, 0LL, 0LL, v16);
              *(_QWORD *)(Heap + 80) = 0LL;
              result = Heap;
              *(_DWORD *)(Heap + 328) = 1;
              *(_OWORD *)Heap = v28;
              return result;
            }
          }
          goto LABEL_43;
        }
        *(_DWORD *)(Heap + 324) = 2049;
      }
      *(_OWORD *)(Heap + 168) = v29;
      goto LABEL_22;
    }
  }
LABEL_43:
  v23 = *(_QWORD *)(Heap + 136);
  if ( v23 )
  {
    ZwClose(v23);
    *(_QWORD *)(Heap + 136) = 0LL;
  }
  v24 = *(_QWORD *)(Heap + 128);
  if ( v24 )
  {
    ZwClose(v24);
    *(_QWORD *)(Heap + 128) = 0LL;
  }
  v25 = *(_QWORD *)(Heap + 512);
  if ( v25 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v25);
  v26 = *(_QWORD *)(Heap + 520);
  if ( v26 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v26);
  sub_1800078C4(Heap);
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 152));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 168));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 184));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
