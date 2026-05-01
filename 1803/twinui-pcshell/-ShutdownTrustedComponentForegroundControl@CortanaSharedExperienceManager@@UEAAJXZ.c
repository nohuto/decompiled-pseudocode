/*
 * XREFs of ?ShutdownTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18015DB30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShutdownTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  return 0LL;
}
