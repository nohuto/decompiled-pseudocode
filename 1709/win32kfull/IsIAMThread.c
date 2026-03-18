/*
 * XREFs of IsIAMThread @ 0x1C00D63C0
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006BF8 (IsAdaptiveQueueDetachExempted.c)
 *     NtUserSetActivationFilter @ 0x1C000C1D0 (NtUserSetActivationFilter.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D6230 (_RegisterWindowArrangementCallout.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01C6D00 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 432);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 288) == a1;
  return result;
}
