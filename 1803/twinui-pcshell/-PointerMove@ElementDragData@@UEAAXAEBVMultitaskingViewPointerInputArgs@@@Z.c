/*
 * XREFs of ?PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A5320
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800720F8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1802A4A54 (-ContinueOnCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgRefl.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A4A8C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

void __fastcall ElementDragData::PointerMove(ElementDragData *this, const struct MultitaskingViewPointerInputArgs *a2)
{
  _BYTE v4[88]; // [rsp+20h] [rbp-58h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (ElementDragData *)((char *)this + 184),
    (wil::ActivityThreadWatcher *)v4);
  if ( *((_DWORD *)this + 124) != 3 && (!*((_DWORD *)this + 27) || *(_QWORD *)((char *)this + 92) != *(_QWORD *)a2) )
    ElementDragData::DragOver(this, a2);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v4);
}
