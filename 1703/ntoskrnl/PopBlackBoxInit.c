/*
 * XREFs of PopBlackBoxInit @ 0x140825B04
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140144210 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN PopBlackBoxInit()
{
  char **v0; // rbx
  __int64 v1; // rdi
  UCHAR *v2; // r9
  BOOLEAN result; // al

  PopBlackBoxLock = 0LL;
  v0 = &off_14033C5C8;
  v1 = 2LL;
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
