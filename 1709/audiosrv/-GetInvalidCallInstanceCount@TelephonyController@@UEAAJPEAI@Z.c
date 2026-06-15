/*
 * XREFs of ?GetInvalidCallInstanceCount@TelephonyController@@UEAAJPEAI@Z @ 0x1800ED6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TelephonyController::GetInvalidCallInstanceCount(TelephonyController *this, unsigned int *a2)
{
  if ( a2 )
    *a2 = 5;
  return a2 == 0LL ? 0x80004003 : 0;
}
