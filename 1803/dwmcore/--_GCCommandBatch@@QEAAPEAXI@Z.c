/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18013F148
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180088438 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180143A34 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x180087C50 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void **__fastcall CCommandBatch::`scalar deleting destructor'(void **this)
{
  CDataStreamWriter::FreeResources(this);
  operator delete(this);
  return this;
}
