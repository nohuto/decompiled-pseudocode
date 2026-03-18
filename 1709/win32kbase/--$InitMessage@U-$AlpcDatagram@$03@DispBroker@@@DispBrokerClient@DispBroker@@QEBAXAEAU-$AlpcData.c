/*
 * XREFs of ??$InitMessage@U?$AlpcDatagram@$03@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$03@1@@Z @ 0x1C00DBD60
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_4__lambda_5b13fcf0ac89a9371e6db5f2f62461c0___ @ 0x1C00DBC10 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_4__lambda_5b13fcf0ac89a9371e6db5f2f62461c0___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<4>>(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h]

  memset(a2, 0, 0x40uLL);
  a2[10] = 4;
  LODWORD(v5) = *((_DWORD *)gpGdiSharedMemory + 393252);
  HIDWORD(v5) = *((_DWORD *)gpGdiSharedMemory + 393258);
  v3 = *((_DWORD *)gpGdiSharedMemory + 393256);
  *((_QWORD *)a2 + 6) = v5;
  a2[14] = v3;
  result = 4294934528LL;
  *((_WORD *)a2 + 2) = 0x8000;
  *a2 = 4194328;
  return result;
}
