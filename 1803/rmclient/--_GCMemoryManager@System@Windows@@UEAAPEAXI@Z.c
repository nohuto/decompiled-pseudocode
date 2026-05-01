/*
 * XREFs of ??_GCMemoryManager@System@Windows@@UEAAPEAXI@Z @ 0x180009600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180006908 (-InternalRelease@-$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180006ABC (--3@YAXPEAX@Z.c)
 */

Windows::System::CMemoryManager *__fastcall Windows::System::CMemoryManager::`scalar deleting destructor'(
        Windows::System::CMemoryManager *this,
        char a2)
{
  *((_DWORD *)this + 27) = -1073741823;
  Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
