/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x18007A610
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180033BC0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCheckForSameCurdir @ 0x18007A798 (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007AA7C (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v1; // rax
  void *ProcessHeap; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int MaximumLength; // ebx
  PVOID Heap; // rax
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v12; // rbx
  unsigned __int16 v13; // ax
  NTSTATUS v14; // esi
  __int64 v15; // rdx
  HANDLE *v16; // rbx
  NTSTATUS v17; // ebx
  __int16 v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v19; // [rsp+32h] [rbp-Eh]
  PVOID BaseAddress; // [rsp+38h] [rbp-8h]
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF
  char v22; // [rsp+80h] [rbp+40h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir(PathName) )
    return 0;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__int64)PathName, v5, v6, v7) )
    return -1073741565;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  Heap = RtlAllocateHeap(ProcessHeap, 0, ProcessParameters->CurrentDirectory.DosPath.MaximumLength);
  BaseAddress = Heap;
  if ( !Heap )
    return -1073741801;
  while ( 1 )
  {
    v18 = 0;
    if ( MaximumLength > 0xFFFF )
    {
      v19 = -1;
      goto LABEL_25;
    }
    v19 = MaximumLength;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          &PathName->Length,
                          MaximumLength,
                          (wchar_t *)Heap,
                          0LL,
                          0LL,
                          (__int64)&v22);
    v12 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v17 = -1073741773;
      goto LABEL_23;
    }
    v13 = v19;
    if ( v12 <= (unsigned __int64)v19 - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    MaximumLength = v12 + 4;
    Heap = RtlAllocateHeap(ProcessHeap, 0, MaximumLength);
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741801;
  }
  v13 = v19;
LABEL_8:
  if ( (unsigned int)v12 > v13 )
  {
    v17 = -1073741562;
LABEL_23:
    Heap = BaseAddress;
LABEL_26:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    return v17;
  }
  if ( (unsigned int)v12 > 0xFFFF )
  {
    Heap = BaseAddress;
    v18 = -1;
LABEL_25:
    v17 = -1073741675;
    goto LABEL_26;
  }
  v18 = v12;
  v14 = RtlpCreateNewDirectoryReference(&v18, v13, &v21);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  if ( v14 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v15 = v21;
    v16 = (HANDLE *)RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v21 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v15 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v15 + 24);
    RtlpCurDirRef = (PVOID)v15;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16, 0xFFFFFFFF) == 1 )
      {
        NtClose(v16[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
      }
    }
  }
  return v14;
}
