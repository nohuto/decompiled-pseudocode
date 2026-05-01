/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x18015C440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::InitializeTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this,
        struct ITrustedComponentForegroundControl *a2)
{
  struct ITrustedComponentForegroundControl *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ITrustedComponentForegroundControl **)this + 46) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v5);
    v5 = (struct ITrustedComponentForegroundControl *)*((_QWORD *)this + 46);
    *((_QWORD *)this + 46) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  }
  return 0LL;
}
