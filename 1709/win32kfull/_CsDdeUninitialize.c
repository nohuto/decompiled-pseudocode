/*
 * XREFs of _CsDdeUninitialize @ 0x1C01217E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0121820 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall CsDdeUninitialize(__int64 a1)
{
  __int64 v1; // rax

  v1 = HMValidateHandleNoRip(a1, 9);
  if ( v1 )
    xxxDestroyThreadDDEObject(gptiCurrent, v1);
  return 1LL;
}
