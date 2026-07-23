/*
 * XREFs of sub_180058BC8 @ 0x180058BC8
 * Callers:
 *     sub_180058B10 @ 0x180058B10 (sub_180058B10.c)
 * Callees:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_18005862C @ 0x18005862C (sub_18005862C.c)
 *     sub_180059228 @ 0x180059228 (sub_180059228.c)
 *     sub_180059294 @ 0x180059294 (sub_180059294.c)
 *     sub_18006F890 @ 0x18006F890 (sub_18006F890.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180058BC8(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  PVOID ProcessHeap; // r14
  _DWORD *Heap; // rdi
  unsigned __int64 v7; // rcx
  signed int v8; // esi
  SIZE_T v9; // r8
  ULONG SizeOfBitMap; // r15d
  int v11; // esi
  int v12; // ecx
  void *v13; // r9
  char v14; // al
  int v15; // r8d
  unsigned int v16; // r8d
  __int64 v17; // r15
  PVOID v18; // rax
  _QWORD *v19; // r13
  _DWORD *v20; // rax
  char v21; // r13
  int v22; // esi
  __int64 v23; // r8
  void *v24; // r8
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  char v30; // [rsp+30h] [rbp-C8h] BYREF
  NTSTATUS v31; // [rsp+34h] [rbp-C4h]
  DWORD v32; // [rsp+38h] [rbp-C0h] BYREF
  int v33; // [rsp+3Ch] [rbp-BCh]
  ULONG v34; // [rsp+40h] [rbp-B8h]
  unsigned int v35; // [rsp+44h] [rbp-B4h]
  __int64 v36; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A8h]
  unsigned int v38; // [rsp+5Ch] [rbp-9Ch]
  _BYTE *v39; // [rsp+60h] [rbp-98h]
  size_t Size; // [rsp+68h] [rbp-90h]
  unsigned __int64 v41; // [rsp+70h] [rbp-88h]
  __int64 v42; // [rsp+78h] [rbp-80h]
  __int64 v43; // [rsp+80h] [rbp-78h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-70h]
  PVOID v45[3]; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v46[40]; // [rsp+A8h] [rbp-50h] BYREF

  v37 = a1;
  v42 = a1;
  v1 = 0;
  if ( !dword_18015B1A0 )
    return 0LL;
  v2 = sub_180032C0C(*(_QWORD *)(a1 + 48), 1, 9u, &v32, (char **)&v36);
  v3 = v36;
  if ( v2 < 0 )
    v3 = 0LL;
  v36 = v3;
  if ( !v3 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v45[1] = ProcessHeap;
  v33 = 0;
  v45[0] = 0LL;
  Heap = 0LL;
  v39 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_18015C0D8);
  if ( dword_18015B1A0 == 1 )
  {
    Heap = v46;
    v39 = v46;
  }
  else
  {
    v7 = 24LL * (unsigned int)dword_18015B1A0;
    if ( is_mul_ok((unsigned int)dword_18015B1A0, 0x18uLL) )
    {
      v8 = 0;
    }
    else
    {
      v7 = -1LL;
      v8 = -1073741675;
    }
    if ( v8 >= 0 )
    {
      v9 = -1LL;
      if ( v7 + 16 >= v7 )
        v9 = v7 + 16;
      v8 = v7 + 16 < v7 ? 0xC0000095 : 0;
      if ( v7 + 16 >= v7 )
      {
        Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 786432, v9);
        v39 = Heap;
        if ( !Heap )
          v8 = -1073741801;
      }
    }
    if ( v8 < 0 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015C0D8);
      return (unsigned int)v8;
    }
  }
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v34 = BitMapHeader.SizeOfBitMap;
  v11 = sub_180059294(v36, v37, (unsigned int)&v32, (unsigned int)&v30, (__int64)&v43);
  v31 = v11;
  if ( v11 < 0 )
  {
    v25 = v37;
    goto LABEL_40;
  }
  Heap[2] = dword_18015B1A0;
  if ( v30 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v34 = BitMapHeader.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = v32;
  }
  v12 = (*(_DWORD *)(v43 + 52) >> 20) & 0xF;
  v13 = (void *)(*(_QWORD *)(v43 + 24) - *(_QWORD *)(v43 + 16));
  Size = (size_t)v13;
  v14 = v12 - 1;
  if ( !v12 )
    v14 = 0;
  v15 = 1 << v14;
  if ( (unsigned int)(1 << v14) < 0x10 )
    v15 = 16;
  v16 = v15 - 1;
  v35 = v16;
  v38 = v16;
  v45[2] = v13;
  LODWORD(v17) = 0;
  while ( 1 )
  {
    LODWORD(v36) = v17;
    if ( (unsigned int)v17 >= Heap[2] )
    {
      *Heap = 0;
      v31 = ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * Heap[2] + 16);
      goto LABEL_30;
    }
    v41 = v16;
    v18 = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 786432, (SIZE_T)v13 + v16 + 1);
    BaseAddress = v18;
    if ( !v18 )
    {
      v31 = -1073741801;
      goto LABEL_30;
    }
    v19 = (_QWORD *)(~v41 & ((unsigned __int64)v18 + v35 + 1));
    v41 = (unsigned __int64)v19;
    *(v19 - 1) = v18;
    memmove(v19, *(const void **)(v43 + 16), Size);
    if ( !v30 )
    {
      v20 = &Heap[6 * (unsigned int)v17];
      *((_QWORD *)v20 + 3) = v19;
      goto LABEL_28;
    }
    v26 = sub_180059228(v34);
    v27 = v26;
    if ( !v26 )
      break;
    *(_QWORD *)(v26 + 8LL * v32) = v19;
    v20 = &Heap[6 * (unsigned int)v17];
    *((_QWORD *)v20 + 3) = v27;
LABEL_28:
    v20[4] = 0;
    LODWORD(v17) = v17 + 1;
    v16 = v35;
    v13 = (void *)Size;
  }
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  v31 = -1073741801;
LABEL_30:
  v21 = v30;
  v22 = v33;
  while ( (_DWORD)v17 )
  {
    v17 = (unsigned int)(v17 - 1);
    if ( (Heap[6 * v17 + 4] & 2) != 0 )
    {
      v23 = *(_QWORD *)&Heap[6 * v17 + 6];
      if ( !v23 )
        continue;
      if ( !v21 )
      {
        v24 = *(void **)(v23 - 8);
LABEL_36:
        RtlFreeHeap(ProcessHeap, 0, v24);
        continue;
      }
      sub_18005862C(v23, *(_QWORD *)&Heap[6 * v17 + 8]);
    }
    else
    {
      if ( (Heap[6 * v17 + 4] & 1) == 0 )
      {
        ++v22;
        if ( v21 )
        {
          v29 = *(_QWORD *)&Heap[6 * v17 + 6];
          v42 = *(_QWORD *)(v29 + 8LL * v32);
          RtlFreeHeap(ProcessHeap, 0, (PVOID)(v29 - 16));
          v28 = v42;
        }
        else
        {
          v28 = *(_QWORD *)&Heap[6 * v17 + 6];
        }
        v24 = *(void **)(v28 - 8);
        goto LABEL_36;
      }
      ++dword_18015B1A4;
    }
  }
  v33 = v22;
  v11 = v31;
  v25 = v37;
  if ( v31 < 0 )
  {
    sub_18006F890(v37, v45);
    if ( v21 )
      BitMapHeader.SizeOfBitMap -= 8;
  }
  else if ( v33 )
  {
    dword_18015B1A0 -= v33;
  }
LABEL_40:
  if ( v11 >= 0 )
    *(_WORD *)(v25 + 110) = -1;
  RtlReleaseSRWLockExclusive(&stru_18015C0D8);
  if ( Heap != (_DWORD *)v46 )
    RtlFreeHeap(ProcessHeap, 0, Heap);
  if ( v45[0] )
    RtlFreeHeap(ProcessHeap, 0, v45[0]);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v1;
}
