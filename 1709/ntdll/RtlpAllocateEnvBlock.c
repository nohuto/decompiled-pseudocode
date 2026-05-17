/*
 * XREFs of RtlpAllocateEnvBlock @ 0x18004BE88
 * Callers:
 *     RtlSetEnvironmentVar @ 0x18004B530 (RtlSetEnvironmentVar.c)
 *     RtlpInitEnvironmentBlock @ 0x18006B51C (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18006B5D0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentStrings @ 0x180085980 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateEnvBlock(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
