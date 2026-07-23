/*
 * XREFs of sub_1800F38C8 @ 0x1800F38C8
 * Callers:
 *     sub_1800F3AF8 @ 0x1800F3AF8 (sub_1800F3AF8.c)
 * Callees:
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3370 @ 0x1800F3370 (sub_1800F3370.c)
 *     sub_1800F33B4 @ 0x1800F33B4 (sub_1800F33B4.c)
 */

char sub_1800F38C8()
{
  __int64 *v0; // rbx
  _QWORD *v1; // rsi
  unsigned __int64 *v2; // rcx
  __int64 *v3; // rbp
  __int64 v4; // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 *i; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 *v10; // rcx
  __int64 j; // rdi
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rbx
  SIZE_T v15; // rax
  _DWORD *v16; // rsi
  char *v17; // r8
  unsigned __int8 *v18; // rbx
  int v19; // eax

  v0 = (__int64 *)qword_180159A40;
  while ( v0 != &qword_180159A40 )
  {
    v1 = v0 + 2;
    v2 = (unsigned __int64 *)v0[2];
    v3 = v0;
    v4 = v0[3];
    v0 = (__int64 *)*v0;
    v5 = (unsigned __int64 *)((char *)v2 + v4);
    for ( i = v2 + 1; i <= v5; ++i )
    {
      v7 = sub_1800F33B4(*v2);
      if ( v7 )
      {
        if ( !*(_DWORD *)(v7 + 32) )
        {
          v8 = *(_QWORD *)v7;
          v9 = *(_QWORD **)(v7 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v9 != v7 )
            __fastfail(3u);
          *v9 = v8;
          *(_QWORD *)(v8 + 8) = v9;
          v10 = (__int64 *)qword_180159A48;
          if ( *(__int64 **)qword_180159A48 != &qword_180159A40 )
            __fastfail(3u);
          *(_QWORD *)v7 = &qword_180159A40;
          *(_QWORD *)(v7 + 8) = v10;
          *v10 = v7;
          qword_180159A48 = v7;
        }
        ++*(_DWORD *)(v7 + 32);
        if ( !*(_QWORD *)(v7 + 16) )
          __debugbreak();
      }
      v2 = i;
      v5 = (unsigned __int64 *)(*v1 + v3[3]);
    }
  }
  for ( j = qword_180159A50; (__int64 *)j != &qword_180159A50; j = *(_QWORD *)j )
  {
    v12 = sub_1800F3370((_QWORD *)qword_180159A30, *(_QWORD *)(j + 16));
    v14 = v12;
    if ( v12 )
    {
      if ( qword_180159B88 )
      {
        v15 = RtlSizeHeap(*(PVOID *)(v12 + 8), 0, *(PVOID *)(j + 16));
        qword_180159B88(0LL, *(_QWORD *)(v14 + 8), *(_QWORD *)(j + 16), v15, 0, 0LL);
      }
      else
      {
        if ( !v13 )
        {
          DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
          DbgPrint("Entry     Heap              Size       \n");
          DbgPrint("---------------------------------------\n");
        }
        v16 = *(_DWORD **)(v14 + 8);
        v17 = *(char **)(j + 16);
        if ( v16[4] == -571548178 )
        {
          v18 = *(unsigned __int8 **)(j + 16);
        }
        else
        {
          v18 = (unsigned __int8 *)(v17 - 16);
          _m_prefetchw(v17 - 16);
          if ( *(v17 - 1) == 5 )
            v18 -= 16 * v18[14];
        }
        v19 = RtlSizeHeap(v16, 0, v17);
        DbgPrint("%p  %-16Ix  %Id", v18, (_DWORD)v16, v19);
        DbgPrint("\n");
      }
      ++dword_18015C750;
    }
  }
  if ( qword_180159B88 )
    qword_180159B88(0LL, 0LL, 0LL, 0LL, 0, 0LL);
  return 1;
}
