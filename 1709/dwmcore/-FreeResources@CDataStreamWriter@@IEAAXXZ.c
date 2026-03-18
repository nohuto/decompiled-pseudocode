/*
 * XREFs of ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18000FC3C
 * Callers:
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18000F8DC (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x18001E558 (--1CRenderData@@MEAA@XZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18011C41C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
    WPF::ProcessHeapImpl::Free(v2 - 1);
  }
  WPF::ProcessHeapImpl::Free(this[2]);
}
