/*
 * XREFs of ?Run@CRemoteTask@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18010AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801084E8 (-InternalRelease@-$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAA.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CRemoteTask::Run(Windows::Internal::ComTaskPool::CRemoteTask *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 24);
  *(_BYTE *)(*v2 + 40) = 1;
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CRemoteReleaseStub>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 2);
}
