/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x18006B51C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x18004BE88 (RtlpAllocateEnvBlock.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x180052F34 (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlCreateEnvironmentEx @ 0x18006B5D0 (RtlCreateEnvironmentEx.c)
 *     RtlpGetBlockSizeEx @ 0x18006B7B4 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  unsigned __int64 BlockSize; // rdi
  void *EnvBlock; // rax
  void *v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  if ( Environment )
  {
    BlockSize = RtlpGetBlockSizeEx(ProcessParameters->Environment, 1LL);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return 3221225626LL;
    memmove(EnvBlock, Environment, BlockSize);
    goto LABEL_4;
  }
  BlockSize = 4LL;
  result = RtlCreateEnvironmentEx(0LL);
  if ( (int)result >= 0 )
  {
    v4 = v6;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = BlockSize;
    memset(RtlpEnvironLookupTable, 0, 0x468uLL);
    RtlpWow64ThunkEnvironment32To64();
    return 0LL;
  }
  return result;
}
