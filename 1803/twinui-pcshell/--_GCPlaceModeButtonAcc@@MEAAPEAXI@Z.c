/*
 * XREFs of ??_GCPlaceModeButtonAcc@@MEAAPEAXI@Z @ 0x1802F82E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

CPlaceModeButtonAcc *__fastcall CPlaceModeButtonAcc::`scalar deleting destructor'(CPlaceModeButtonAcc *this, char a2)
{
  *(_QWORD *)this = &CPlaceModeButtonAcc::`vftable'{for `IRawElementProviderSimple'};
  *((_QWORD *)this + 1) = &CPlaceModeButtonAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>'};
  *((_QWORD *)this + 2) = &CPlaceModeButtonAcc::`vftable'{for `IInvokeProvider'};
  *((_QWORD *)this + 3) = &CPlaceModeButtonAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPlaceModeButtonAcc>'};
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)this + 72);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 9) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
