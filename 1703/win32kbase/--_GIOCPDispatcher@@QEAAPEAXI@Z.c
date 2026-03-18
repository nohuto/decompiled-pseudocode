/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C004CF70
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C008B110 (UserActivateMITInputProcessing.c)
 *     IOCPDispatcher_Destroy @ 0x1C0092860 (IOCPDispatcher_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C004CE30 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 */

HANDLE *__fastcall IOCPDispatcher::`scalar deleting destructor'(HANDLE *this)
{
  *this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  Win32FreePool((__int64)this);
  return this;
}
