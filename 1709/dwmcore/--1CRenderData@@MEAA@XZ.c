/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x18001E558
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18001D4B0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18000FC3C (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18001E47C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRenderData::~CRenderData(void **this)
{
  *this = &CRenderData::`vftable';
  CRenderData::DestroyRenderData((CRenderData *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  CDataStreamWriter::FreeResources(this + 7);
  CResource::~CResource((CResource *)this);
}
