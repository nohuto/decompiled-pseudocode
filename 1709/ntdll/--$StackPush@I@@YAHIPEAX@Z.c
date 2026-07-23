/*
 * XREFs of ??$StackPush@I@@YAHIPEAX@Z @ 0x18010C424
 * Callers:
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x18010C21C (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 *     ResCDirectoryValidateEntries @ 0x180111868 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall StackPush<unsigned int>(int a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  SIZE_T v8; // r8
  PVOID Heap; // rax
  PVOID v10; // rsi

  if ( !a2 || !*((_QWORD *)a2 + 1) )
    return 0LL;
  v5 = a2[1];
  if ( *a2 == (_DWORD)v5 )
  {
    v6 = 2 * v5;
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = v6;
      v8 = 4LL * (unsigned int)v6;
      if ( v8 <= 0xFFFFFFFF )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
        v10 = Heap;
        if ( Heap )
        {
          memmove(Heap, *((const void **)a2 + 1), 4LL * a2[1]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)a2 + 1));
          *((_QWORD *)a2 + 1) = v10;
          a2[1] = v7;
          goto LABEL_9;
        }
      }
    }
    return 0LL;
  }
LABEL_9:
  *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * *a2) = a1;
  result = 1LL;
  ++*a2;
  return result;
}
