/*
 * XREFs of ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00A0778
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___ @ 0x1C00A0100 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_8b0911a1175fc1706a50b761e5d54d4a___ @ 0x1C00A01A8 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_8b0911a1175fc1706a50b761e5d54d4a___.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00A0378 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00A03FC (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00A0720 (-IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 */

void **__fastcall DispBroker::DispBrokerClient::ReferencePort(
        struct DispBroker::DispBrokerClientHandle **a1,
        void **a2)
{
  *a2 = 0LL;
  DispBroker::DispBrokerClientReference::Assign(a2, 0LL);
  ExAcquireResourceSharedLite(DispBroker::DispBrokerClient::s_pSessionLock, 1u);
  if ( DispBroker::DispBrokerClient::IsValid((DispBroker::DispBrokerClient *)a1)
    || (ExReleaseResourceLite(DispBroker::DispBrokerClient::s_pSessionLock),
        ExAcquireResourceExclusiveLite(DispBroker::DispBrokerClient::s_pSessionLock, 1u),
        DispBroker::DispBrokerClient::EnsureConnected((DispBroker::DispBrokerClient *)a1) >= 0) )
  {
    DispBroker::DispBrokerClientReference::Assign(a2, *a1);
  }
  ExReleaseResourceLite(DispBroker::DispBrokerClient::s_pSessionLock);
  return a2;
}
