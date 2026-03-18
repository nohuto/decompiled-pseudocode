/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C0121A7C
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0122434 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C0124890 (IOCPDispatcher_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0121DA0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 */

IOCPDispatcher *__fastcall IOCPDispatcher::`scalar deleting destructor'(IOCPDispatcher *this)
{
  *(_QWORD *)this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  Win32FreePool((__int64)this);
  return this;
}
