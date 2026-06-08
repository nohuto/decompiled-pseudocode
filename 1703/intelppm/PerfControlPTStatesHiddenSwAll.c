/*
 * XREFs of PerfControlPTStatesHiddenSwAll @ 0x1C00047E0
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChangeHidden @ 0x1C00046DC (InvokePTStateChangeHidden.c)
 */

void __fastcall PerfControlPTStatesHiddenSwAll(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // eax
  __int64 v11; // r8
  _QWORD *v12; // r8

  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(v6 + 48);
  v8 = v7 + 32LL * (unsigned int)*a2;
  v9 = *(unsigned __int8 *)(v8 + 25);
  if ( *(_DWORD *)(a1 + 8) != v9 )
  {
    if ( v9 == 1 )
    {
      if ( *(_DWORD *)(v6 + 64) )
      {
        v11 = *(unsigned int *)(v6 + 60);
LABEL_9:
        v12 = (_QWORD *)(v7 + 32 * v11);
        if ( v12 )
          InvokePTStateChangeHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v6, v12);
      }
    }
    else
    {
      v10 = *(_DWORD *)(v6 + 60);
      if ( v10 )
      {
        v11 = (unsigned int)(v10 - 1);
        goto LABEL_9;
      }
    }
  }
  InvokePTStateChangeHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v6, (_QWORD *)v8);
  *(_DWORD *)(a1 + 16) = *a2;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v8 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v8 + 24);
}
