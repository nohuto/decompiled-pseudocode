/*
 * XREFs of TpAllocJobNotification @ 0x180014020
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000A1B0 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ZwSetInformationJobObject @ 0x1800A3250 (ZwSetInformationJobObject.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocJobNotification(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  int v6; // r15d
  _PEB_LDR_DATA *v9; // r12
  char *Heap; // rax
  char *v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  char *v14; // r14
  _DWORD *v15; // r15
  __int64 v16; // r14
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  v6 = a4;
  v9 = Ldr;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !Ldr || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *(_QWORD *)&v9->Length = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3407872), 296LL);
  v11 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x128uLL);
  *((_QWORD *)v11 + 31) = retaddr;
  v12 = TppCleanupGroupMemberInitialize((int)v11 + 72, v6, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3407872), v11);
    return (unsigned int)v12;
  }
  v13 = *((_QWORD *)v11 + 27);
  *((_QWORD *)v11 + 19) = a3;
  v14 = v11 + 68;
  *((_QWORD *)v11 + 34) = a2;
  v15 = v11 + 64;
  *((_QWORD *)v11 + 7) = TppJobpExecuteCallback;
  if ( v13 )
  {
    TppGetCurrentThreadNumaNode(v13, v11 + 64, v11 + 68);
  }
  else
  {
    *v15 = 0;
    *v14 = 0;
  }
  *((_QWORD *)v11 + 4) = 0LL;
  *((_QWORD *)v11 + 6) = v11 + 40;
  *((_QWORD *)v11 + 5) = v11 + 40;
  v18[0] = v11;
  *(_QWORD *)v11 = TppDirectTaskVFuncs;
  *((_DWORD *)v11 + 2) = *v15;
  v11[12] = *v14;
  v16 = *((_QWORD *)v11 + 27);
  v18[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, 7LL, v18, 16LL);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy(v11 + 72);
    goto LABEL_21;
  }
  TpAdjustBindingCount(v16, 1u);
  _InterlockedIncrement((volatile signed __int32 *)v11 + 18);
  *((_QWORD *)v11 + 36) = 0LL;
  if ( a5 )
    *((_QWORD *)v11 + 13) = *(_QWORD *)(a5 + 48);
  if ( *((_QWORD *)v11 + 11) )
    TppCleanupGroupAddMember((_QWORD *)v11 + 9);
  *(_QWORD *)&v9->Length = v11;
  return 0LL;
}
