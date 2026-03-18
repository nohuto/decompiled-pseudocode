/*
 * XREFs of ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00D5A94
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_99b5529a19237f48c5256b69adb44b46___ @ 0x1C00D5810 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_99b5529a19237f48c5256b69adb44b46___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_66765588ff190360eee83c009bc300f1___ @ 0x1C00D58E4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_66765588ff190360eee83c009bc300f1___.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009252C (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00D59F4 (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00D5A3C (-IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 */

HANDLE **__fastcall DispBroker::DispBrokerClient::ReferencePort(HANDLE **a1, HANDLE **a2)
{
  *a2 = 0LL;
  DispBroker::DispBrokerClientReference::Assign(a2, 0LL);
  ExAcquireResourceSharedLite(DispBroker::DispBrokerClient::s_pSessionLock, 1u);
  if ( DispBroker::DispBrokerClient::IsValid((DispBroker::DispBrokerClient *)a1)
    || (ExReleaseResourceLite(DispBroker::DispBrokerClient::s_pSessionLock),
        ExAcquireResourceExclusiveLite(DispBroker::DispBrokerClient::s_pSessionLock, 1u),
        (int)DispBroker::DispBrokerClient::EnsureConnected((DispBroker::DispBrokerClient *)a1) >= 0) )
  {
    DispBroker::DispBrokerClientReference::Assign(a2, *a1);
  }
  ExReleaseResourceLite(DispBroker::DispBrokerClient::s_pSessionLock);
  return a2;
}
