/*
 * XREFs of sub_18004C724 @ 0x18004C724
 * Callers:
 *     sub_18004B9A4 @ 0x18004B9A4 (sub_18004B9A4.c)
 *     RtlCreateEnvironmentEx @ 0x18004BA60 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004BDF0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180080C50 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004C724(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
