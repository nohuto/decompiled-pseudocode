/*
 * XREFs of ??0CApiPortClient@@QEAA@I@Z @ 0x18000462C
 * Callers:
 *     sub_1800011B0 @ 0x1800011B0 (sub_1800011B0.c)
 * Callees:
 *     <none>
 */

CApiPortClient *__fastcall CApiPortClient::CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *result; // rax

  g_PortClient = 0;
  BaseAddress = 0LL;
  *(_OWORD *)&hObject = 0LL;
  InitializeCriticalSection(&CriticalSection);
  result = (CApiPortClient *)&g_PortClient;
  byte_18000F7D8 = 0;
  return result;
}
