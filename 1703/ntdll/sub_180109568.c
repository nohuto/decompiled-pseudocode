/*
 * XREFs of sub_180109568 @ 0x180109568
 * Callers:
 *     sub_180109804 @ 0x180109804 (sub_180109804.c)
 * Callees:
 *     sub_18000199C @ 0x18000199C (sub_18000199C.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180109740 @ 0x180109740 (sub_180109740.c)
 *     sub_18010E3D0 @ 0x18010E3D0 (sub_18010E3D0.c)
 */

__int64 __fastcall sub_180109568(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // r12d
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  void *v18; // r8
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  v6 = 0;
  v7 = sub_18010E3D0(&BaseAddress);
  v8 = BaseAddress;
  if ( v7 && (unsigned int)sub_180109740(a2, BaseAddress) )
  {
    while ( v8 )
    {
      v9 = v8[1];
      if ( !v9 || !*(_DWORD *)v8 )
        break;
      v10 = (unsigned int)(*(_DWORD *)v8 - 1);
      *(_DWORD *)v8 = v10;
      v11 = *(int *)(v9 + 4 * v10);
      if ( (int)v11 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 72LL) )
        goto LABEL_23;
      if ( (int)v11 < 0 )
        goto LABEL_23;
      if ( *(_BYTE *)(v11 + a3) == 1 )
        goto LABEL_23;
      *(_BYTE *)(v11 + a3) = 1;
      v12 = *(_QWORD *)(a1 + 48);
      v13 = 48 * v11;
      v14 = *(int *)(48 * v11 + v12 + 32);
      v15 = *(int *)(48 * v11 + v12 + 40);
      v16 = *(int *)(48 * v11 + v12 + 36);
      v17 = *(_QWORD *)(a1 + 24);
      if ( (int)v14 >= *(_DWORD *)(v17 + 72)
        || (int)v15 >= *(_DWORD *)(v17 + 72)
        || (int)v16 >= *(_DWORD *)(v17 + 72)
        || (int)v14 >= 0
        && (!(unsigned int)sub_180109740((unsigned int)v14, v8)
         || (int)sub_18000199C((_QWORD *)(v13 + *(_QWORD *)(a1 + 48)), (_QWORD *)(*(_QWORD *)(a1 + 48) + 48 * v14)) <= 0) )
      {
        goto LABEL_23;
      }
      if ( (int)v15 >= 0
        && (!(unsigned int)sub_180109740((unsigned int)v15, v8)
         || (int)sub_18000199C((_QWORD *)(v13 + *(_QWORD *)(a1 + 48)), (_QWORD *)(*(_QWORD *)(a1 + 48) + 48 * v15)) >= 0)
        || (int)v16 >= 0
        && (!(unsigned int)sub_180109740((unsigned int)v16, v8)
         || (unsigned int)sub_18000199C(
                            (_QWORD *)(v13 + *(_QWORD *)(a1 + 48)),
                            (_QWORD *)(*(_QWORD *)(a1 + 48) + 48 * v16))) )
      {
        goto LABEL_23;
      }
    }
    v6 = 1;
  }
LABEL_23:
  if ( v8 )
  {
    v18 = (void *)v8[1];
    if ( v18 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return v6;
}
