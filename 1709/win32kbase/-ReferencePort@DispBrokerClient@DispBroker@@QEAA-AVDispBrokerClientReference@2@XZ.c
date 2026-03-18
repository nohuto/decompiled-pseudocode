/*
 * XREFs of ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00DC1B4
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_4__lambda_5b13fcf0ac89a9371e6db5f2f62461c0___ @ 0x1C00DBC10 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_4__lambda_5b13fcf0ac89a9371e6db5f2f62461c0___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_d57ae092f9be341f12fc6faf2773a1ff___ @ 0x1C00DBCB8 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_d57ae092f9be341f12fc6faf2773a1ff___.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009BB88 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00DBECC (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00DC15C (-IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 */

HANDLE **__fastcall DispBroker::DispBrokerClient::ReferencePort(HANDLE **a1, HANDLE **a2)
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
