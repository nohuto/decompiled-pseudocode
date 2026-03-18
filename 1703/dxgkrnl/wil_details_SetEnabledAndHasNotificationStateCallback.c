/*
 * XREFs of wil_details_SetEnabledAndHasNotificationStateCallback @ 0x1C0035860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetEnabledAndHasNotificationStateCallback(unsigned int *a1, __int16 a2)
{
  unsigned int v2; // r8d

  v2 = *a1;
  if ( (*a1 & 3) == (unsigned __int8)a2 && ((v2 >> 4) & 3) == HIBYTE(a2) )
    return 0LL;
  *a1 = v2 & 0xFFFFFFCC | a2 & 3 | (16 * (HIBYTE(a2) & 3));
  return 1LL;
}
