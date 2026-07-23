/*
 * XREFs of RtlDeCommitDebugInfo_0 @ 0x1800906CC
 * Callers:
 *     sub_180067988 @ 0x180067988 (sub_180067988.c)
 *     RtlDeCommitDebugInfo @ 0x1800D9610 (RtlDeCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D9620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D97B0 (RtlQueryProcessLockInformation.c)
 *     sub_1800DBEFC @ 0x1800DBEFC (sub_1800DBEFC.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlDeCommitDebugInfo_0(PRTL_DEBUG_INFORMATION Buffer, PVOID p, SIZE_T Size)
{
  SIZE_T v3; // r8

  if ( (unsigned int)Size <= 0xFFFFFFF8 )
  {
    v3 = Buffer->OffsetFree - (((_DWORD)Size + 7) & 0xFFFFFFF8);
    if ( p == (char *)Buffer + v3 )
      Buffer->OffsetFree = v3;
  }
}
