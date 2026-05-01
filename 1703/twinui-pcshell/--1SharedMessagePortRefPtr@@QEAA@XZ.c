/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x180173708
 * Callers:
 *     _TabTipAdapter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801A4F66 (_TabTipAdapter--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
