/*
 * XREFs of ?Release@CNaturalAnimationScalarForceAdapater@@UEAAKXZ @ 0x180025270
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180025008 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800DDDC0 (-Release@CInteractionContextWrapper@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CNaturalAnimationScalarForceAdapater::Release(CNaturalAnimationScalarForceAdapater *this)
{
  return CMILRefCountBase::Release((CNaturalAnimationScalarForceAdapater *)((char *)this + 8));
}
