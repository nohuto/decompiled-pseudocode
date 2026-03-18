/*
 * XREFs of ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180087D40
 * Callers:
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18005713C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x180057C30 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x180087C50 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void __fastcall CDataStreamWriter::Reset(void **this)
{
  CDataStreamWriter::FreeResources(this);
  this[1] = this;
  *this = this;
  this[2] = 0LL;
  this[3] = 0LL;
  this[4] = 0LL;
  *((_DWORD *)this + 10) = 0;
}
