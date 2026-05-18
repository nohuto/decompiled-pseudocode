/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180004E34
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800049D8 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 6) != 0LL;
}
