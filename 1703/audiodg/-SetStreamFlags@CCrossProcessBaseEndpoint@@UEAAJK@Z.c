/*
 * XREFs of ?SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x14001BB10
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140018480 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseEndpoint::SetStreamFlags(CCrossProcessBaseEndpoint *this, int a2)
{
  *((_DWORD *)this + 40) = a2;
  return 0LL;
}
