/*
 * XREFs of TppAllocAlpcCompletion @ 0x180013B30
 * Callers:
 *     TpAllocAlpcCompletionEx @ 0x180013B10 (TpAllocAlpcCompletionEx.c)
 *     TpAllocAlpcCompletion @ 0x180015440 (TpAllocAlpcCompletion.c)
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000A1B0 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     NtAlpcSetInformation @ 0x1800A11F0 (NtAlpcSetInformation.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, void *a2, __int64 a3, int a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  char *Heap; // rax
  char *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdx
  NTSTATUS v14; // ebx
  _PEB_LDR_DATA *v15; // rcx
  char *v16; // rbx
  _DWORD *v17; // rsi
  __int64 v18; // rsi
  int v20; // [rsp+30h] [rbp-48h]
  _QWORD PortInformation[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char *BaseAddress; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, 0x128uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    *((_QWORD *)Heap + 31) = retaddr;
    v12 = (__int64)(Heap + 72);
    v14 = TppCleanupGroupMemberInitialize((int)Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v20 = v14;
    if ( v14 >= 0 )
    {
      *((_QWORD *)v11 + 19) = a3;
      *((_DWORD *)v11 + 72) &= ~1u;
      *((_DWORD *)v11 + 72) |= a6 != 0;
      *((_QWORD *)v11 + 34) = a2;
      v15 = (_PEB_LDR_DATA *)*((_QWORD *)v11 + 27);
      *((_QWORD *)v11 + 7) = TppAlpcpExecuteCallback;
      v16 = v11 + 68;
      v17 = v11 + 64;
      if ( v15 )
      {
        TppGetCurrentThreadNumaNode(v15, v11 + 64, v11 + 68);
      }
      else
      {
        *v17 = 0;
        *v16 = 0;
      }
      *((_QWORD *)v11 + 4) = 0LL;
      *((_QWORD *)v11 + 6) = v11 + 40;
      *((_QWORD *)v11 + 5) = v11 + 40;
      *(_QWORD *)v11 = TppDirectTaskVFuncs;
      *((_DWORD *)v11 + 2) = *v17;
      v11[12] = *v16;
      v18 = *((_QWORD *)v11 + 27);
      if ( v18 )
      {
        v15 = NtCurrentPeb()->Ldr;
        if ( !v15->ShutdownInProgress )
        {
          PortInformation[1] = *(_QWORD *)(v18 + 64);
          v11 = BaseAddress;
          PortInformation[0] = BaseAddress;
          v14 = NtAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, PortInformation, 0x10u);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v18, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      TppRaiseInvalidParameter(v15, v13);
      v14 = -1073741811;
LABEL_16:
      v20 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v20 = 0;
        if ( a5 )
          *(_QWORD *)(v12 + 32) = *(_QWORD *)(a5 + 48);
        if ( *(_QWORD *)(v12 + 16) )
          TppCleanupGroupAddMember(v12);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v20 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_30;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, BaseAddress);
    v11 = 0LL;
    v14 = v20;
  }
  if ( v14 >= 0 )
LABEL_30:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
