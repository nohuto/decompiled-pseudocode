/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18006B5D0
 * Callers:
 *     RtlCreateEnvironment @ 0x18006AF80 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18006B51C (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18004BE88 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18006B7B4 (RtlpGetBlockSizeEx.c)
 *     RtlMultiByteToUnicodeN @ 0x18006B810 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x18007B4F0 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  PVOID v5; // rbp
  ULONG v6; // r15d
  int v7; // r12d
  BOOL v8; // ebx
  unsigned __int64 BlockSize; // rdi
  PVOID v10; // rsi
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  _DWORD *EnvBlock; // rax
  bool v15; // cc
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741583;
  if ( (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
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
    EnvBlock = RtlpAllocateEnvBlock(4uLL);
    if ( !EnvBlock )
      return -1073741670;
    *EnvBlock = 0;
    *Environment = EnvBlock;
    return 0;
  }
LABEL_6:
  if ( SourceEnvironment )
  {
    v7 = 0;
    v8 = (Flags & 1) == 0;
    BlockSize = RtlpGetBlockSizeEx(SourceEnvironment, (Flags & 1) == 0);
    goto LABEL_8;
  }
  v8 = 1;
  v7 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v5 = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v5 )
    goto LABEL_22;
  while ( 1 )
  {
LABEL_8:
    v10 = RtlpAllocateEnvBlock(BlockSize);
    if ( !v10 )
      return -1073741670;
    if ( v7 != 1 )
      break;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
    {
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      goto LABEL_22;
    }
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
      break;
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  if ( v8 )
  {
    memmove(v10, v5, BlockSize);
    if ( v7 == 1 )
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_18:
    *Environment = v10;
    return 0;
  }
  if ( BlockSize > 0xFFFFFFFF )
  {
    v12 = -2147483643;
  }
  else
  {
    BytesInMultiByteString = BlockSize >> 1;
    if ( v6 )
      v11 = RtlOemToUnicodeN((PWSTR)v10, BlockSize, 0LL, (PCCH)v5, BytesInMultiByteString);
    else
      v11 = RtlMultiByteToUnicodeN((PWCH)v10, BlockSize, 0LL, (PCSTR)v5, BytesInMultiByteString);
    v12 = v11;
  }
  if ( v12 >= 0 )
    goto LABEL_18;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return v12;
}
