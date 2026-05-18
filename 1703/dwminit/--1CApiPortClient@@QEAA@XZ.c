/*
 * XREFs of ??1CApiPortClient@@QEAA@XZ @ 0x18000458C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_PortClient__ @ 0x180007710 (_dynamic_atexit_destructor_for__g_PortClient__.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800045D0 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x180004B4C (-ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ.c)
 */

void __fastcall CApiPortClient::~CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  CApiPortClient *v2; // rcx

  EnterCriticalSection(&CriticalSection);
  CApiPortClient::Disconnect(v1);
  CApiPortClient::ReleaseExtraDataSection(v2);
  byte_18000C768 = 1;
  LeaveCriticalSection(&CriticalSection);
  DeleteCriticalSection(&CriticalSection);
}
