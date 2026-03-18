/*
 * XREFs of ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025C1C
 * Callers:
 *     VidSchiUnwaitAllContexts @ 0x1C002A4FC (VidSchiUnwaitAllContexts.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000D6E4 (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchiUnwaitAllContextsInList(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rcx

  while ( 1 )
  {
    Flink = a1->Flink;
    if ( a1->Flink == a1 )
      break;
    LODWORD(Flink[10].Blink) = 0;
    VidSchiUnwaitContext((__int64)&Flink[-1].Blink, 0x630Bu);
  }
}
