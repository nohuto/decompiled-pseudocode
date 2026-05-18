/*
 * XREFs of sub_1800011B0 @ 0x1800011B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CApiPortClient@@QEAA@I@Z @ 0x18000462C (--0CApiPortClient@@QEAA@I@Z.c)
 */

int __fastcall sub_1800011B0(CApiPortClient *a1, unsigned int a2)
{
  CApiPortClient::CApiPortClient(a1, a2);
  return atexit((void (__cdecl *)())CApiPortClient::~CApiPortClient);
}
