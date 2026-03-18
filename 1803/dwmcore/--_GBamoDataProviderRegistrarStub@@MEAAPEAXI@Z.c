/*
 * XREFs of ??_GBamoDataProviderRegistrarStub@@MEAAPEAXI@Z @ 0x1801683B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

BamoDataProviderRegistrarStub *__fastcall BamoDataProviderRegistrarStub::`scalar deleting destructor'(
        BamoDataProviderRegistrarStub *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 7);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
