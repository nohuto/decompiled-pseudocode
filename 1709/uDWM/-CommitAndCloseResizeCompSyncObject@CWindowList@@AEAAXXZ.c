/*
 * XREFs of ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x180065F1C
 * Callers:
 *     ??1CWindowList@@UEAA@XZ @ 0x180079BBC (--1CWindowList@@UEAA@XZ.c)
 *     ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x18007CAE0 (-SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::CommitAndCloseResizeCompSyncObject(CWindowList *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 72) )
  {
    NtDCompositionCommitSynchronizationObject();
    ConfirmResizeCommit(*((_QWORD *)this + 73));
    v2 = (void *)*((_QWORD *)this + 72);
    *((_QWORD *)this + 73) = 0LL;
    CloseHandle(v2);
    *((_QWORD *)this + 72) = 0LL;
  }
}
