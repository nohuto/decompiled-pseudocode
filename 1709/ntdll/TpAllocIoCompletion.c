/*
 * XREFs of TpAllocIoCompletion @ 0x18000A960
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000A1B0 (TppCleanupGroupAddMember.c)
 *     TpBindFileToDirect @ 0x18000AB4C (TpBindFileToDirect.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocIoCompletion(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v9; // edi
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  _BYTE *v14; // r14
  _DWORD *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h]

  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( a1 && a2 && a3 && (v9 & 0xFFFFFFFC) == 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8u, 288LL);
    v11 = Heap;
    v19 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(Heap, a4, a5, v9, (__int64)TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = a3;
        *(_QWORD *)(v11 + 272) = a2;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        v14 = (_BYTE *)(v11 + 268);
        v15 = (_DWORD *)(v11 + 264);
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, v11 + 264, v11 + 268);
        }
        else
        {
          *v15 = 0;
          *v14 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = *v15;
        *(_BYTE *)(v11 + 212) = *v14;
        v12 = TpBindFileToDirect(a2, v11 + 200, *(_QWORD *)(v11 + 144));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( a5 )
            *(_QWORD *)(v11 + 32) = *(_QWORD *)(a5 + 48);
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember((_QWORD *)v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy(v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_23;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x40000), v19);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_23:
      *a1 = v11;
    return (unsigned int)v12;
  }
  else
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
}
