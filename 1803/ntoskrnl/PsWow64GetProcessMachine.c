/*
 * XREFs of PsWow64GetProcessMachine @ 0x1405B8AE0
 * Callers:
 *     PsWow64GetSupportedArchitectures @ 0x1400B9EB0 (PsWow64GetSupportedArchitectures.c)
 *     RtlpWalkFrameChain @ 0x14012B860 (RtlpWalkFrameChain.c)
 *     KeVerifyContextRecord @ 0x1401322F4 (KeVerifyContextRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1064);
  if ( !v1 )
    return 34404LL;
  result = *(unsigned __int16 *)(v1 + 8);
  if ( !(_WORD)result )
    return 34404LL;
  return result;
}
