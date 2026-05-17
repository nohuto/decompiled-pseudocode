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
