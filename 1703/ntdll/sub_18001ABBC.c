/*
 * XREFs of sub_18001ABBC @ 0x18001ABBC
 * Callers:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180052A74 @ 0x180052A74 (sub_180052A74.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18001ABBC(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  unsigned int v4; // r14d
  bool v7; // r11
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64, _QWORD); // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned __int8 *v13; // r11
  void *v14; // r8
  _DWORD *Heap; // rax
  unsigned int Size; // [rsp+60h] [rbp-10h]
  int Size_4; // [rsp+64h] [rbp-Ch]

  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a2 + 248);
  v4 = 0;
  if ( v2 != 2 )
  {
    v7 = *(_BYTE *)(a2 + 124) != 0;
    if ( *(_BYTE *)(a2 + 244) )
      v7 = 1;
    if ( v7 )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      *(_DWORD *)(a1 + 116) = 0;
    }
  }
  v8 = 0LL;
  if ( *(_DWORD *)(a1 + 116) )
  {
    while ( *(int *)(a1 + 16LL * (unsigned int)v8 + 132) < 0
         && *(_DWORD *)(a1 + 16LL * (unsigned int)v8 + 132) != 0x80000000 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 116) )
        goto LABEL_7;
    }
    v11 = 2 * v8;
    v12 = a1 + *(_QWORD *)(a1 + 8 * v11 + 120);
    Size = *(_DWORD *)(a1 + 8 * v11 + 128);
    Size_4 = *(_DWORD *)(a1 + 8 * v11 + 132);
    if ( *(__int16 *)(a1 + 78) < 0 && *(_DWORD *)(a1 + 8 * v11 + 132) == 0x80000000 )
    {
      *(_QWORD *)(v12 + 8) = 0LL;
      v13 = (unsigned __int8 *)(a2 + 150);
      *(_DWORD *)(v12 + 20) = 0;
      *(_DWORD *)(v12 + 16) = Size;
      while ( !*(v13 - 2) || *v13 != (*(_WORD *)(a1 + 78) & 0x7FFF) )
      {
        ++v4;
        v13 += 24;
        if ( v4 >= 4 )
          goto LABEL_23;
      }
      *(_QWORD *)(v12 + 8) = 1LL << ((unsigned __int8)v4 + 32);
LABEL_23:
      if ( v3 )
      {
        sub_180052A74(v3);
        v14 = *(void **)(v3 + 168);
        if ( v14 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size + 16LL);
        *(_QWORD *)(v3 + 168) = Heap;
        if ( Heap )
        {
          Heap[2] = Size;
          *(_DWORD *)(*(_QWORD *)(v3 + 168) + 12LL) = Size_4;
          **(_QWORD **)(v3 + 168) = *(_QWORD *)(v3 + 168) + 16LL;
          memmove(**(void ***)(v3 + 168), (const void *)v12, Size);
        }
        *(_DWORD *)(v3 + 48) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 40));
      }
    }
  }
LABEL_7:
  v9 = *(void (__fastcall **)(__int64, _QWORD))(a2 + 48);
  if ( v9 )
    v9(a1 + 56, v2);
  return 0LL;
}
