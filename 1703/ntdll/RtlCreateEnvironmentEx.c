/*
 * XREFs of RtlCreateEnvironmentEx @ 0x180062AD0
 * Callers:
 *     RtlCreateEnvironment @ 0x180062470 (RtlCreateEnvironment.c)
 *     sub_180062A14 @ 0x180062A14 (sub_180062A14.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlMultiByteToUnicodeN @ 0x180043840 (RtlMultiByteToUnicodeN.c)
 *     sub_180063814 @ 0x180063814 (sub_180063814.c)
 *     sub_180063838 @ 0x180063838 (sub_180063838.c)
 *     RtlOemToUnicodeN @ 0x18007C840 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // r14
  char v4; // di
  PVOID v6; // rsi
  int v7; // r12d
  BOOL v8; // r15d
  unsigned __int64 EnvironmentSize; // rbx
  void *v10; // rbp
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  _DWORD *v14; // rax
  bool v15; // cc
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v4 = Flags;
  v6 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 || (((Flags & 5) - 1) & Flags & 5) != 0 || (Flags & 3) == 2 )
    return -1073741583;
  if ( SourceEnvironment )
  {
    if ( (Flags & 4) == 0 )
      goto LABEL_6;
    return -1073741776;
  }
  if ( (Flags & 1) != 0 )
    return -1073741776;
  if ( (Flags & 4) != 0 )
  {
LABEL_22:
    v14 = (_DWORD *)sub_180063814(4LL);
    if ( !v14 )
      return -1073741670;
    *v14 = 0;
    *Environment = v14;
    return 0;
  }
LABEL_6:
  if ( SourceEnvironment )
  {
    v7 = 0;
    v8 = (Flags & 1) == 0;
    EnvironmentSize = sub_180063838(SourceEnvironment, (Flags & 1) == 0);
    goto LABEL_8;
  }
  v8 = 1;
  v7 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v6 = ProcessParameters->Environment;
  EnvironmentSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v6 )
    goto LABEL_22;
  while ( 1 )
  {
LABEL_8:
    v10 = (void *)sub_180063814(EnvironmentSize);
    if ( !v10 )
      return -1073741670;
    if ( v7 != 1 )
      break;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v6 = ProcessParameters->Environment;
    if ( !v6 )
    {
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      goto LABEL_22;
    }
    v15 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
    EnvironmentSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
      break;
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  if ( v8 )
  {
    memmove(v10, v6, EnvironmentSize);
    if ( v7 == 1 )
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_18:
    *Environment = v10;
    return 0;
  }
  if ( EnvironmentSize > 0xFFFFFFFF )
  {
    v12 = -2147483643;
  }
  else
  {
    BytesInMultiByteString = EnvironmentSize >> 1;
    if ( (v4 & 2) != 0 )
      v11 = RtlOemToUnicodeN((PWSTR)v10, EnvironmentSize, 0LL, (PCCH)v6, BytesInMultiByteString);
    else
      v11 = RtlMultiByteToUnicodeN((PWCH)v10, EnvironmentSize, 0LL, (PCSTR)v6, BytesInMultiByteString);
    v12 = v11;
  }
  if ( v12 >= 0 )
    goto LABEL_18;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return v12;
}
