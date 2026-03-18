/*
 * XREFs of ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C011F424
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::GetNextFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY **result; // rax

  v3 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 2);
  result = 0LL;
  if ( v3 )
  {
    if ( v3 != a3 )
      return &v3[-1].Blink;
  }
  return result;
}
