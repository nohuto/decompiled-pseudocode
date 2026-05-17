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

__int64 __fastcall RtlDeCommitDebugInfo_0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 result; // rax

  if ( a3 <= 0xFFFFFFF8 )
  {
    v3 = *(_QWORD *)(a1 + 72) - ((a3 + 7) & 0xFFFFFFF8);
    result = v3 + a1;
    if ( a2 == v3 + a1 )
      *(_QWORD *)(a1 + 72) = v3;
  }
  return result;
}
