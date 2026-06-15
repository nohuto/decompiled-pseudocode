/*
 * XREFs of ?InternalRelease@?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D67DC
 * Callers:
 *     ??_ECRemoteTask@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D5200 (--_ECRemoteTask@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ?Run@CRemoteTask@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1800D73C0 (-Run@CRemoteTask@ComTaskPool@Internal@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x1800D73E8 (-RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CRemoteReleaseStub>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 16LL))(v1 + 16);
  }
  return result;
}
