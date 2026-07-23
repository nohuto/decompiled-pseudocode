/*
 * XREFs of sub_180056B80 @ 0x180056B80
 * Callers:
 *     TpAllocAlpcCompletion @ 0x1800557D0 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x180056B60 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_1800570C8 @ 0x1800570C8 (sub_1800570C8.c)
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 *     ZwAlpcSetInformation @ 0x18009BC10 (ZwAlpcSetInformation.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_180056B80(PPEB_LDR_DATA Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _QWORD *p_Length; // r13
  int v9; // ebx
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  PPEB_LDR_DATA v16; // rcx
  _DWORD *v17; // rbx
  _BYTE *v18; // r15
  __int64 v19; // r15
  int v21; // [rsp+30h] [rbp-48h]
  _QWORD PortInformation[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *BaseAddress; // [rsp+80h] [rbp+8h]

  p_Length = &Ldr->Length;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(Ldr, a2, a3);
    return 3221225485LL;
  }
  *p_Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 0x80000) | 8, 0x128uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    Heap[31] = retaddr;
    v12 = Heap + 9;
    v14 = sub_180024CB8((__int64)(Heap + 9), a4, a5, v9, (__int64)off_180110680);
    v21 = v14;
    if ( v14 >= 0 )
    {
      v11[19] = a3;
      *((_DWORD *)v11 + 72) &= ~1u;
      *((_DWORD *)v11 + 72) |= a6 != 0;
      v11[34] = a2;
      v16 = (PPEB_LDR_DATA)v11[27];
      v11[7] = sub_180027A70;
      v17 = v11 + 8;
      v18 = (char *)v11 + 68;
      if ( v16 )
      {
        sub_180024854((__int64)v16, (_DWORD *)v11 + 16, (BYTE *)v11 + 68);
      }
      else
      {
        *v17 = 0;
        *v18 = 0;
      }
      v11[4] = 0LL;
      v11[6] = v11 + 5;
      v11[5] = v11 + 5;
      *v11 = off_1801106C0;
      *((_DWORD *)v11 + 2) = *v17;
      *((_BYTE *)v11 + 12) = *v18;
      v19 = v11[27];
      if ( v19 )
      {
        v16 = NtCurrentPeb()->Ldr;
        if ( !v16->ShutdownInProgress )
        {
          PortInformation[1] = *(_QWORD *)(v19 + 64);
          v11 = BaseAddress;
          PortInformation[0] = BaseAddress;
          v14 = ZwAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, PortInformation, 0x10u);
          if ( v14 >= 0 )
          {
            sub_180058E68(v19, 1LL);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      sub_1801086C8(v16, v13, v15);
      v14 = -1073741811;
LABEL_16:
      v21 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v21 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          sub_1800570C8(v12);
      }
      if ( v14 < 0 )
        sub_180024608(v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v21 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x80000, BaseAddress);
    v11 = 0LL;
    v14 = v21;
  }
  if ( v14 >= 0 )
LABEL_28:
    *p_Length = v11;
  return (unsigned int)v14;
}
