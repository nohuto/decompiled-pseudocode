/*
 * XREFs of EtwpEventApiCallback @ 0x180077EF0
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180036244 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1800642DC (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall EtwpEventApiCallback(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  bool v6; // r11
  unsigned int v7; // ecx
  void (__fastcall *v8)(__int64, _QWORD); // rax
  int v10; // r11d
  __int64 v11; // r15
  unsigned __int8 *v12; // r11
  unsigned int v13; // r14d
  void *v14; // r8
  _DWORD *Heap; // rax
  unsigned int Size; // [rsp+60h] [rbp-10h]
  int Size_4; // [rsp+64h] [rbp-Ch]

  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a2 + 248);
  if ( v2 != 2 )
  {
    v6 = *(_BYTE *)(a2 + 124) != 0;
    if ( *(_BYTE *)(a2 + 244) )
      v6 = 1;
    if ( v6 )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      *(_DWORD *)(a1 + 116) = 0;
    }
  }
  v7 = 0;
  if ( *(_DWORD *)(a1 + 116) )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(a1 + 16LL * v7 + 132);
      if ( v10 >= 0 || v10 == 0x80000000 )
        break;
      if ( ++v7 >= *(_DWORD *)(a1 + 116) )
        goto LABEL_7;
    }
    Size_4 = *(_DWORD *)(a1 + 16LL * v7 + 132);
    Size = *(_DWORD *)(a1 + 16LL * v7 + 128);
    v11 = a1 + *(_QWORD *)(a1 + 16LL * v7 + 120);
    if ( *(__int16 *)(a1 + 78) < 0 && v10 == 0x80000000 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      v12 = (unsigned __int8 *)(a2 + 150);
      *(_DWORD *)(v11 + 20) = 0;
      v13 = 0;
      *(_DWORD *)(v11 + 16) = Size;
      while ( !*(v12 - 2) || *v12 != (*(_WORD *)(a1 + 78) & 0x7FFF) )
      {
        ++v13;
        v12 += 24;
        if ( v13 >= 4 )
          goto LABEL_23;
      }
      *(_QWORD *)(v11 + 8) = 1LL << ((unsigned __int8)v13 + 32);
LABEL_23:
      if ( v3 )
      {
        EtwpAcquireGuidEntryExclusive(v3);
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
          memmove(**(void ***)(v3 + 168), (const void *)v11, Size);
        }
        *(_DWORD *)(v3 + 48) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 40));
      }
    }
  }
LABEL_7:
  v8 = *(void (__fastcall **)(__int64, _QWORD))(a2 + 48);
  if ( v8 )
    v8(a1 + 56, v2);
  return 0LL;
}
