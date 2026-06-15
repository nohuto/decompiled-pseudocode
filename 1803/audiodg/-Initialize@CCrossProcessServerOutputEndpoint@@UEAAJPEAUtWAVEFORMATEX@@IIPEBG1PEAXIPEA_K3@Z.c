/*
 * XREFs of ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140017E90
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003850 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140017080 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::Initialize(
        CCrossProcessServerOutputEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        char *a6,
        _QWORD *a7,
        unsigned int a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10)
{
  return CCrossProcessBaseServerEndpoint::Initialize(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
