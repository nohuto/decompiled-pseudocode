/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18004BA60
 * Callers:
 *     RtlCreateEnvironment @ 0x18004B3D0 (RtlCreateEnvironment.c)
 *     sub_18004B9A4 @ 0x18004B9A4 (sub_18004B9A4.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18004C724 @ 0x18004C724 (sub_18004C724.c)
 *     sub_18004C748 @ 0x18004C748 (sub_18004C748.c)
 *     RtlMultiByteToUnicodeN @ 0x18004C7B0 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x1800797A0 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // r14
  PVOID v5; // rsi
  ULONG v6; // r12d
  ULONG v7; // ebp
  ULONG v8; // r8d
  unsigned int v9; // ebp
  int v10; // r15d
  unsigned __int64 EnvironmentSize; // rbx
  void *v12; // rdi
  NTSTATUS v13; // eax
  NTSTATUS v14; // ebx
  _DWORD *v16; // rax
  bool v17; // cc
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 || (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = Flags & 2;
  if ( (Flags & 2) == 0 )
  {
    v7 = Flags & 1;
    goto LABEL_5;
  }
  v7 = Flags & 1;
  if ( (Flags & 1) == 0 )
    return -1073741583;
LABEL_5:
  if ( !SourceEnvironment )
  {
    v7 = Flags & 1;
    if ( (Flags & 1) == 0 )
    {
      v8 = Flags & 4;
      goto LABEL_7;
    }
    return -1073741776;
  }
  v8 = Flags & 4;
  if ( v8 )
    return -1073741776;
LABEL_7:
  if ( v8 )
    goto LABEL_25;
  if ( SourceEnvironment )
  {
    v9 = v7 ^ 1;
    v10 = 0;
    EnvironmentSize = sub_18004C748(SourceEnvironment, v9);
    goto LABEL_10;
  }
  v9 = 1;
  v10 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v5 = ProcessParameters->Environment;
  EnvironmentSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v5 )
    goto LABEL_25;
  while ( 1 )
  {
LABEL_10:
    v12 = (void *)sub_18004C724(EnvironmentSize);
    if ( !v12 )
      return -1073741670;
    if ( v10 != 1 )
      goto LABEL_12;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
      break;
    v17 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
    EnvironmentSize = ProcessParameters->EnvironmentSize;
    if ( v17 )
    {
LABEL_12:
      if ( v9 == 1 )
      {
        memmove(v12, v5, EnvironmentSize);
        if ( v10 == 1 )
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_20:
        *Environment = v12;
        return 0;
      }
      if ( EnvironmentSize > 0xFFFFFFFF )
      {
        v14 = -2147483643;
      }
      else
      {
        BytesInMultiByteString = EnvironmentSize >> 1;
        if ( v6 )
          v13 = RtlOemToUnicodeN((PWSTR)v12, EnvironmentSize, 0LL, (PCCH)v5, BytesInMultiByteString);
        else
          v13 = RtlMultiByteToUnicodeN((PWCH)v12, EnvironmentSize, 0LL, (PCSTR)v5, BytesInMultiByteString);
        v14 = v13;
      }
      if ( v14 >= 0 )
        goto LABEL_20;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      return v14;
    }
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
LABEL_25:
  v16 = (_DWORD *)sub_18004C724(4LL);
  if ( !v16 )
    return -1073741670;
  *v16 = 0;
  *Environment = v16;
  return 0;
}
