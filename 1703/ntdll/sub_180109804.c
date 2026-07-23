/*
 * XREFs of sub_180109804 @ 0x180109804
 * Callers:
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180109568 @ 0x180109568 (sub_180109568.c)
 */

_BOOL8 __fastcall sub_180109804(__int64 a1)
{
  BOOL v2; // ebx
  _DWORD *v3; // rax
  _BYTE *Heap; // rsi
  signed int v6; // edx
  int i; // ecx
  __int64 v8; // rax

  v2 = 1;
  if ( a1 )
  {
    v3 = *(_DWORD **)(a1 + 24);
    if ( v3 )
    {
      if ( !v3[18] )
        return v2;
      if ( (int)v3[22] >= 0 || (int)v3[23] >= 0 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3[18]);
        if ( Heap )
        {
          v6 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
          if ( v6 < 0 || (unsigned int)sub_180109568(a1, v6, (__int64)Heap) )
          {
            for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 92LL); ; i = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 48LL * i + 36) )
            {
              v8 = *(_QWORD *)(a1 + 24);
              if ( i < 0 )
                break;
              if ( (unsigned int)i >= *(_DWORD *)(v8 + 72) || Heap[i] )
                goto LABEL_10;
              Heap[i] = 1;
            }
            if ( *(int *)(v8 + 96) >= 0 )
              v2 = Heap[*(int *)(v8 + 96)] != 0;
          }
          else
          {
LABEL_10:
            v2 = 0;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v2;
        }
      }
    }
  }
  return 0LL;
}
