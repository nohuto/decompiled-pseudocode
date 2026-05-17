/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x18005CD24
 * Callers:
 *     PssNtCaptureSnapshot @ 0x18005C280 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x1800A08A0 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall PsspCaptureAuxiliaryPages(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v6; // ebx
  int v8; // edi
  int v9; // esi
  _OWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int64 v14; // r8
  __int64 result; // rax
  void *Heap; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  _OWORD *v18; // [rsp+60h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    v17 = 64LL;
    result = ZwAllocateVirtualMemory(-1LL, &Heap, 0LL, &v17, 4096, 4);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (0x1000 * (unsigned __int128)1uLL) >> 64, 64LL);
    if ( !Heap )
      return 3221225626LL;
  }
  v20 = 4096LL;
  v9 = NtCreateSection(&Handle, 983047LL, &unk_180118618, &v20, 4, 0x8000000, 0LL);
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    v17 = 0LL;
    v9 = ZwMapViewOfSection(Handle, -1LL, &v18, 0LL, 0LL, 0LL, &v17, 1, 0, 4);
    if ( v9 >= 0 )
    {
      v10 = v18;
      memset(Heap, 0, 0x40uLL);
      v11 = 2147352576LL;
      if ( *a4 == 2147352576LL )
      {
        v12 = 14LL;
        do
        {
          *v10 = *(_OWORD *)v11;
          v10[1] = *(_OWORD *)(v11 + 16);
          v10[2] = *(_OWORD *)(v11 + 32);
          v10[3] = *(_OWORD *)(v11 + 48);
          v10[4] = *(_OWORD *)(v11 + 64);
          v10[5] = *(_OWORD *)(v11 + 80);
          v10[6] = *(_OWORD *)(v11 + 96);
          v10 += 8;
          v13 = *(_OWORD *)(v11 + 112);
          v11 += 128LL;
          *(v10 - 1) = v13;
          --v12;
        }
        while ( v12 );
        *(_QWORD *)v10 = *(_QWORD *)v11;
      }
      else if ( (int)ZwReadVirtualMemory(a2, *a4, v10, 4096LL, 0LL) < 0 )
      {
LABEL_12:
        NtUnmapViewOfSection(-1LL, v18, v14);
        *(_DWORD *)(a1 + 888) = v6;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = Handle;
        *(_QWORD *)(a1 + 904) = Heap;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( (int)ZwQueryVirtualMemory(a2, *a4, 0LL, (char *)Heap + 8, 48LL, 0LL) >= 0 )
      {
        v6 = 1;
        *(_QWORD *)Heap = *a4;
        *((_QWORD *)Heap + 7) = MEMORY[0x7FFE0014];
      }
      goto LABEL_12;
    }
    NtClose(Handle);
  }
  if ( v8 )
  {
    v17 = 0LL;
    ZwFreeVirtualMemory(-1LL, &Heap, &v17, 0x8000LL);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  }
  return (unsigned int)v9;
}
