/*
 * XREFs of TpAllocWork @ 0x18000A070
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180009F74 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000A1B0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180036DB4 (TppWorkInitialize.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocWork(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // edi
  __int64 Heap; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+88h] [rbp+20h]

  if ( a4 )
    v8 = *(_DWORD *)(a4 + 56);
  else
    v8 = 0;
  if ( !a1 || !a2 || (v8 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8u, 240LL);
    v10 = (_QWORD *)Heap;
    v15 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v11 = TppWorkInitialize(Heap, a3, a4, v8, (__int64)TppWorkpCleanupGroupMemberVFuncs, (__int64)TppWorkpTaskVFuncs);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v10[10] = a2;
        v11 = 0;
        v13 = 0;
        if ( a4 )
          v10[4] = *(_QWORD *)(a4 + 48);
        if ( v10[2] )
          TppCleanupGroupAddMember(v10);
      }
    }
    else
    {
      v11 = -1073741801;
      v13 = -1073741801;
    }
    if ( v11 >= 0 )
      goto LABEL_15;
    if ( v10 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), v15);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *a1 = v10;
    return (unsigned int)v11;
  }
}
