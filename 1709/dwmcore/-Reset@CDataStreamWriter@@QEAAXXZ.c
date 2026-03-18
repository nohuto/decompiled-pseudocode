/*
 * XREFs of ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18000F8DC
 * Callers:
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18001E47C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18001EF50 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18000FC3C (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void __fastcall CDataStreamWriter::Reset(CDataStreamWriter *this)
{
  CDataStreamWriter::FreeResources(this);
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
