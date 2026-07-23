/*
 * XREFs of RtlDeCommitDebugInfo_0 @ 0x1800D3188
 * Callers:
 *     sub_180077744 @ 0x180077744 (sub_180077744.c)
 *     RtlDeCommitDebugInfo @ 0x1800D2610 (RtlDeCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D2620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D2B90 (RtlQueryProcessLockInformation.c)
 *     sub_1800D56BC @ 0x1800D56BC (sub_1800D56BC.c)
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
