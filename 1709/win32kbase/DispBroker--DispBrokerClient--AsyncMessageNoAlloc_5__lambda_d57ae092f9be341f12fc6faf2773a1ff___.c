/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_d57ae092f9be341f12fc6faf2773a1ff___ @ 0x1C00DBCB8
 * Callers:
 *     ?DispBrokerAsyncRefreshOrientation@@YAJXZ @ 0x1C00DBE90 (-DispBrokerAsyncRefreshOrientation@@YAJXZ.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009BB88 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ??$InitMessage@U?$AlpcDatagram@$04@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$04@1@@Z @ 0x1C00DBDF4 (--$InitMessage@U-$AlpcDatagram@$04@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU-$AlpcData.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00DC1B4 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_d57ae092f9be341f12fc6faf2773a1ff___(
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
    DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<5>>(v2, v6);
    v1 = ZwAlpcSendWaitReceivePort(v3[1], 0LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  DispBroker::DispBrokerClientReference::Assign(v5, 0LL);
  return v1;
}
