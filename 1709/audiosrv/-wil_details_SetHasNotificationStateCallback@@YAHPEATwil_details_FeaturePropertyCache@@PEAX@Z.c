/*
 * XREFs of ?wil_details_SetHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18008D610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetHasNotificationStateCallback(union wil_details_FeaturePropertyCache *a1, void *a2)
{
  __int64 result; // rax

  if ( ((*(_DWORD *)a1 >> 4) & 3) == (unsigned __int8)a2 )
    return 0LL;
  result = 1LL;
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (16 * (unsigned __int8)a2)) & 0x30;
  return result;
}
