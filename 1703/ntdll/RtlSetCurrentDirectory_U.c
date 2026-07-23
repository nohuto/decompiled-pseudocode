/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x18007ADF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_18003EF60 @ 0x18003EF60 (sub_18003EF60.c)
 *     sub_18007AF78 @ 0x18007AF78 (sub_18007AF78.c)
 *     sub_18007B250 @ 0x18007B250 (sub_18007B250.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v1; // rax
  PVOID ProcessHeap; // r14
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rdi
  unsigned int MaximumLength; // ebx
  PVOID Heap; // rax
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned __int16 v10; // ax
  NTSTATUS v11; // esi
  __int64 v12; // rdx
  HANDLE *v13; // rbx
  NTSTATUS v14; // ebx
  __int16 v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v16; // [rsp+32h] [rbp-Eh]
  PVOID BaseAddress; // [rsp+38h] [rbp-8h]
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF
  char v19; // [rsp+80h] [rbp+40h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)sub_18007AF78(PathName) )
    return 0;
  if ( (unsigned int)sub_18003EF60((__int64)PathName) )
    return -1073741565;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  Heap = RtlAllocateHeap(ProcessHeap, 0, ProcessParameters->CurrentDirectory.DosPath.MaximumLength);
  BaseAddress = Heap;
  if ( !Heap )
    return -1073741801;
  while ( 1 )
  {
    v15 = 0;
    if ( MaximumLength > 0xFFFF )
    {
      v16 = -1;
      goto LABEL_25;
    }
    v16 = MaximumLength;
    v8 = sub_18003E520(&PathName->Length, MaximumLength, (WCHAR *)Heap, 0LL, 0LL, (__int64)&v19);
    v9 = v8;
    if ( !v8 )
    {
      v14 = -1073741773;
      goto LABEL_23;
    }
    v10 = v16;
    if ( v9 <= (unsigned __int64)v16 - 4 )
      goto LABEL_8;
    if ( NtCurrentPeb()->BitField < 0x80u )
      break;
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    MaximumLength = v9 + 4;
    Heap = RtlAllocateHeap(ProcessHeap, 0, MaximumLength);
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741801;
  }
  v10 = v16;
LABEL_8:
  if ( (unsigned int)v9 > v10 )
  {
    v14 = -1073741562;
LABEL_23:
    Heap = BaseAddress;
LABEL_26:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    return v14;
  }
  if ( (unsigned int)v9 > 0xFFFF )
  {
    Heap = BaseAddress;
    v15 = -1;
LABEL_25:
    v14 = -1073741675;
    goto LABEL_26;
  }
  v15 = v9;
  v11 = sub_18007B250(&v15, v10, &v18);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  if ( v11 >= 0 )
  {
    RtlEnterCriticalSection(&stru_18015AE60);
    v12 = v18;
    v13 = (HANDLE *)qword_18015BAB0;
    ProcessParameters->CurrentDirectory.Handle = *(HANDLE *)(v18 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(PWCH *)(v12 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v12 + 24);
    qword_18015BAB0 = (PVOID)v12;
    RtlLeaveCriticalSection(&stru_18015AE60);
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
      {
        ZwClose(v13[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
      }
    }
  }
  return v11;
}
