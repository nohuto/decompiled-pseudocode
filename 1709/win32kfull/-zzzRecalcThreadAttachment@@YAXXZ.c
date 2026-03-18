/*
 * XREFs of ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00CACF0
 * Callers:
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 * Callees:
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00CAD88 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00CADA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00CAE68 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 */

void zzzRecalcThreadAttachment(void)
{
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry && !*((_QWORD *)RecalcPtiFromListEntry + 79) )
    {
      v4 = *((_QWORD *)RecalcPtiFromListEntry + 51);
      if ( *(_DWORD *)(v4 + 384) > 1u )
      {
        v5 = AllocQueue(0LL);
        *((_QWORD *)v3 + 79) = v5;
        if ( !v5 )
          return;
        ++*(_DWORD *)(v5 + 384);
      }
      else
      {
        *((_QWORD *)v3 + 79) = v4;
      }
      zzzRecalc2(*((struct tagQ **)v3 + 79));
    }
  }
}
