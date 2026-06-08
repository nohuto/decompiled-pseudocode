/*
 * XREFs of PerfControlPTStatesHiddenSwAll @ 0x1C00049E0
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChangeHidden @ 0x1C00048C8 (InvokePTStateChangeHidden.c)
 */

void __fastcall PerfControlPTStatesHiddenSwAll(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp+8h]

  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 32LL * (unsigned int)*a2;
  v14 = *a2;
  v8 = *(_QWORD *)(v6 + 48);
  v9 = v8 + v7;
  v10 = *(unsigned __int8 *)(v9 + 25);
  if ( *(_DWORD *)(a1 + 8) != v10 )
  {
    if ( v10 == 1 )
    {
      if ( *(_DWORD *)(v6 + 64) )
      {
        v12 = *(_DWORD *)(v6 + 60);
LABEL_9:
        v13 = v8 + 32LL * v12;
        if ( v13 )
          InvokePTStateChangeHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), (_QWORD *)v6, v13, BYTE4(v5) & 1);
      }
    }
    else
    {
      v11 = *(_DWORD *)(v6 + 60);
      if ( v11 )
      {
        v12 = v11 - 1;
        goto LABEL_9;
      }
    }
  }
  InvokePTStateChangeHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), (_QWORD *)v6, v9, BYTE4(v14) & 1);
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v9 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v9 + 24);
}
