/*
 * XREFs of ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180044E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetEnabledAndHasNotificationStateCallback(
        union wil_details_FeaturePropertyCache *a1,
        void *a2)
{
  unsigned int v2; // r8d

  v2 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 3) == (unsigned __int8)a2 && ((v2 >> 4) & 3) == BYTE1(a2) )
    return 0LL;
  *(_DWORD *)a1 = v2 & 0xFFFFFFCC | (unsigned __int8)a2 & 3 | (16 * (BYTE1(a2) & 3));
  return 1LL;
}
