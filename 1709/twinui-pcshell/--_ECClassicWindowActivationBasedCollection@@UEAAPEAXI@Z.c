/*
 * XREFs of ??_ECClassicWindowActivationBasedCollection@@UEAAPEAXI@Z @ 0x180035F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAA@XZ @ 0x1800394B8 (--1-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CClassicWindowActivationBasedCollection *__fastcall CClassicWindowActivationBasedCollection::`vector deleting destructor'(
        CClassicWindowActivationBasedCollection *this,
        char a2)
{
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
