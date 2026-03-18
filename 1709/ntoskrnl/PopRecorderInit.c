/*
 * XREFs of PopRecorderInit @ 0x140849820
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14014B6D0 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN PopRecorderInit()
{
  char **v0; // rbx
  __int64 v1; // rdi
  UCHAR *v2; // r9
  BOOLEAN result; // al

  PopBlackBoxLock = 0LL;
  v0 = &off_140354CA8;
  PopBootStatLock = 0LL;
  v1 = 6LL;
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
