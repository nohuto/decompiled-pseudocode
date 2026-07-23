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

__int64 __fastcall sub_18007F460(PPEB_LDR_DATA Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _QWORD *p_Length; // r13
  int v9; // ebx
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rdx
  int v14; // ebx
  PPEB_LDR_DATA v15; // rcx
  _BYTE *v16; // rbx
  _DWORD *v17; // rsi
  __int64 v18; // rsi
  int v20; // [rsp+30h] [rbp-48h]
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
    sub_1801058B8(Ldr, a2);
    return 3221225485LL;
  }
  *p_Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x80000) | 8, 0x128uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    Heap[31] = retaddr;
    v12 = Heap + 9;
    v14 = sub_180017B34((__int64)(Heap + 9), a4, a5, v9, (__int64)off_180110760);
    v20 = v14;
    if ( v14 >= 0 )
    {
      v11[19] = a3;
      *((_DWORD *)v11 + 72) &= ~1u;
      *((_DWORD *)v11 + 72) |= a6 != 0;
      v11[34] = a2;
      v15 = (PPEB_LDR_DATA)v11[27];
      v11[7] = sub_180016110;
      v16 = (char *)v11 + 68;
      v17 = v11 + 8;
      if ( v15 )
      {
        sub_180017A78((__int64)v15, (_DWORD *)v11 + 16, (BYTE *)v11 + 68);
      }
      else
      {
        *v17 = 0;
        *v16 = 0;
      }
      v11[4] = 0LL;
      v11[6] = v11 + 5;
      v11[5] = v11 + 5;
      *v11 = off_1801101B0;
      *((_DWORD *)v11 + 2) = *v17;
      *((_BYTE *)v11 + 12) = *v16;
      v18 = v11[27];
      if ( v18 )
      {
        v15 = NtCurrentPeb()->Ldr;
        if ( !v15->ShutdownInProgress )
        {
          PortInformation[1] = *(_QWORD *)(v18 + 64);
          v11 = BaseAddress;
          PortInformation[0] = BaseAddress;
          v14 = ZwAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, PortInformation, 0x10u);
          if ( v14 >= 0 )
          {
            sub_1800142F8(v18, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      sub_1801058B8(v15, v13);
      v14 = -1073741811;
LABEL_16:
      v20 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v20 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          sub_180013D14((__int64)v12);
      }
      if ( v14 < 0 )
        sub_1800186FC(v12);
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x80000, BaseAddress);
    v11 = 0LL;
    v14 = v20;
  }
  if ( v14 >= 0 )
LABEL_30:
    *p_Length = v11;
  return (unsigned int)v14;
}
