/*
 * XREFs of ??$InitMessage@U?$AlpcDatagram@$05@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$05@1@@Z @ 0x1C00A02E4
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_8b0911a1175fc1706a50b761e5d54d4a___ @ 0x1C00A01A8 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_8b0911a1175fc1706a50b761e5d54d4a___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<6>>(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h]

  memset(a2, 0, 0x38uLL);
  a2[10] = 6;
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
