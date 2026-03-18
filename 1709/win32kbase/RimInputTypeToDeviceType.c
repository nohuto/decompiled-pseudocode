/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C0008EE0
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0008F10 (RIMRemoveInputOfType.c)
 *     rimCompleteReads @ 0x1C0009CF4 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0009E88 (rimIssueReads.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010DFDC (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 != 2 )
    return (a1 & 0x3C) != 0 ? 2 : 0;
  return result;
}
