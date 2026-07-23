/*
 * XREFs of sub_1800F09BC @ 0x1800F09BC
 * Callers:
 *     sub_1800F0C00 @ 0x1800F0C00 (sub_1800F0C00.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800F044C @ 0x1800F044C (sub_1800F044C.c)
 *     sub_1800F0490 @ 0x1800F0490 (sub_1800F0490.c)
 */

char sub_1800F09BC()
{
  __int64 *v0; // rbx
  _QWORD *v1; // r14
  unsigned __int64 *v2; // rcx
  __int64 *v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 *v11; // rax
  bool v12; // zf
  __int64 i; // rdi
  __int64 v14; // rax
  int v15; // r9d
  char *v16; // r10
  __int64 v17; // rbx
  SIZE_T v18; // rax
  _DWORD *v19; // rsi
  unsigned __int8 *v20; // rbx
  int v21; // eax

  v0 = (__int64 *)qword_18015AA80;
  while ( v0 != &qword_18015AA80 )
  {
    v1 = v0 + 2;
    v2 = (unsigned __int64 *)v0[2];
    v3 = v0;
    v4 = v0[3];
    v0 = (__int64 *)*v0;
    v5 = v2 + 1;
    if ( v2 + 1 <= (unsigned __int64 *)((char *)v2 + v4) )
    {
      do
      {
        v6 = sub_1800F0490(*v2);
        v7 = v6;
        if ( v6 )
        {
          v8 = *(_DWORD *)(v6 + 32);
          if ( !v8 )
          {
            v9 = *(_QWORD *)v7;
            if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v10 = *(_QWORD **)(v7 + 8), *v10 != v7) )
              __fastfail(3u);
            *v10 = v9;
            *(_QWORD *)(v9 + 8) = v10;
            v11 = (__int64 *)qword_18015AA88;
            if ( *(__int64 **)qword_18015AA88 != &qword_18015AA80 )
              __fastfail(3u);
            *(_QWORD *)v7 = &qword_18015AA80;
            *(_QWORD *)(v7 + 8) = v11;
            *v11 = v7;
            qword_18015AA88 = v7;
            v8 = *(_DWORD *)(v7 + 32);
          }
          v12 = *(_QWORD *)(v7 + 16) == 0LL;
          *(_DWORD *)(v7 + 32) = v8 + 1;
          if ( v12 )
            __debugbreak();
        }
        v2 = v5++;
      }
      while ( (unsigned __int64)v5 <= *v1 + v3[3] );
    }
  }
  for ( i = qword_18015AA90; (__int64 *)i != &qword_18015AA90; i = *(_QWORD *)i )
  {
    v14 = sub_1800F044C((_QWORD *)qword_18015AA78, *(_QWORD *)(i + 16));
    v17 = v14;
    if ( v14 )
    {
      if ( qword_18015ABC8 )
      {
        v18 = RtlSizeHeap(*(PVOID *)(v14 + 8), 0, v16);
        qword_18015ABC8(0LL, *(_QWORD *)(v17 + 8), *(_QWORD *)(i + 16), v18, 0, 0LL);
      }
      else
      {
        if ( !v15 )
        {
          DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
          DbgPrint("Entry     Heap              Size       \n");
          DbgPrint("---------------------------------------\n");
          v16 = *(char **)(i + 16);
        }
        v19 = *(_DWORD **)(v17 + 8);
        if ( v19[4] == -571548178 )
        {
          v20 = (unsigned __int8 *)v16;
        }
        else
        {
          v20 = (unsigned __int8 *)(v16 - 16);
          _m_prefetchw(v16 - 16);
          if ( *(v16 - 1) == 5 )
            v20 -= 16 * v20[14];
        }
        v21 = RtlSizeHeap(v19, 0, v16);
        DbgPrint("%p  %-16Ix  %Id", v20, (_DWORD)v19, v21);
        DbgPrint("\n");
      }
      ++dword_18015D780;
    }
  }
  if ( qword_18015ABC8 )
    qword_18015ABC8(0LL, 0LL, 0LL, 0LL, 0, 0LL);
  return 1;
}
