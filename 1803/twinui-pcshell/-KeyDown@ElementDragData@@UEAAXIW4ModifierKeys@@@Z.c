/*
 * XREFs of ?KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z @ 0x1802A5130
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800720F8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1802A4A0C (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1802A4A54 (-ContinueOnCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgRefl.c)
 */

void __fastcall ElementDragData::KeyDown(_DWORD *a1, int a2)
{
  _BYTE v4[88]; // [rsp+20h] [rbp-58h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 46),
    (wil::ActivityThreadWatcher *)v4);
  if ( (unsigned int)(a1[124] - 2) > 1 && a2 == 27 )
    ElementDragData::CancelDrag((ElementDragData *)a1);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v4);
}
