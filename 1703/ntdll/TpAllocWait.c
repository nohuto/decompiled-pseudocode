/*
 * XREFs of TpAllocWait @ 0x180013DF0
 * Callers:
 *     sub_180010150 @ 0x180010150 (sub_180010150.c)
 *     RtlRegisterWait @ 0x180012DA0 (RtlRegisterWait.c)
 *     sub_180082FA0 @ 0x180082FA0 (sub_180082FA0.c)
 * Callees:
 *     sub_18001425C @ 0x18001425C (sub_18001425C.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateWaitCompletionPacket @ 0x1800A6B10 (ZwCreateWaitCompletionPacket.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpAllocWait(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // esi
  __int64 Heap; // rbx
  _QWORD *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  _BYTE *v13; // rsi
  _DWORD *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a4;
  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    sub_1801058B8();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 1835008) | 8u, 472LL);
    if ( Heap )
    {
      v9 = (_QWORD *)(Heap + 368);
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = ZwCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (LOBYTE(v10) = 1,
            WaitCompletionPacket = sub_18001425C(Heap, v10, a3, v4, (__int64)off_1801101F0, (__int64)off_1801101A0),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          ZwClose(*v9);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 1835008));
      }
      else
      {
        v12 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = sub_180014570;
        v13 = (_BYTE *)(Heap + 460);
        v14 = (_DWORD *)(Heap + 456);
        if ( v12 )
        {
          sub_180017A78(v12, Heap + 456, Heap + 460);
        }
        else
        {
          *v14 = 0;
          *v13 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = off_1801101B0;
        *(_DWORD *)(Heap + 400) = *v14;
        *(_BYTE *)(Heap + 404) = *v13;
        *(_QWORD *)(Heap + 80) = a2;
        *a1 = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
