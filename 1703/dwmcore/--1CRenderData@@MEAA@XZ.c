/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x180084A2C
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x180083B60 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x1800832BC (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800849B8 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 */

void __fastcall CRenderData::~CRenderData(void **this)
{
  *this = &CRenderData::`vftable';
  CRenderData::DestroyRenderData((CRenderData *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  CDataStreamWriter::FreeResources(this + 7);
  CResource::~CResource((CResource *)this);
}
