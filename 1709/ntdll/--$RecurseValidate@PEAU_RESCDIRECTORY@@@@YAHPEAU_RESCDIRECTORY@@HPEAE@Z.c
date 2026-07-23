/*
 * XREFs of ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x18010C21C
 * Callers:
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x18010C4EC (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ResCCompareCacheIDs @ 0x18008DB60 (ResCCompareCacheIDs.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x18010C424 (--$StackPush@I@@YAHIPEAX@Z.c)
 */

__int64 __fastcall RecurseValidate<_RESCDIRECTORY *>(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // r12d
  _QWORD *Heap; // rbx
  PVOID v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  void *v17; // r8

  v4 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( Heap )
  {
    v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    Heap[1] = v7;
    if ( v7 )
    {
      *(_DWORD *)Heap = 0;
      *((_DWORD *)Heap + 1) = 10;
      if ( (unsigned int)StackPush<unsigned int>(a2, Heap) )
      {
        while ( 1 )
        {
          v8 = Heap[1];
          if ( !v8 || !*(_DWORD *)Heap )
            break;
          v9 = (unsigned int)(*(_DWORD *)Heap - 1);
          *(_DWORD *)Heap = v9;
          v10 = *(int *)(v8 + 4 * v9);
          if ( (int)v10 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 72LL) )
            goto LABEL_23;
          if ( (int)v10 < 0 )
            goto LABEL_23;
          if ( *(_BYTE *)(v10 + a3) == 1 )
            goto LABEL_23;
          *(_BYTE *)(v10 + a3) = 1;
          v11 = *(_QWORD *)(a1 + 48);
          v12 = 48 * v10;
          v13 = *(int *)(48 * v10 + v11 + 32);
          v14 = *(int *)(48 * v10 + v11 + 40);
          v15 = *(int *)(48 * v10 + v11 + 36);
          v16 = *(_QWORD *)(a1 + 24);
          if ( (int)v13 >= *(_DWORD *)(v16 + 72)
            || (int)v14 >= *(_DWORD *)(v16 + 72)
            || (int)v15 >= *(_DWORD *)(v16 + 72)
            || (int)v13 >= 0
            && (!(unsigned int)StackPush<unsigned int>((unsigned int)v13, Heap)
             || (int)ResCCompareCacheIDs(
                       (_QWORD *)(v12 + *(_QWORD *)(a1 + 48)),
                       (_QWORD *)(*(_QWORD *)(a1 + 48) + 48 * v13)) <= 0) )
          {
            goto LABEL_23;
          }
          if ( (int)v14 >= 0
            && (!(unsigned int)StackPush<unsigned int>((unsigned int)v14, Heap)
             || (int)ResCCompareCacheIDs(
                       (_QWORD *)(v12 + *(_QWORD *)(a1 + 48)),
                       (_QWORD *)(*(_QWORD *)(a1 + 48) + 48 * v14)) >= 0)
            || (int)v15 >= 0
            && (!(unsigned int)StackPush<unsigned int>((unsigned int)v15, Heap)
             || (unsigned int)ResCCompareCacheIDs(
                                (_QWORD *)(v12 + *(_QWORD *)(a1 + 48)),
                                (_QWORD *)(*(_QWORD *)(a1 + 48) + 48 * v15))) )
          {
            goto LABEL_23;
          }
        }
        v4 = 1;
      }
LABEL_23:
      v17 = (void *)Heap[1];
      if ( v17 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return v4;
}
