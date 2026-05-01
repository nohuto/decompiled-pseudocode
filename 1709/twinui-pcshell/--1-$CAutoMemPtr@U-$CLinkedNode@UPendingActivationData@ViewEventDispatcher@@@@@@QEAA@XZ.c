/*
 * XREFs of ??1?$CAutoMemPtr@U?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@@QEAA@XZ @ 0x180125C28
 * Callers:
 *     _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$0 @ 0x1801EEC8B (_ViewEventDispatcher--QueuePendingActivation_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor$0 @ 0x1801EED27 (_ViewEventDispatcher--_FlushRemovedPendingActivations_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>::~CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>(
        _QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  HSTRING v4; // rcx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = v1[4];
    if ( v2 )
    {
      v1[4] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v3 = v1[3];
    if ( v3 )
    {
      v1[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = (HSTRING)v1[2];
    if ( v4 )
      WindowsDeleteString(v4);
    operator delete(v1);
  }
}
