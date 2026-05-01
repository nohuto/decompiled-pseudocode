/*
 * XREFs of ??_GViewManagerBridge@@UEAAPEAXI@Z @ 0x1801C9D00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewManagerBridge@@UEAA@XZ @ 0x1801C8C9C (--1ViewManagerBridge@@UEAA@XZ.c)
 */

ViewManagerBridge *__fastcall ViewManagerBridge::`scalar deleting destructor'(ViewManagerBridge *this, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  ViewManagerBridge::~ViewManagerBridge(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
