/*
 * XREFs of ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x1400535E8
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140053D00 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EED0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AE_ALLOCATE_SAFEMULT(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        __int64 (__fastcall *a4)(unsigned __int64, void *))
{
  if ( is_mul_ok(1uLL, a2) )
    return a4(a2, a3);
  else
    return 0LL;
}
