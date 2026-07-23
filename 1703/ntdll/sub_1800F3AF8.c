/*
 * XREFs of sub_1800F3AF8 @ 0x1800F3AF8
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180070460 (RtlDetectHeapLeaks.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     sub_1800F33B4 @ 0x1800F33B4 (sub_1800F33B4.c)
 *     sub_1800F3440 @ 0x1800F3440 (sub_1800F3440.c)
 *     sub_1800F38C8 @ 0x1800F38C8 (sub_1800F38C8.c)
 */

char sub_1800F3AF8()
{
  char *v0; // rbx
  NTSTATUS VirtualMemory; // esi
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // r15
  unsigned __int64 i; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 *v8; // rcx
  _BYTE MemoryInformation[24]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-50h]
  int v12; // [rsp+50h] [rbp-48h]
  int v13; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v0,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory >= 0 )
    {
      if ( (MemoryInformation[16] & 0xCC) != 0
        && (v12 & 0x1000) != 0
        && (v13 & 0x100) == 0
        && !sub_1800F3440((_QWORD *)qword_180159A30, (unsigned __int64)v0) )
      {
        v2 = (unsigned __int64 *)v0;
        v3 = v11 >> 3;
        for ( i = 0LL; i < v3; ++i )
        {
          v5 = sub_1800F33B4(*v2);
          if ( v5 )
          {
            if ( !*(_QWORD *)(v5 + 16) )
              __debugbreak();
            if ( !*(_DWORD *)(v5 + 32) )
            {
              v6 = *(_QWORD *)v5;
              v7 = *(_QWORD **)(v5 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
                __fastfail(3u);
              *v7 = v6;
              *(_QWORD *)(v6 + 8) = v7;
              v8 = (__int64 *)qword_180159A48;
              if ( *(__int64 **)qword_180159A48 != &qword_180159A40 )
                __fastfail(3u);
              *(_QWORD *)v5 = &qword_180159A40;
              *(_QWORD *)(v5 + 8) = v8;
              *v8 = v5;
              qword_180159A48 = v5;
            }
            ++*(_DWORD *)(v5 + 32);
          }
          ++v2;
        }
      }
      v0 += v11;
    }
  }
  sub_1800F38C8();
  return 1;
}
