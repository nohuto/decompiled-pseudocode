/*
 * XREFs of ??_GTabTipAdapter@KeyboardHosting@@UEAAPEAXI@Z @ 0x1801A19A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x1801A19D4 (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall KeyboardHosting::TabTipAdapter::`scalar deleting destructor'(
        KeyboardHosting::TabTipAdapter *this,
        char a2)
{
  KeyboardHosting::TabTipAdapter::~TabTipAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
