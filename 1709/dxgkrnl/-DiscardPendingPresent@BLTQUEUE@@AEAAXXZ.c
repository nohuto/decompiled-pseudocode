/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C007EB84
 * Callers:
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C007EC00 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EDD8 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0105A38 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C007F5B0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C007F81C (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C016F9E4 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  char *v2; // rsi
  __int64 *v3; // rax
  __int64 v4; // rcx
  BLTENTRY *v5; // rbp
  void *v6; // rcx

  KeWaitForSingleObject((char *)this + 8, Executive, 0, 0, 0LL);
  v2 = (char *)this + 64;
  while ( *(char **)v2 != v2 )
  {
    v3 = *(__int64 **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    v5 = (BLTENTRY *)(v3 - 1);
    *(_QWORD *)(v4 + 8) = v2;
    v6 = (void *)v3[4];
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *((_QWORD *)v5 + 5) = 0LL;
    }
    BLTENTRY::ReleasePresentDoneEvent(v5, 1u);
    BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)this + 5, v5);
  }
  if ( *((_BYTE *)this + 405) || *((_BYTE *)this + 406) )
  {
    *(_WORD *)((char *)this + 405) = 0;
    BLTQUEUE::FinishCommand(this, 0);
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 8), 0);
}
