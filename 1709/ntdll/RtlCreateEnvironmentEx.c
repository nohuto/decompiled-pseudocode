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

__int64 __fastcall RtlCreateEnvironmentEx(void *Src, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  void *Environment; // rbp
  int v6; // r15d
  int v7; // r12d
  BOOL v8; // ebx
  unsigned __int64 BlockSize; // rdi
  void *v10; // rsi
  int v11; // eax
  int v12; // ebx
  _DWORD *EnvBlock; // rax
  bool v15; // cc
  int v16; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = Src;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3221225713LL;
  if ( (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 && (a3 & 1) == 0 )
    return 3221225713LL;
  if ( Src )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_6;
    return 3221225520LL;
  }
  if ( (a3 & 1) != 0 )
    return 3221225520LL;
  if ( (a3 & 4) != 0 )
  {
LABEL_22:
    EnvBlock = (_DWORD *)RtlpAllocateEnvBlock(4uLL);
    if ( !EnvBlock )
      return 3221225626LL;
    *EnvBlock = 0;
    *a2 = EnvBlock;
    return 0LL;
  }
LABEL_6:
  if ( Src )
  {
    v7 = 0;
    v8 = (a3 & 1) == 0;
    BlockSize = RtlpGetBlockSizeEx(Src, (a3 & 1) == 0);
    goto LABEL_8;
  }
  v8 = 1;
  v7 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_22;
  while ( 1 )
  {
LABEL_8:
    v10 = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !v10 )
      return (unsigned int)-1073741670;
    if ( v7 != 1 )
      break;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
    {
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
      goto LABEL_22;
    }
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
      break;
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
  }
  if ( v8 )
  {
    memmove(v10, Environment, BlockSize);
    if ( v7 == 1 )
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
LABEL_18:
    *a2 = v10;
    return 0LL;
  }
  if ( BlockSize > 0xFFFFFFFF )
  {
    v12 = -2147483643;
  }
  else
  {
    v16 = BlockSize >> 1;
    if ( v6 )
      v11 = RtlOemToUnicodeN((_DWORD)v10, BlockSize, 0, (_DWORD)Environment, v16);
    else
      v11 = RtlMultiByteToUnicodeN((_DWORD)v10, BlockSize, 0, (_DWORD)Environment, v16);
    v12 = v11;
  }
  if ( v12 >= 0 )
    goto LABEL_18;
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
  return (unsigned int)v12;
}
