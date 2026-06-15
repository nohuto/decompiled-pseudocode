/*
 * XREFs of ??1CSyncWorkItem@@UEAA@XZ @ 0x18000690C
 * Callers:
 *     _CStreamStoppedWorkItem::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180027D61 (_CStreamStoppedWorkItem--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CSyncWorkItem::~CSyncWorkItem(CSyncWorkItem *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
