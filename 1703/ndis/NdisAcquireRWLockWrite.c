/*
 * XREFs of NdisAcquireRWLockWrite @ 0x1C000D370
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C00142C8 (ndisConfigurePeriodicReceives.c)
 *     XNoteFilterOpenAdapter @ 0x1C001A438 (XNoteFilterOpenAdapter.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C001BC64 (ndisPostSetOpenPacketFilter.c)
 *     XRemoveBindingFromLists @ 0x1C0026618 (XRemoveBindingFromLists.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0050474 (ndisBindUnbindPeriodicReceives.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0114DC4 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAcquireRWLockWrite(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, UCHAR Flags)
{
  unsigned __int64 *p_WriteLock; // rcx
  __int64 v6; // rax
  unsigned int *v7; // rcx
  void **v8; // r8
  __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned int *v11; // rdx

  LockState->LockState = 1;
  LockState->Flags = Flags;
  if ( Lock->Owner == KeGetCurrentThread() )
  {
    LockState->LockState = 2;
  }
  else
  {
    p_WriteLock = &Lock->WriteLock;
    if ( (Flags & 1) != 0 )
      KeAcquireSpinLockAtDpcLevel(p_WriteLock);
    else
      LockState->OldIrql = KeAcquireSpinLockRaiseToDpc(p_WriteLock);
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    v7 = Lock->RefCount[v6];
    v8 = &Lock->SourceHandle + v6;
    v9 = 0LL;
    v10 = *v7;
    for ( *v7 = 0; (unsigned int)v9 < ndisMaxNumberOfProcessors; v9 = (unsigned int)(v9 + 1) )
    {
      v11 = Lock->RefCount[v9];
      while ( *v11 )
        _mm_pause();
    }
    *(_DWORD *)v8[4] = v10;
    Lock->Owner = KeGetCurrentThread();
    LockState->LockState = 4;
  }
}
