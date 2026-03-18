/*
 * XREFs of ??_EBamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801683F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::BamoDataProviderRegistrarStubImpl *__fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::`vector deleting destructor'(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
