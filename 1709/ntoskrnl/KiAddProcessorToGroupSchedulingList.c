/*
 * XREFs of KiAddProcessorToGroupSchedulingList @ 0x14020C794
 * Callers:
 *     KiAddProcessorToGroupSchedulingList @ 0x14020C794 (KiAddProcessorToGroupSchedulingList.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x14042EBCC (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     KiAddProcessorToGroupSchedulingList @ 0x14020C794 (KiAddProcessorToGroupSchedulingList.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingList(__int64 a1, _QWORD **a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 i; // [rsp+48h] [rbp+10h]

  v3 = *a2;
  v6 = a1;
  if ( *a2 != a2 )
  {
    v7 = 424LL * a3;
    v8 = a1 + 24328;
    for ( i = v7; ; v7 = i )
    {
      v9 = *(_QWORD **)(v8 + 8);
      v10 = (_QWORD *)((char *)v3 + v7 + 144);
      if ( *v9 != v8 )
        __fastfail(3u);
      *v10 = v8;
      v11 = v3 + 3;
      v10[1] = v9;
      *v9 = v10;
      *(_QWORD *)(v8 + 8) = v10;
      if ( (_QWORD *)*v11 != v11 )
      {
        KiAddProcessorToGroupSchedulingList(v6, v11, a3);
        v6 = a1;
      }
      v3 = (_QWORD *)*v3;
      if ( v3 == a2 )
        break;
    }
  }
}
