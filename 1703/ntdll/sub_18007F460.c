/*
 * XREFs of sub_18007F460 @ 0x18007F460
 * Callers:
 *     TpAllocAlpcCompletion @ 0x18007F2E0 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x18007F440 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     sub_180013D14 @ 0x180013D14 (sub_180013D14.c)
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwAlpcSetInformation @ 0x1800A6430 (ZwAlpcSetInformation.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_18007F460(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  struct _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _PEB_LDR_DATA *v17; // rcx
  _BYTE *v18; // rbx
  _DWORD *v19; // rsi
  __int64 v20; // rsi
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
    sub_1801058B8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x80000) | 8u, 296LL);
  v11 = Heap;
  v25 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 248) = retaddr;
    v12 = (_QWORD *)(Heap + 72);
    v14 = sub_180017B34(Heap + 72, a4, a5, v9, (__int64)off_180110760);
    v22 = v14;
    if ( v14 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 288) &= ~1u;
      *(_DWORD *)(v11 + 288) |= a6 != 0;
      *(_QWORD *)(v11 + 272) = a2;
      v17 = *(struct _PEB_LDR_DATA **)(v11 + 216);
      *(_QWORD *)(v11 + 56) = sub_180016110;
      v18 = (_BYTE *)(v11 + 68);
      v19 = (_DWORD *)(v11 + 64);
      if ( v17 )
      {
        sub_180017A78((__int64)v17, (_DWORD *)(v11 + 64), (BYTE *)(v11 + 68));
      }
      else
      {
        *v19 = 0;
        *v18 = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = off_1801101B0;
      *(_DWORD *)(v11 + 8) = *v19;
      *(_BYTE *)(v11 + 12) = *v18;
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
            sub_1800142F8(v20, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = v25;
      }
      sub_1801058B8(v17, v13, v15, v16);
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
          sub_180013D14(v12);
      }
      if ( v14 < 0 )
        sub_1800186FC((__int64)v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v22 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_30;
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x80000, v25);
    v11 = 0LL;
    v14 = v22;
  }
  if ( v14 >= 0 )
LABEL_30:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
