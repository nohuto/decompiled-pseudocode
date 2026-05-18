/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180004D54
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800048F4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 6) != 0LL;
}
