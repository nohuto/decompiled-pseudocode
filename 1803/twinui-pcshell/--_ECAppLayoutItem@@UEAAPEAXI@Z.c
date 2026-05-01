/*
 * XREFs of ??_ECAppLayoutItem@@UEAAPEAXI@Z @ 0x180314F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

CWinRTApplicationView **__fastcall CAppLayoutItem::`vector deleting destructor'(CWinRTApplicationView **this, char a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(this + 6);
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
