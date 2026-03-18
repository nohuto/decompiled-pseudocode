/*
 * XREFs of ?PostPresent@CRemoteAppRenderTarget@@UEAAJ_N0@Z @ 0x18015C970
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C2374 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::PostPresent(CRemoteAppRenderTarget *this)
{
  ReleaseInterface<CDisplay>((__int64 *)this + 16);
  return 0LL;
}
