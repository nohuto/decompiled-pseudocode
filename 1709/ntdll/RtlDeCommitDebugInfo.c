/*
 * XREFs of RtlDeCommitDebugInfo @ 0x1800D84A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl RtlDeCommitDebugInfo(PRTL_DEBUG_INFORMATION Buffer, PVOID p, SIZE_T Size)
{
  RtlpDeCommitQueryDebugInfo((__int64)Buffer, (__int64)p, Size);
}
