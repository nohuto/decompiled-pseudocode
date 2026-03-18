/*
 * XREFs of ?Release@CNaturalAnimationScalarForceAdapater@@UEAAKXZ @ 0x1800B7BA0
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B7B24 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800C6740 (-Release@CInteractionContextWrapper@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimationScalarForceAdapater::Release(CNaturalAnimationScalarForceAdapater *this)
{
  return CMILRefCountBase::Release((CNaturalAnimationScalarForceAdapater *)((char *)this + 8));
}
