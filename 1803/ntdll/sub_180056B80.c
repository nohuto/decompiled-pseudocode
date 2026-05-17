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

__int64 __fastcall sub_180056B80(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  struct _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _PEB_LDR_DATA *v17; // rcx
  _DWORD *v18; // rbx
  _BYTE *v19; // r15
  __int64 v20; // r15
  int v22; // [rsp+30h] [rbp-48h]
  _QWORD v23[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v25; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 0x80000) | 8u, 296LL);
  v11 = Heap;
  v25 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 248) = retaddr;
    v12 = (_QWORD *)(Heap + 72);
    v14 = sub_180024CB8(Heap + 72, a4, a5, v9, (__int64)off_180110680);
    v22 = v14;
    if ( v14 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 288) &= ~1u;
      *(_DWORD *)(v11 + 288) |= a6 != 0;
      *(_QWORD *)(v11 + 272) = a2;
      v17 = *(struct _PEB_LDR_DATA **)(v11 + 216);
      *(_QWORD *)(v11 + 56) = sub_180027A70;
      v18 = (_DWORD *)(v11 + 64);
      v19 = (_BYTE *)(v11 + 68);
      if ( v17 )
      {
        sub_180024854((__int64)v17, (_DWORD *)(v11 + 64), (BYTE *)(v11 + 68));
      }
      else
      {
        *v18 = 0;
        *v19 = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = off_1801106C0;
      *(_DWORD *)(v11 + 8) = *v18;
      *(_BYTE *)(v11 + 12) = *v19;
      v20 = *(_QWORD *)(v11 + 216);
      if ( v20 )
      {
        v17 = NtCurrentPeb()->Ldr;
        if ( !v17->ShutdownInProgress )
        {
          v23[1] = *(_QWORD *)(v20 + 64);
          v11 = v25;
          v23[0] = v25;
          v14 = ZwAlpcSetInformation(a2, 2LL, v23);
          if ( v14 >= 0 )
          {
            sub_180058E68(v20, 1LL);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = v25;
      }
      sub_1801086C8(v17, v13, v15, v16);
      v14 = -1073741811;
LABEL_16:
      v22 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v22 = 0;
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
    v22 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x80000, v25);
    v11 = 0LL;
    v14 = v22;
  }
  if ( v14 >= 0 )
LABEL_28:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
