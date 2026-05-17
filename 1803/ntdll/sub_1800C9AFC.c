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

_UNKNOWN **__fastcall sub_1800C9AFC(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // r14
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 88);
  v5 = *(_QWORD **)(a1 + 88);
  while ( v5 != v3 )
  {
    v6 = v5[22];
    v7 = (unsigned __int64)v5;
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 88);
      if ( v8 )
      {
        RtlFreeHeap(qword_18015C288, 0, v8);
        *(_QWORD *)(v6 + 88) = 0LL;
      }
      result = (_UNKNOWN **)sub_18006B51C(v6);
    }
    if ( a2 < 0 )
    {
      v9 = *(_QWORD *)v7;
      v10 = *(_QWORD *)(v7 + 152);
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v11 = *(_QWORD **)(v7 + 8), *v11 != v7) )
        __fastfail(3u);
      *v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v10 + 24) = 0;
      *(_DWORD *)(v7 + 276) = 1;
      *(_DWORD *)(v10 + 56) = -2;
      result = (_UNKNOWN **)sub_18001F5FC(v7);
    }
  }
  return result;
}
