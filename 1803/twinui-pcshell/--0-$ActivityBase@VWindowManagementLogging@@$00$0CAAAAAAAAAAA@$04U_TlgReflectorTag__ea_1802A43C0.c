/*
 * XREFs of ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802A43C0
 * Callers:
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802A47A0 (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A58C0 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800182E0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x1800190E4 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x1800F5F6C (--0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z.c)
 *     ??0srwlock@wil@@QEAA@XZ @ 0x1800FBB68 (--0srwlock@wil@@QEAA@XZ.c)
 *     ??0IFailureCallback@details@wil@@QEAA@XZ @ 0x180104128 (--0IFailureCallback@details@wil@@QEAA@XZ.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  char v4; // r8
  __int64 v5; // rax
  char *v6; // rcx
  bool v7; // zf

  wil::details::IFailureCallback::IFailureCallback(a1);
  *(_QWORD *)a1 = &wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    v4);
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 14) = *(_DWORD *)(a2 + 56);
  *((_BYTE *)a1 + 60) = *(_BYTE *)(a2 + 60);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  wil::details::StoredCallContextInfo::StoredCallContextInfo((char *)a1 + 96, a2 + 96);
  *((_DWORD *)a1 + 32) = *(_DWORD *)(a2 + 128);
  *((_DWORD *)a1 + 33) = *(_DWORD *)(a2 + 132);
  wil::StoredFailureInfo::StoredFailureInfo((__int64)a1 + 136, a2 + 136);
  wil::srwlock::srwlock((struct wil::details::IFailureCallback *)((char *)a1 + 296));
  *((_QWORD *)a1 + 38) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v5 = *((_QWORD *)a1 + 38);
  v6 = (char *)(v5 + 8);
  if ( !v5 )
    v6 = (char *)a1 + 56;
  *((_QWORD *)a1 + 6) = v6;
  *((_QWORD *)a1 + 5) = v6 + 40;
  v7 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( !v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
