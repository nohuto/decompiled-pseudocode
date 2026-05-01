/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1802A4A54
 * Callers:
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x1802A4820 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1802A4A0C (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1802A4CC4 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     ?KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z @ 0x1802A5130 (-KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z.c)
 *     ?LostCapture@ElementDragData@@UEAAXXZ @ 0x1802A5190 (-LostCapture@ElementDragData@@UEAAXXZ.c)
 *     ?PointerLeave@ElementDragData@@UEAAXXZ @ 0x1802A52C0 (-PointerLeave@ElementDragData@@UEAAXXZ.c)
 *     ?PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A5320 (-PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A53A0 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180072120 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180136554 (--0ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)a1 + 6);
  if ( *v2 == 1 )
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  else
    wil::ActivityThreadWatcher::ActivityThreadWatcher(this);
  return this;
}
