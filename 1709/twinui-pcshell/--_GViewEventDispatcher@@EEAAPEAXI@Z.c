/*
 * XREFs of ??_GViewEventDispatcher@@EEAAPEAXI@Z @ 0x18011BB44
 * Callers:
 *     ??_EViewEventDispatcher@@GHA@EAAPEAXI@Z @ 0x18012BBC0 (--_EViewEventDispatcher@@GHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x18011BB78 (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewEventDispatcher *__fastcall ViewEventDispatcher::`scalar deleting destructor'(ViewEventDispatcher *this, char a2)
{
  ViewEventDispatcher::~ViewEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
