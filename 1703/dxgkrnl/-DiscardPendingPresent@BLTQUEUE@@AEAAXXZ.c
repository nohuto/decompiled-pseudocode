/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C01B4664
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00A047C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C01B5E50 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00A05B0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01B49A8 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C01B5DC0 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  __int64 **v2; // rsi
  __int64 *v3; // rax
  __int64 v4; // rcx
  BLTENTRY *v5; // rbp
  void *v6; // rcx

  KeWaitForSingleObject((char *)this + 8, Executive, 0, 0, 0LL);
  v2 = (__int64 **)((char *)this + 64);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
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
