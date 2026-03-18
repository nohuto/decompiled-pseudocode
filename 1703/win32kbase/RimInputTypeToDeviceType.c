/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C00953D0
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0092F20 (RIMRemoveInputOfType.c)
 *     rimCompleteReads @ 0x1C0093A64 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0093BF8 (rimIssueReads.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010F07C (RIMDiscoverSpecificDevice.c)
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
