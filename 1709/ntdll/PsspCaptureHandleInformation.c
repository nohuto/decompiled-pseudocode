/*
 * XREFs of PsspCaptureHandleInformation @ 0x18005BD74
 * Callers:
 *     PssNtCaptureSnapshot @ 0x18005C280 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     PsspWalkHandleTable @ 0x18005AA18 (PsspWalkHandleTable.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  ULONG v7; // esi
  int v8; // ebx
  unsigned int *Heap; // rax
  NTSTATUS v10; // esi
  ULONG v11; // r12d
  __int64 v12; // r8
  unsigned int *v13; // [rsp+58h] [rbp-19h] BYREF
  __int64 v14; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  __int64 v16; // [rsp+70h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+7h] BYREF
  __int64 v18; // [rsp+80h] [rbp+Fh] BYREF
  int v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+8Ch] [rbp+1Bh]
  int ProcessInformation; // [rsp+98h] [rbp+27h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+2Fh] BYREF
  unsigned int v23; // [rsp+F0h] [rbp+7Fh] BYREF

  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)20, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    v14 = v7;
    v13 = 0LL;
    result = ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v14, 4096, 4);
    if ( result < 0 )
      return result;
    Heap = v13;
  }
  else
  {
    Heap = (unsigned int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    v13 = Heap;
    if ( !Heap )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessWow64Information|0x20, Heap, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
    {
LABEL_19:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v13);
      return v10;
    }
LABEL_15:
    v14 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v13, &v14, 0x8000LL);
    return v10;
  }
  v11 = ReturnLength >> 2;
  v23 = 0;
  PsspWalkHandleTable(
    (__int64)a2,
    v13,
    ReturnLength >> 2,
    a3,
    (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int))PsspHandleStreamSizeCalculator,
    (__int64)&v23);
  v22 = v23;
  v10 = NtCreateSection(&Handle, 983047LL, &unk_1801185B8, &v22, 4, 0x8000000, 0LL);
  if ( v10 < 0 )
  {
LABEL_18:
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_15;
  }
  v16 = 0LL;
  v14 = 0LL;
  v10 = ZwMapViewOfSection(Handle, -1LL, &v16, 0LL, 0LL, 0LL, &v14, 1, 0, 4);
  if ( v10 < 0 )
  {
    NtClose(Handle);
    goto LABEL_18;
  }
  v18 = v16;
  v23 = v14;
  v19 = v14;
  v20 = 0LL;
  PsspWalkHandleTable(
    (__int64)a2,
    v13,
    v11,
    a3,
    (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int))PsspHandleDumper,
    (__int64)&v18);
  NtUnmapViewOfSection(-1LL, v16, v12);
  if ( v8 )
  {
    v14 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v13, &v14, 0x8000LL);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v13);
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v20);
  *(_QWORD *)(a1 + 968) = (unsigned int)v20;
  *(_QWORD *)(a1 + 976) = Handle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
