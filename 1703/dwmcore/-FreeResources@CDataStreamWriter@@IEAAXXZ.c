/*
 * XREFs of ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x1800832BC
 * Callers:
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180083340 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x180084A2C (--1CRenderData@@MEAA@XZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180133304 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::FreeResources(void **this)
{
  CDataStreamWriter *v2; // rcx
  CDataStreamWriter **v3; // rax

  while ( 1 )
  {
    v2 = (CDataStreamWriter *)*this;
    if ( *this == this )
      break;
    v3 = *(CDataStreamWriter ***)v2;
    if ( *((void ***)v2 + 1) != this || v3[1] != v2 )
      __fastfail(3u);
    *this = v3;
    v3[1] = (CDataStreamWriter *)this;
    WPF::ProcessHeapImpl::Free((char *)v2 - 8);
  }
  WPF::ProcessHeapImpl::Free(this[2]);
}
