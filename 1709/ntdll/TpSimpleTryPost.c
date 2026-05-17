/*
 * XREFs of TpSimpleTryPost @ 0x18007C640
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000A1B0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkInitialize @ 0x180036DB4 (TppWorkInitialize.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     TppWorkPost @ 0x180047168 (TppWorkPost.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSimpleTryPost(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  _PEB_LDR_DATA *v6; // r14
  int v7; // edi
  __int64 Heap; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  int v13; // edi
  int v15; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v17; // [rsp+70h] [rbp+18h]

  v5 = a2;
  v6 = Ldr;
  if ( a3 )
    v7 = *(_DWORD *)(a3 + 56);
  else
    v7 = 0;
  if ( !Ldr || (v7 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8u, 240LL);
    v12 = (_QWORD *)Heap;
    v17 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v13 = TppWorkInitialize(
              Heap,
              v5,
              a3,
              v7,
              (__int64)TppSimplepCleanupGroupMemberVFuncs,
              (__int64)TppSimplepTaskVFuncs);
      v15 = v13;
      if ( v13 >= 0 )
      {
        v13 = 0;
        v15 = 0;
        v12[10] = v6;
        if ( a3 )
          v12[4] = *(_QWORD *)(a3 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember(v12);
      }
    }
    else
    {
      v13 = -1073741801;
      v15 = -1073741801;
    }
    if ( v13 >= 0 )
      goto LABEL_15;
    if ( v12 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, v17);
      v12 = 0LL;
      v13 = v15;
    }
    if ( v13 >= 0 )
LABEL_15:
      TppWorkPost((__int64)v12, v9, v10, v11);
    return (unsigned int)v13;
  }
}
