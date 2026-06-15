/*
 * XREFs of ?SetStreamFlags@CSpatialCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x14001C350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetStreamFlags(CSpatialCrossProcessBaseEndpoint *this, int a2)
{
  *((_DWORD *)this + 21) = a2;
  return 0LL;
}
