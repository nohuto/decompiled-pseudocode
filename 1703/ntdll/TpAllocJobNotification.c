/*
 * XREFs of TpAllocJobNotification @ 0x180081010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013D14 @ 0x180013D14 (sub_180013D14.c)
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwSetInformationJobObject @ 0x1800A8430 (ZwSetInformationJobObject.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpAllocJobNotification(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  _QWORD *p_Length; // r12
  void *Heap; // rax
  unsigned __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _BYTE *v14; // r14
  _DWORD *v15; // r15
  __int64 v16; // r14
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  p_Length = &Ldr->Length;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !Ldr || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801058B8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *p_Length = 0LL;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3407872, 296LL);
  v11 = (unsigned __int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x128uLL);
  *(_QWORD *)(v11 + 248) = retaddr;
  v12 = sub_180017B34(v11 + 72, a4, a5, v5, (__int64)off_1801107F0);
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3407872, v11);
    return (unsigned int)v12;
  }
  v13 = *(_QWORD *)(v11 + 216);
  *(_QWORD *)(v11 + 152) = a3;
  v14 = (_BYTE *)(v11 + 68);
  *(_QWORD *)(v11 + 272) = a2;
  v15 = (_DWORD *)(v11 + 64);
  *(_QWORD *)(v11 + 56) = sub_180080D00;
  if ( v13 )
  {
    sub_180017A78(v13, (_DWORD *)(v11 + 64), (BYTE *)(v11 + 68));
  }
  else
  {
    *v15 = 0;
    *v14 = 0;
  }
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 48) = v11 + 40;
  *(_QWORD *)(v11 + 40) = v11 + 40;
  v18[0] = v11;
  *(_QWORD *)v11 = off_1801101B0;
  *(_DWORD *)(v11 + 8) = *v15;
  *(_BYTE *)(v11 + 12) = *v14;
  v16 = *(_QWORD *)(v11 + 216);
  v18[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, 7LL, v18, 16LL);
  if ( v12 < 0 )
  {
    sub_1800186FC(v11 + 72);
    goto LABEL_21;
  }
  sub_1800142F8(v16, 1u);
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 72));
  *(_QWORD *)(v11 + 288) = 0LL;
  if ( a5 )
    *(_QWORD *)(v11 + 104) = *(_QWORD *)(a5 + 48);
  if ( *(_QWORD *)(v11 + 88) )
    sub_180013D14((_QWORD *)(v11 + 72));
  *p_Length = v11;
  return 0LL;
}
