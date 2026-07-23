/*
 * XREFs of sub_1800C9AFC @ 0x1800C9AFC
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 *     sub_1800C9D70 @ 0x1800C9D70 (sub_1800C9D70.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18006B51C @ 0x18006B51C (sub_18006B51C.c)
 */

int __fastcall sub_1800C9AFC(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  char *v3; // r14
  char *v5; // rbx
  _QWORD *v6; // rsi
  char *v7; // rdi
  void *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  char **v11; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = (char *)(a1 + 88);
  v5 = *(char **)(a1 + 88);
  while ( v5 != v3 )
  {
    v6 = (_QWORD *)*((_QWORD *)v5 + 22);
    v7 = v5;
    v5 = *(char **)v5;
    if ( v6 )
    {
      v8 = (void *)v6[11];
      if ( v8 )
      {
        RtlFreeHeap(HeapHandle, 0, v8);
        v6[11] = 0LL;
      }
      LODWORD(v2) = sub_18006B51C(v6);
    }
    if ( a2 < 0 )
    {
      v9 = *(_QWORD *)v7;
      v10 = *((_QWORD *)v7 + 19);
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v11 = (char **)*((_QWORD *)v7 + 1), *v11 != v7) )
        __fastfail(3u);
      *v11 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v10 + 24) = 0;
      *((_DWORD *)v7 + 69) = 1;
      *(_DWORD *)(v10 + 56) = -2;
      LODWORD(v2) = sub_18001F5FC(v7);
    }
  }
  return (int)v2;
}
