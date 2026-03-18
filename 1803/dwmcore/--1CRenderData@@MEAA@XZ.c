/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x1800572D0
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x1800559D0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18005713C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x180087C50 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRenderData::~CRenderData(CRenderData *this)
{
  *(_QWORD *)this = &CRenderData::`vftable';
  CRenderData::DestroyRenderData(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 104);
  CDataStreamWriter::FreeResources((CRenderData *)((char *)this + 56));
  CResource::~CResource(this);
}
