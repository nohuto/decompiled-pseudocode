/*
 * XREFs of ??_GViewEventDispatcher@@EEAAPEAXI@Z @ 0x1800F10D8
 * Callers:
 *     ??_EViewEventDispatcher@@GFA@EAAPEAXI@Z @ 0x1801014C0 (--_EViewEventDispatcher@@GFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x1800F110C (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewEventDispatcher *__fastcall ViewEventDispatcher::`scalar deleting destructor'(ViewEventDispatcher *this, char a2)
{
  ViewEventDispatcher::~ViewEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
