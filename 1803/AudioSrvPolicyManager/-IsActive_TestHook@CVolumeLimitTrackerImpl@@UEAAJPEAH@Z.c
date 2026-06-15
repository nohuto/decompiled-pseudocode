/*
 * XREFs of ?IsActive_TestHook@CVolumeLimitTrackerImpl@@UEAAJPEAH@Z @ 0x18002B560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeLimitTrackerImpl::IsActive_TestHook(CVolumeLimitTrackerImpl *this, int *a2)
{
  if ( !a2 )
    return 2147500035LL;
  *a2 = 1;
  return 0LL;
}
