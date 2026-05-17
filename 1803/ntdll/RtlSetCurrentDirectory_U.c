/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x180076700
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_18003E0C0 @ 0x18003E0C0 (sub_18003E0C0.c)
 *     sub_180076898 @ 0x180076898 (sub_180076898.c)
 *     sub_180076B04 @ 0x180076B04 (sub_180076B04.c)
 *     sub_180076B90 @ 0x180076B90 (sub_180076B90.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall RtlSetCurrentDirectory_U(unsigned __int16 *a1)
{
  struct _PEB *v1; // rax
  __int64 ProcessHeap; // r14
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  unsigned int MaximumLength; // edi
  __int64 i; // r8
  int v8; // ebx
  unsigned int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // ax
  int v12; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int16 v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v16; // [rsp+32h] [rbp-Eh] BYREF
  _WORD *Heap; // [rsp+38h] [rbp-8h]
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF
  char v19; // [rsp+80h] [rbp+40h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = (__int64)v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)sub_180076898() )
    return 0LL;
  if ( (unsigned int)sub_18003E0C0((__int64)a1) )
    return 3221225731LL;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = (unsigned int)(v10 + 4) )
  {
    Heap = (_WORD *)RtlAllocateHeap(ProcessHeap, 0, i);
    if ( !Heap )
      return 3221225495LL;
    v15 = 0;
    v8 = sub_180076B04(MaximumLength, &v16);
    if ( v8 < 0 )
      goto LABEL_22;
    v9 = sub_18003D640(a1, MaximumLength, Heap, 0LL, 0LL, (__int64)&v19);
    v10 = v9;
    if ( !v9 )
    {
      v8 = -1073741773;
      goto LABEL_22;
    }
    v11 = v16;
    if ( v10 <= (unsigned __int64)v16 - 4 )
      goto LABEL_9;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, (unsigned __int64)Heap);
    MaximumLength = v10 + 4;
  }
  v11 = v16;
LABEL_9:
  if ( (unsigned int)v10 > v11 )
  {
    v8 = -1073741562;
    goto LABEL_22;
  }
  v8 = sub_180076B04((unsigned int)v10, &v15);
  if ( v8 < 0 )
  {
LABEL_22:
    RtlFreeHeap(ProcessHeap, 0, (unsigned __int64)Heap);
    return (unsigned int)v8;
  }
  v12 = sub_180076B90(&v15, v16, &v18);
  RtlFreeHeap(ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v12 >= 0 )
  {
    RtlEnterCriticalSection((__int64)&unk_18015BE80);
    v13 = v18;
    v14 = qword_18015CB10;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v18 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v13 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v13 + 24);
    qword_18015CB10 = v13;
    RtlLeaveCriticalSection((__int64)&unk_18015BE80);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
      {
        ZwClose(*(_QWORD *)(v14 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
      }
    }
  }
  return (unsigned int)v12;
}
