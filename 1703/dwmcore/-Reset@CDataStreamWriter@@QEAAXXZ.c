/*
 * XREFs of ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180083340
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18008428C (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800849B8 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x1800832BC (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
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
