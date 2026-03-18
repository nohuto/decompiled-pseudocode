/*
 * XREFs of ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00B6550
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00B649C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00B6534 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00B663C (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z @ 0x1C00B6660 (-zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z.c)
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
  int v8; // r11d
  int v9; // [rsp+48h] [rbp+10h] BYREF
  char v10; // [rsp+50h] [rbp+18h] BYREF

  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  do
  {
    v9 = 0;
    RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
    Flink = RecalcHeadPtiListEntry->Flink;
    if ( RecalcHeadPtiListEntry->Flink == RecalcHeadPtiListEntry )
      break;
    do
    {
      RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(Flink);
      v5 = RecalcPtiFromListEntry;
      if ( RecalcPtiFromListEntry && *((struct tagQ **)RecalcPtiFromListEntry + 72) == a1 )
      {
        for ( i = (_QWORD *)gpai; ; i = (_QWORD *)*i )
        {
          if ( !i )
            goto LABEL_13;
          v7 = (struct tagTHREADINFO *)i[1];
          if ( v7 == v5 )
            goto LABEL_19;
          if ( (struct tagTHREADINFO *)i[2] == v5 )
            break;
LABEL_8:
          ;
        }
        if ( v7 == v5 )
LABEL_19:
          v7 = (struct tagTHREADINFO *)i[2];
        zzzAddAttachment(v7, a1, &v9);
        goto LABEL_8;
      }
LABEL_13:
      Flink = Flink->Flink;
    }
    while ( Flink != RecalcHeadPtiListEntry );
  }
  while ( v9 );
  v8 = -1;
  if ( !v10 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v10);
  }
  gdwDeferWinEvent += v8;
  if ( !(v8 + gdwDeferWinEvent) )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
}
