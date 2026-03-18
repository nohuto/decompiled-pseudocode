/*
 * XREFs of ??$InitMessage@U?$AlpcDatagram@$04@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$04@1@@Z @ 0x1C00DBDF4
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_d57ae092f9be341f12fc6faf2773a1ff___ @ 0x1C00DBCB8 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_d57ae092f9be341f12fc6faf2773a1ff___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<5>>(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h]

  memset(a2, 0, 0x40uLL);
  a2[10] = 5;
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
