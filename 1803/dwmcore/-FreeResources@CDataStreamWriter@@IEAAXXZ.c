/*
 * XREFs of ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x180087C50
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800572D0 (--1CRenderData@@MEAA@XZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180087D40 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18013F148 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::FreeResources(void **this)
{
  CDataStreamWriter **v2; // rcx
  CDataStreamWriter *v3; // rax

  while ( 1 )
  {
    v2 = (CDataStreamWriter **)*this;
    if ( *this == this )
      break;
    if ( v2[1] != (CDataStreamWriter *)this || (v3 = *v2, *((CDataStreamWriter ***)*v2 + 1) != v2) )
      __fastfail(3u);
    *this = v3;
    *((_QWORD *)v3 + 1) = this;
    operator delete(v2 - 1);
  }
  operator delete(this[2]);
}
