/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C003B804
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C009AB98 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C009C0C0 (IOCPDispatcher_Destroy.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C003B6D0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

HANDLE *__fastcall IOCPDispatcher::`scalar deleting destructor'(HANDLE *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  Win32FreePool(this, v2, v3);
  return this;
}
