/*
 * XREFs of ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000B190
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001FDCC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryClose @ 0x1C0032140 (imp_WdfRegistryClose.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C0082AC4 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001FDCC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003B710 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003CF48 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::DisposeChildrenWorker(
        FxObject *this,
        FxObjectState NewDeferedState,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject *v7; // rbx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v10; // rsi
  unsigned __int16 m_ObjectFlags; // ax
  KIRQL v13; // al
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // al
  KIRQL v16; // di
  unsigned __int16 m_ObjectSize; // ax
  char *i; // rdi
  void (__fastcall *v19)(unsigned __int64); // rax
  KIRQL v20; // [rsp+50h] [rbp+8h]

  v7 = this;
  if ( (this->m_ObjectFlags & 0x20) != 0 && OldIrql )
  {
    if ( !CanDefer )
    {
      FxObject::SetObjectStateLocked(this, NewDeferedState);
      goto LABEL_20;
    }
LABEL_18:
    FxObject::QueueDeferredDisposeLocked(this, NewDeferedState);
LABEL_20:
    KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
    return 0;
  }
  p_m_ChildListHead = &this->m_ChildListHead;
  Flink = this->m_ChildListHead.Flink;
  if ( Flink != p_m_ChildListHead )
  {
    while ( !OldIrql || ((__int64)Flink[-3].Flink & 0x10) == 0 )
    {
      Flink = Flink->Flink;
      if ( Flink == p_m_ChildListHead )
        goto LABEL_3;
    }
    this = v7;
    if ( !CanDefer )
    {
      FxObject::SetObjectStateLocked(v7, NewDeferedState);
      goto LABEL_20;
    }
    goto LABEL_18;
  }
LABEL_3:
  KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
  v10 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_4:
    if ( (v7->m_ObjectFlags & 0x800) == 0 || v7->Dispose(v7) )
    {
      m_ObjectFlags = v7->m_ObjectFlags;
      if ( (m_ObjectFlags & 0x400) != 0 && (m_ObjectFlags & 8) != 0 )
      {
        m_ObjectSize = v7->m_ObjectSize;
        if ( m_ObjectSize )
        {
          for ( i = (char *)v7 + m_ObjectSize; i; i = (char *)*((_QWORD *)i + 1) )
          {
            v19 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)i + 2);
            if ( v19 )
            {
              v19((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
              *((_QWORD *)i + 2) = 0LL;
            }
          }
        }
        v7->m_ObjectFlags &= ~0x400u;
      }
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v10[-1]);
      v20 = v13;
      if ( WORD1(v10[-3].Flink) != 1 )
      {
        switch ( WORD1(v10[-3].Flink) )
        {
          case 5:
            v14 = v13;
            goto LABEL_12;
          case 7:
            v15 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v10[-5].Blink, v13, 0);
            goto LABEL_13;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v10[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)&v10[-1], v20);
            goto LABEL_14;
        }
      }
      FxObject::SetObjectStateLocked((FxObject *)&v10[-5].Blink, FxObjectStateDisposingEarly);
      v14 = v20;
LABEL_12:
      v15 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v10[-5].Blink, v14, 0);
LABEL_13:
      if ( !v15 )
        break;
LABEL_14:
      v10 = v10->Flink;
      if ( v10 == p_m_ChildListHead )
        goto LABEL_4;
    }
    v16 = KeAcquireSpinLockRaiseToDpc(&v7->m_SpinLock.m_Lock);
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(v7, NewDeferedState);
    else
      FxObject::SetObjectStateLocked(v7, NewDeferedState);
    KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, v16);
    return 0;
  }
}
