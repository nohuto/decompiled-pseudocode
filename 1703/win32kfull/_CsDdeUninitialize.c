/*
 * XREFs of _CsDdeUninitialize @ 0x1C01189D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0118A10 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall CsDdeUninitialize(__int64 a1)
{
  __int64 v1; // rax

  v1 = HMValidateHandleNoRip(a1, 9);
  if ( v1 )
    xxxDestroyThreadDDEObject(gptiCurrent, v1);
  return 1LL;
}
