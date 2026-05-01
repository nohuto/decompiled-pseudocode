/*
 * XREFs of ??_ECRemoteTask@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180105670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801084E8 (-InternalRelease@-$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAA.c)
 */

Windows::Internal::ComTaskPool::CRemoteTask *__fastcall Windows::Internal::ComTaskPool::CRemoteTask::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CRemoteTask *this,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CRemoteReleaseStub>::InternalRelease((char *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
