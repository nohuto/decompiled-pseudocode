/*
 * XREFs of ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180083870
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800C1FBC (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall CDataStreamBlock::GetData(CDataStreamBlock *this)
{
  return (char *)this + 32;
}
