/*
 * XREFs of ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180083850
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?GetRemainingByteCount@CDataStreamWriter@@IEAAIXZ @ 0x180082FEC (-GetRemainingByteCount@CDataStreamWriter@@IEAAIXZ.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x180083040 (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180083414 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800C1FBC (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CDataStreamBlock::GetWrittenSize(CDataStreamBlock *this)
{
  return (unsigned int *)((char *)this + 28);
}
