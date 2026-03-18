/*
 * XREFs of ??$InitMessage@U?$AlpcDatagram@$04@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$04@1@@Z @ 0x1C00A0250
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___ @ 0x1C00A0100 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<5>>(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h]

  memset(a2, 0, 0x38uLL);
  a2[10] = 5;
  LODWORD(v5) = *((_DWORD *)gpGdiSharedMemory + 393252);
  HIDWORD(v5) = *((_DWORD *)gpGdiSharedMemory + 393258);
  v3 = *((_DWORD *)gpGdiSharedMemory + 393256);
  *(_QWORD *)(a2 + 11) = v5;
  a2[13] = v3;
  result = 4294934528LL;
  *((_WORD *)a2 + 2) = 0x8000;
  *a2 = 3670032;
  return result;
}
