/*
 * XREFs of ??_GCMemoryManager@System@Windows@@UEAAPEAXI@Z @ 0x18000A520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000725C (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000A338 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 */

Windows::System::CMemoryManager *__fastcall Windows::System::CMemoryManager::`scalar deleting destructor'(
        Windows::System::CMemoryManager *this,
        char a2)
{
  *((_DWORD *)this + 29) = -1073741823;
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease((__int64 *)this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
