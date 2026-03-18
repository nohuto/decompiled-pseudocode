/*
 * XREFs of ConvertNtStatusToAMLIStatus @ 0x1C004633C
 * Callers:
 *     PerformNativeMethodCall @ 0x1C0045688 (PerformNativeMethodCall.c)
 *     PerformMutexDriverCallbacks @ 0x1C00478C8 (PerformMutexDriverCallbacks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertNtStatusToAMLIStatus(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 == -1073741643 || a1 == -1073741536 )
    return 32773LL;
  result = 32772LL;
  if ( a1 != 259 )
    return a1;
  return result;
}
