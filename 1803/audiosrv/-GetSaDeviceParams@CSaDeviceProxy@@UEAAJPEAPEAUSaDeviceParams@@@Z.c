/*
 * XREFs of ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x18001F190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaDeviceProxy::GetSaDeviceParams(const struct SaDeviceParams **this, struct SaDeviceParams **a2)
{
  return CloneSaDeviceParams(this[5], a2);
}
