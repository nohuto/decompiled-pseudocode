/*
 * XREFs of ?GetCurrentPadding@CSpatialCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140058A80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::GetCurrentPadding(
        CSpatialCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    memset(a3, 0, sizeof(struct AE_CURRENT_POSITION));
}
