/*
 * XREFs of sub_1800F0C00 @ 0x1800F0C00
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180048460 (RtlDetectHeapLeaks.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     sub_1800F0490 @ 0x1800F0490 (sub_1800F0490.c)
 *     sub_1800F0528 @ 0x1800F0528 (sub_1800F0528.c)
 *     sub_1800F09BC @ 0x1800F09BC (sub_1800F09BC.c)
 */

char sub_1800F0C00()
{
  unsigned __int64 v0; // rbx
  int VirtualMemory; // esi
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 i; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 *v10; // rax
  char v12; // [rsp+40h] [rbp-58h]
  unsigned __int64 v13; // [rsp+48h] [rbp-50h]
  __int16 v14; // [rsp+50h] [rbp-48h]
  __int16 v15; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory >= 0 )
    {
      if ( (v12 & 0xCC) != 0
        && (v14 & 0x1000) != 0
        && (v15 & 0x100) == 0
        && !sub_1800F0528((_QWORD *)qword_18015AA78, v0) )
      {
        v2 = (unsigned __int64 *)v0;
        v3 = 0LL;
        for ( i = 0LL; i < v13 >> 3; i = v3 )
        {
          v5 = sub_1800F0490(*v2);
          v6 = v5;
          if ( v5 )
          {
            if ( !*(_QWORD *)(v5 + 16) )
              __debugbreak();
            v7 = *(_DWORD *)(v5 + 32);
            if ( !v7 )
            {
              v8 = *(_QWORD *)v6;
              v9 = *(_QWORD **)(v6 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || *v9 != v6 )
                __fastfail(3u);
              *v9 = v8;
              *(_QWORD *)(v8 + 8) = v9;
              v10 = (__int64 *)qword_18015AA88;
              if ( *(__int64 **)qword_18015AA88 != &qword_18015AA80 )
                __fastfail(3u);
              *(_QWORD *)v6 = &qword_18015AA80;
              *(_QWORD *)(v6 + 8) = v10;
              *v10 = v6;
              qword_18015AA88 = v6;
              v7 = *(_DWORD *)(v6 + 32);
            }
            *(_DWORD *)(v6 + 32) = v7 + 1;
          }
          ++v2;
          ++v3;
        }
      }
      v0 += v13;
    }
  }
  sub_1800F09BC();
  return 1;
}
