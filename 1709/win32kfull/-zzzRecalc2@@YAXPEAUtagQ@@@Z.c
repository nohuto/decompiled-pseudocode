/*
 * XREFs of ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00CADA4
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00CACF0 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00CAD88 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00CAE68 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z @ 0x1C00CAE8C (-zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzRecalc2(struct tagQ *a1)
{
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *Flink; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagTHREADINFO *v5; // rsi
  _QWORD *i; // rbx
  struct tagTHREADINFO *v7; // rcx
  int v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  do
  {
    v8 = 0;
    RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
    Flink = RecalcHeadPtiListEntry->Flink;
    if ( RecalcHeadPtiListEntry->Flink == RecalcHeadPtiListEntry )
      break;
    do
    {
      RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(Flink);
      v5 = RecalcPtiFromListEntry;
      if ( RecalcPtiFromListEntry && *((struct tagQ **)RecalcPtiFromListEntry + 79) == a1 )
      {
        for ( i = (_QWORD *)gpai; ; i = (_QWORD *)*i )
        {
          if ( !i )
            goto LABEL_13;
          v7 = (struct tagTHREADINFO *)i[1];
          if ( v7 == v5 )
            break;
          if ( (struct tagTHREADINFO *)i[2] == v5 )
            goto LABEL_7;
LABEL_8:
          ;
        }
        v7 = (struct tagTHREADINFO *)i[2];
LABEL_7:
        zzzAddAttachment(v7, a1, &v8);
        goto LABEL_8;
      }
LABEL_13:
      Flink = Flink->Flink;
    }
    while ( Flink != RecalcHeadPtiListEntry );
  }
  while ( v8 );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  zzzEndDeferWinEventNotify();
}
