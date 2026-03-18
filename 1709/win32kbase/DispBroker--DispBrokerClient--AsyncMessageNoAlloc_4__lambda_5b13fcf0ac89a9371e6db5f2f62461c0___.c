/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_4__lambda_5b13fcf0ac89a9371e6db5f2f62461c0___ @ 0x1C00DBC10
 * Callers:
 *     ?DispBrokerAsyncRotationLockToggleKey@@YAJXZ @ 0x1C00DBEB0 (-DispBrokerAsyncRotationLockToggleKey@@YAJXZ.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009BB88 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ??$InitMessage@U?$AlpcDatagram@$03@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$03@1@@Z @ 0x1C00DBD60 (--$InitMessage@U-$AlpcDatagram@$03@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU-$AlpcData.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00DC1B4 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_4__lambda_5b13fcf0ac89a9371e6db5f2f62461c0___(
        __int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  HANDLE *v3; // rbx
  HANDLE *v5[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v6[64]; // [rsp+50h] [rbp-58h] BYREF

  v1 = -1073741823;
  DispBroker::DispBrokerClient::ReferencePort(a1, v5);
  v3 = v5[0];
  if ( v5[0] )
  {
    DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<4>>(v2, v6);
    v1 = ZwAlpcSendWaitReceivePort(v3[1], 0LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  DispBroker::DispBrokerClientReference::Assign(v5, 0LL);
  return v1;
}
