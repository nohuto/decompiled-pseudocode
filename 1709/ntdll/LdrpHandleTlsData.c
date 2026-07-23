/*
 * XREFs of LdrpHandleTlsData @ 0x18001C3A8
 * Callers:
 *     LdrpDoPostSnapWork @ 0x18001C2FC (LdrpDoPostSnapWork.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     LdrpGetNewTlsVector @ 0x18001CA1C (LdrpGetNewTlsVector.c)
 *     LdrpQueueDeferredTlsData @ 0x18001CA88 (LdrpQueueDeferredTlsData.c)
 *     LdrpAllocateTlsEntry @ 0x18001CAE4 (LdrpAllocateTlsEntry.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpReleaseTlsEntry @ 0x18008129C (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x1800A0440 (NtSetInformationProcess.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rcx
  void *ProcessHeap; // r14
  _DWORD *Heap; // rdi
  unsigned __int64 v7; // rcx
  signed int v8; // esi
  SIZE_T v9; // r8
  unsigned int SizeOfBitMap; // r15d
  int TlsEntry; // esi
  int v12; // ecx
  void *v13; // r9
  char v14; // al
  int v15; // r8d
  unsigned int v16; // r8d
  __int64 v17; // r15
  unsigned int v18; // eax
  PVOID v19; // rax
  _QWORD *v20; // r13
  _DWORD *v21; // rax
  __int64 NewTlsVector; // rax
  __int64 v23; // rdx
  char v24; // r13
  int v25; // esi
  __int64 v26; // r8
  void *v27; // r8
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r8
  char v31; // [rsp+30h] [rbp-C8h] BYREF
  NTSTATUS v32; // [rsp+34h] [rbp-C4h]
  unsigned int v33; // [rsp+38h] [rbp-C0h] BYREF
  int v34; // [rsp+3Ch] [rbp-BCh]
  unsigned int v35; // [rsp+40h] [rbp-B8h]
  unsigned int v36; // [rsp+44h] [rbp-B4h]
  __int64 v37; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-A8h]
  unsigned int v39; // [rsp+5Ch] [rbp-9Ch]
  _BYTE *v40; // [rsp+60h] [rbp-98h]
  size_t Size; // [rsp+68h] [rbp-90h]
  unsigned __int64 v42; // [rsp+70h] [rbp-88h]
  __int64 v43; // [rsp+78h] [rbp-80h]
  __int64 v44; // [rsp+80h] [rbp-78h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-70h]
  PVOID v46[3]; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v47[40]; // [rsp+A8h] [rbp-50h] BYREF

  v38 = a1;
  v43 = a1;
  v1 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), (__int64)&v37);
  v3 = v37;
  if ( v2 < 0 )
    v3 = 0LL;
  v37 = v3;
  if ( !v3 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v46[1] = ProcessHeap;
  v34 = 0;
  v46[0] = 0LL;
  Heap = 0LL;
  v40 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v47;
    v40 = v47;
  }
  else
  {
    v7 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
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
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v9);
        v40 = Heap;
        if ( !Heap )
          v8 = -1073741801;
      }
    }
    if ( v8 < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)v8;
    }
  }
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v35 = LdrpTlsBitmap.SizeOfBitMap;
  TlsEntry = LdrpAllocateTlsEntry(v37, v38, (unsigned int)&v33, (unsigned int)&v31, (__int64)&v44);
  v32 = TlsEntry;
  if ( TlsEntry < 0 )
  {
    v28 = v38;
    goto LABEL_43;
  }
  Heap[2] = LdrpActiveThreadCount;
  if ( v31 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v35 = LdrpTlsBitmap.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = v33;
  }
  v12 = (*(_DWORD *)(v44 + 52) >> 20) & 0xF;
  v13 = (void *)(*(_QWORD *)(v44 + 24) - *(_QWORD *)(v44 + 16));
  Size = (size_t)v13;
  v14 = v12 - 1;
  if ( !v12 )
    v14 = 0;
  v15 = 1 << v14;
  if ( (unsigned int)(1 << v14) < 0x10 )
    v15 = 16;
  v16 = v15 - 1;
  v36 = v16;
  v39 = v16;
  v46[2] = v13;
  LODWORD(v17) = 0;
  while ( 1 )
  {
    LODWORD(v37) = v17;
    v18 = Heap[2];
    if ( (unsigned int)v17 >= v18 )
    {
      *Heap = 0;
      v32 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v18 + 16);
      goto LABEL_32;
    }
    v42 = v16;
    v19 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, (SIZE_T)v13 + v16 + 1);
    BaseAddress = v19;
    if ( !v19 )
    {
      v32 = -1073741801;
      goto LABEL_32;
    }
    v20 = (_QWORD *)(~v42 & ((unsigned __int64)v19 + v36 + 1));
    v42 = (unsigned __int64)v20;
    *(v20 - 1) = v19;
    memmove(v20, *(const void **)(v44 + 16), Size);
    if ( !v31 )
    {
      v21 = &Heap[6 * (unsigned int)v17];
      *((_QWORD *)v21 + 3) = v20;
      goto LABEL_28;
    }
    NewTlsVector = LdrpGetNewTlsVector(v35);
    v23 = NewTlsVector;
    if ( !NewTlsVector )
      break;
    *(_QWORD *)(NewTlsVector + 8LL * v33) = v20;
    v21 = &Heap[6 * (unsigned int)v17];
    *((_QWORD *)v21 + 3) = v23;
LABEL_28:
    v21[4] = 0;
    LODWORD(v17) = v17 + 1;
    v16 = v36;
    v13 = (void *)Size;
  }
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  v32 = -1073741801;
LABEL_32:
  v24 = v31;
  v25 = v34;
  while ( (_DWORD)v17 )
  {
    v17 = (unsigned int)(v17 - 1);
    if ( (Heap[6 * v17 + 4] & 2) != 0 )
    {
      v26 = *(_QWORD *)&Heap[6 * v17 + 6];
      if ( !v26 )
        continue;
      if ( !v24 )
      {
        v27 = *(void **)(v26 - 8);
LABEL_38:
        RtlFreeHeap(ProcessHeap, 0, v27);
        continue;
      }
      LdrpQueueDeferredTlsData(v26, *(_QWORD *)&Heap[6 * v17 + 8]);
    }
    else
    {
      if ( (Heap[6 * v17 + 4] & 1) == 0 )
      {
        ++v25;
        if ( v24 )
        {
          v30 = *(_QWORD *)&Heap[6 * v17 + 6];
          v43 = *(_QWORD *)(v30 + 8LL * v33);
          RtlFreeHeap(ProcessHeap, 0, (PVOID)(v30 - 16));
          v29 = v43;
        }
        else
        {
          v29 = *(_QWORD *)&Heap[6 * v17 + 6];
        }
        v27 = *(void **)(v29 - 8);
        goto LABEL_38;
      }
      ++LdrpPotentialTlsLeaks;
    }
  }
  v34 = v25;
  TlsEntry = v32;
  v28 = v38;
  if ( v32 < 0 )
  {
    LdrpReleaseTlsEntry(v38, v46);
    if ( v24 )
      LdrpTlsBitmap.SizeOfBitMap -= 8;
  }
  else if ( v34 )
  {
    LdrpActiveThreadCount -= v34;
  }
LABEL_43:
  if ( TlsEntry >= 0 )
    *(_WORD *)(v28 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)v47 )
    RtlFreeHeap(ProcessHeap, 0, Heap);
  if ( v46[0] )
    RtlFreeHeap(ProcessHeap, 0, v46[0]);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v1;
}
