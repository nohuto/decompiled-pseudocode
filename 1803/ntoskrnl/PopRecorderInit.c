/*
 * XREFs of PopRecorderInit @ 0x1408C5424
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140169850 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN PopRecorderInit()
{
  char **v0; // rbx
  __int64 v1; // rdi
  UCHAR *v2; // r9
  BOOLEAN result; // al

  PopBlackBoxLock = 0LL;
  v0 = &off_1403971E8;
  PopBootStatLock = 0LL;
  v1 = 13LL;
  do
  {
    v2 = (UCHAR *)*v0;
    *((_BYTE *)v0 + 60) = 0;
    result = KeRegisterBugCheckReasonCallback(
               (PKBUGCHECK_REASON_CALLBACK_RECORD)(v0 + 2),
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PopBlackBoxBugcheckCallback,
               KbCallbackSecondaryDumpData,
               v2);
    v0 += 13;
    --v1;
  }
  while ( v1 );
  return result;
}
