/*
 * XREFs of ?GetCurrentPadding@CSpatialCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140058DA0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::GetCurrentPadding(
        CSpatialCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    memset_0(a3, 0, sizeof(struct AE_CURRENT_POSITION));
}
