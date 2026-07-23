/*
 * XREFs of ResCDirectoryValidateEntries @ 0x180111868
 * Callers:
 *     ResCDirectoryValidate @ 0x18010C768 (ResCDirectoryValidate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x18010C424 (--$StackPush@I@@YAHIPEAX@Z.c)
 *     ??$ReleaseStack@I@@YAXPEAX@Z @ 0x180111820 (--$ReleaseStack@I@@YAXPEAX@Z.c)
 */

__int64 __fastcall ResCDirectoryValidateEntries(_QWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *Heap; // rdi
  PVOID v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // r15
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax

  v4 = 0;
  v7 = 0;
  if ( a1 )
  {
    v8 = a1[3];
    if ( v8 )
    {
      if ( a2 < *(_DWORD *)(v8 + 72) )
      {
        if ( a4 )
          *a4 = 0;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
        if ( Heap )
        {
          v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
          Heap[1] = v10;
          if ( v10 )
          {
            *(_DWORD *)Heap = 0;
            *((_DWORD *)Heap + 1) = 10;
            if ( (unsigned int)StackPush<unsigned int>(a2, (unsigned int *)Heap) )
            {
              while ( 1 )
              {
                v12 = Heap[1];
                if ( !v12 || !*(_DWORD *)Heap )
                  break;
                v13 = (unsigned int)(*(_DWORD *)Heap - 1);
                *(_DWORD *)Heap = v13;
                v14 = a1[6] + 48LL * *(unsigned int *)(v12 + 4 * v13);
                v15 = *(_DWORD *)(v14 + 32);
                v16 = *(unsigned int *)(v14 + 20);
                if ( v15 >= 0 && !(unsigned int)StackPush<unsigned int>(v15, (unsigned int *)Heap) )
                  goto LABEL_10;
                v17 = *(_DWORD *)(v14 + 40);
                if ( v17 >= 0 && !(unsigned int)StackPush<unsigned int>(v17, (unsigned int *)Heap) )
                  goto LABEL_10;
                v18 = *(_DWORD *)(v14 + 36);
                if ( v18 >= 0 && !(unsigned int)StackPush<unsigned int>(v18, (unsigned int *)Heap) )
                  goto LABEL_10;
                if ( (*(_BYTE *)(v14 + 44) & 1) == 0 )
                {
                  if ( !*(_QWORD *)v14 && !*(_QWORD *)(v14 + 8)
                    || !*(_DWORD *)(v14 + 16)
                    || (*(_DWORD *)(v14 + 16) & 0xFFEF0000) != 0
                    || (v19 = a1[3], (unsigned int)v16 >= *(_DWORD *)(v19 + 68))
                    || (v20 = a1[4], v21 = 32 * v16, !*(_DWORD *)(32 * v16 + v20 + 24))
                    && (*(_DWORD *)(v21 + v20 + 4) < (unsigned int)(*(_DWORD *)(v14 + 24) + *(_DWORD *)(v14 + 28))
                     || (v22 = *(_DWORD *)(v21 + v20 + 20), v22 >= 0) && (unsigned int)v22 >= *(_DWORD *)(v19 + 80)) )
                  {
                    v7 = 1;
                    if ( a4 )
                      ++*a4;
                  }
                }
              }
              if ( !v7 )
                v4 = 1;
            }
            goto LABEL_10;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
        Heap = 0LL;
LABEL_10:
        ReleaseStack<unsigned int>(Heap);
        return v4;
      }
    }
  }
  RtlSetLastWin32Error(87);
  return 0LL;
}
