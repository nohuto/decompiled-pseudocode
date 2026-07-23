/*
 * XREFs of sub_1800503AC @ 0x1800503AC
 * Callers:
 *     sub_180050300 @ 0x180050300 (sub_180050300.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180050A28 @ 0x180050A28 (sub_180050A28.c)
 *     sub_180050A6C @ 0x180050A6C (sub_180050A6C.c)
 *     sub_180050AD8 @ 0x180050AD8 (sub_180050AD8.c)
 *     sub_18005115C @ 0x18005115C (sub_18005115C.c)
 *     sub_18007D794 @ 0x18007D794 (sub_18007D794.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 */

__int64 __fastcall sub_1800503AC(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // r15
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  PVOID ProcessHeap; // r14
  _DWORD *Heap; // rdi
  unsigned __int64 v8; // rcx
  signed int v9; // esi
  SIZE_T v10; // r8
  ULONG SizeOfBitMap; // r13d
  int v12; // esi
  DWORD v13; // r11d
  __int64 v14; // r8
  __int64 v15; // r15
  unsigned int v16; // r13d
  unsigned int v17; // ecx
  PVOID v18; // rax
  _QWORD *v19; // r13
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // r8
  void *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r13
  char v27; // [rsp+30h] [rbp-F8h]
  char v28; // [rsp+31h] [rbp-F7h] BYREF
  NTSTATUS v29; // [rsp+34h] [rbp-F4h]
  DWORD v30; // [rsp+38h] [rbp-F0h] BYREF
  DWORD v31; // [rsp+3Ch] [rbp-ECh]
  int v32; // [rsp+40h] [rbp-E8h]
  ULONG v33; // [rsp+44h] [rbp-E4h]
  _DWORD *v34; // [rsp+48h] [rbp-E0h]
  _DWORD v35[2]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int i; // [rsp+58h] [rbp-D0h]
  __int64 v37; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 *v38; // [rsp+68h] [rbp-C0h]
  _BYTE *v39; // [rsp+78h] [rbp-B0h]
  size_t Size; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+88h] [rbp-A0h]
  __int64 v42; // [rsp+90h] [rbp-98h] BYREF
  __int64 v43; // [rsp+98h] [rbp-90h]
  PVOID BaseAddress; // [rsp+A0h] [rbp-88h]
  PVOID v45[4]; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v46[40]; // [rsp+C8h] [rbp-60h] BYREF

  v1 = a1;
  v38 = a1;
  v45[2] = a1;
  v2 = 0;
  if ( !dword_18015C1C0 )
    return 0LL;
  v3 = sub_18001014C(a1[6], 1, 9u, &v30, (char **)&v37);
  v4 = v37;
  if ( v3 < 0 )
    v4 = 0LL;
  v37 = v4;
  if ( !v4 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v45[1] = ProcessHeap;
  v32 = 0;
  v45[0] = 0LL;
  Heap = 0LL;
  v39 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_18015D118);
  if ( dword_18015C1C0 == 1 )
  {
    Heap = v46;
    v39 = v46;
  }
  else
  {
    v8 = 24LL * (unsigned int)dword_18015C1C0;
    if ( is_mul_ok((unsigned int)dword_18015C1C0, 0x18uLL) )
    {
      v9 = 0;
    }
    else
    {
      v8 = -1LL;
      v9 = -1073741675;
    }
    if ( v9 >= 0 )
    {
      v10 = -1LL;
      if ( v8 + 16 >= v8 )
        v10 = v8 + 16;
      v9 = v8 + 16 < v8 ? 0xC0000095 : 0;
      if ( v8 + 16 >= v8 )
      {
        Heap = RtlAllocateHeap(ProcessHeap, Flags + 786432, v10);
        v39 = Heap;
        if ( !Heap )
          v9 = -1073741801;
      }
    }
    if ( v9 < 0 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015D118);
      return (unsigned int)v9;
    }
  }
  v34 = Heap;
  v45[3] = Heap;
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v33 = BitMapHeader.SizeOfBitMap;
  v12 = sub_180050AD8(v37, (_DWORD)v1, (unsigned int)&v30, (unsigned int)&v28, (__int64)&v42);
  v29 = v12;
  if ( v12 < 0 )
    goto LABEL_35;
  Heap[2] = dword_18015C1C0;
  v27 = v28;
  v13 = v30;
  v31 = v30;
  if ( v28 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v33 = BitMapHeader.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = v13;
  }
  v43 = v42;
  v14 = sub_180050A28(v42, v35);
  Size = v14;
  LODWORD(v15) = 0;
  v16 = v35[0];
  for ( i = v35[0]; ; v16 = i )
  {
    v35[1] = v15;
    LODWORD(v37) = v15;
    v17 = Heap[2];
    if ( (unsigned int)v15 >= v17 )
    {
      *Heap = 0;
      v29 = ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v17 + 16);
      goto LABEL_25;
    }
    v41 = v16;
    v18 = RtlAllocateHeap(ProcessHeap, Flags + 786432, v16 + 1LL + v14);
    BaseAddress = v18;
    if ( !v18 )
      break;
    v19 = (_QWORD *)(~v41 & ((unsigned __int64)v18 + v16 + 1));
    v41 = (unsigned __int64)v19;
    *(v19 - 1) = v18;
    memmove(v19, *(const void **)(v43 + 16), Size);
    if ( v27 )
    {
      v24 = sub_180050A6C(v33);
      if ( !v24 )
      {
        RtlFreeHeap(ProcessHeap, 0, BaseAddress);
        break;
      }
      *(_QWORD *)(v24 + 8LL * v31) = v19;
      v19 = (_QWORD *)v24;
    }
    v20 = 3LL * (unsigned int)v37;
    *(_QWORD *)&v34[2 * v20 + 6] = v19;
    Heap[2 * v20 + 4] = 0;
    LODWORD(v15) = v15 + 1;
    v14 = Size;
  }
  v29 = -1073741801;
LABEL_25:
  v21 = v32;
  while ( (_DWORD)v15 )
  {
    v15 = (unsigned int)(v15 - 1);
    if ( (Heap[6 * v15 + 4] & 2) != 0 )
    {
      v22 = *(_QWORD *)&v34[6 * v15 + 6];
      if ( v22 )
      {
        if ( !v27 )
        {
          v23 = *(void **)(v22 - 8);
          goto LABEL_31;
        }
        sub_18005115C(v22, *(_QWORD *)&v34[6 * v15 + 8]);
      }
    }
    else if ( (Heap[6 * v15 + 4] & 1) != 0 )
    {
      ++dword_18015C1C4;
    }
    else
    {
      ++v21;
      v25 = *(_QWORD *)&v34[6 * v15 + 6];
      if ( v27 )
      {
        v26 = *(_QWORD *)(v25 + 8LL * v31);
        RtlFreeHeap(ProcessHeap, 0, (PVOID)(v25 - 16));
      }
      else
      {
        v26 = *(_QWORD *)&v34[6 * v15 + 6];
      }
      v23 = *(void **)(v26 - 8);
LABEL_31:
      RtlFreeHeap(ProcessHeap, 0, v23);
    }
  }
  v32 = v21;
  v12 = v29;
  v1 = v38;
  if ( v29 < 0 )
  {
    sub_18007D794(v38, v45);
    if ( v27 )
      BitMapHeader.SizeOfBitMap -= 8;
  }
  else if ( v32 )
  {
    dword_18015C1C0 -= v32;
  }
LABEL_35:
  if ( v12 >= 0 )
    *((_WORD *)v1 + 55) = -1;
  RtlReleaseSRWLockExclusive(&stru_18015D118);
  if ( Heap != (_DWORD *)v46 )
    RtlFreeHeap(ProcessHeap, 0, Heap);
  if ( v45[0] )
    RtlFreeHeap(ProcessHeap, 0, v45[0]);
  if ( v12 < 0 )
    return (unsigned int)v12;
  return v2;
}
