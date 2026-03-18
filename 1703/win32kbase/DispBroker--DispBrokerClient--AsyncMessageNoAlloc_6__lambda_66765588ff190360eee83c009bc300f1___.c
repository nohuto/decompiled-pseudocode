/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_66765588ff190360eee83c009bc300f1___ @ 0x1C00D58E4
 * Callers:
 *     ?DispBrokerAsyncRefreshOrientation@@YAJXZ @ 0x1C00D59C0 (-DispBrokerAsyncRefreshOrientation@@YAJXZ.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009252C (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00D5A94 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_66765588ff190360eee83c009bc300f1___(
        __int64 a1)
{
  unsigned int v1; // edi
  _QWORD v3[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v4; // [rsp+98h] [rbp+18h]
  HANDLE *v5; // [rsp+A0h] [rbp+20h] BYREF

  v1 = -1073741823;
  DispBroker::DispBrokerClient::ReferencePort(a1, &v5);
  if ( v5 )
  {
    memset(v3, 0, 0x38uLL);
    LODWORD(v3[5]) = 6;
    LODWORD(v4) = *((_DWORD *)gpGdiSharedMemory + 393252);
    HIDWORD(v4) = *((_DWORD *)gpGdiSharedMemory + 393256);
    v3[6] = v4;
    WORD2(v3[0]) = 0x8000;
    LODWORD(v3[0]) = 3670032;
    v1 = ZwAlpcSendWaitReceivePort(v5[1], 0LL, v3, 0LL);
  }
  DispBroker::DispBrokerClientReference::Assign(&v5, 0LL);
  return v1;
}
