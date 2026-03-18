/*
 * XREFs of HMUnlockObject @ 0x1C004A168
 * Callers:
 *     HMDestroyUnlockedObject @ 0x1C0041FC0 (HMDestroyUnlockedObject.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0049030 (HMUnlockObjectInternal.c)
 */

_DWORD *__fastcall HMUnlockObject(_DWORD *a1)
{
  if ( a1[2]-- == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
