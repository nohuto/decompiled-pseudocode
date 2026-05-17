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
  unsigned __int64 v0; // rbx
  int VirtualMemory; // esi
  unsigned __int64 *v2; // r14
  unsigned __int64 i; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 *v7; // rcx
  char v9; // [rsp+40h] [rbp-58h]
  unsigned __int64 v10; // [rsp+48h] [rbp-50h]
  __int16 v11; // [rsp+50h] [rbp-48h]
  __int16 v12; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory >= 0 )
    {
      if ( (v9 & 0xCC) != 0
        && (v11 & 0x1000) != 0
        && (v12 & 0x100) == 0
        && !sub_1800F3440((_QWORD *)qword_180159A30, v0) )
      {
        v2 = (unsigned __int64 *)v0;
        for ( i = 0LL; i < v10 >> 3; ++i )
        {
          v4 = sub_1800F33B4(*v2);
          if ( v4 )
          {
            if ( !*(_QWORD *)(v4 + 16) )
              __debugbreak();
            if ( !*(_DWORD *)(v4 + 32) )
            {
              v5 = *(_QWORD *)v4;
              v6 = *(_QWORD **)(v4 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
                __fastfail(3u);
              *v6 = v5;
              *(_QWORD *)(v5 + 8) = v6;
              v7 = (__int64 *)qword_180159A48;
              if ( *(__int64 **)qword_180159A48 != &qword_180159A40 )
                __fastfail(3u);
              *(_QWORD *)v4 = &qword_180159A40;
              *(_QWORD *)(v4 + 8) = v7;
              *v7 = v4;
              qword_180159A48 = v4;
            }
            ++*(_DWORD *)(v4 + 32);
          }
          ++v2;
        }
      }
      v0 += v10;
    }
  }
  sub_1800F38C8();
  return 1;
}
